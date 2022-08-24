void maximum()
{
    int a[10];
    int i;
    struct node *temp;

    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start;
        int max = temp->info;

        while (temp != NULL)
        {
            if (max < temp->info)
                max = temp->info;
            temp = temp->link;
        }
        printf("\nMaximum number "
               "is : %d ",
               max);
    }
}

void mean()
{
    int a[10];
    int i;
    struct node *temp;

    if (start == NULL)
        printf("\nList is empty\n");

    else
    {
        temp = start;

        int sum = 0, count = 0;
        float m;

        while (temp != NULL)
        {

            sum = sum + temp->info;
            temp = temp->link;
            count++;
        }

        m = sum / count;

        printf("\nMean is %f ", m);
    }
}

void sort()
{
    struct node *current = start;
    struct node *index = NULL;
    int temp;

    if (start == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            index = current->link;

            while (index != NULL)
            {
                if (current->info > index->info)
                {
                    temp = current->info;
                    current->info = index->info;
                    index->info = temp;
                }
                index = index->link;
            }

            current = current->link;
        }
    }
}