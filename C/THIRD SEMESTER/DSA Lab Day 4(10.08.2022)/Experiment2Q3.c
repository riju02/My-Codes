#include <stdio.h>
#include <conio.h>
#include <string.h>

struct emp
{
    char name[20],des[20],dep[20],gen[20];
    float bpay, gpay,HR,DA;
} e[100];

int main()
{
    int i, n_035;
    printf("\n Enter The Number Of Employees:   ");
    scanf("%d", &n_035);
    for (i = 0; i < n_035; i++)
    {
        printf("\n Enter The Name:   ");
        scanf("%s", &e[i].name);
        printf("\n Enter The Gender:   ");
        scanf("%s", &e[i].gen);
        printf("\n Enter The Designation:   ");
        scanf("%s", &e[i].des);
        printf("\n Enter The Department:   ");
        scanf("%s", &e[i].dep);
        printf("\n Enter The Basic Pay:   ");
        scanf("%f", &e[i].bpay);
        e[i].HR=e[i].bpay*0.25;
        e[i].DA=e[i].bpay+0.75;
        e[i].gpay=e[i].bpay+e[i].HR+e[i].DA;

    }
    for (i = 0; i < n_035; i++)
    {
        printf("\n Details of Employee Number- %d\n",i+1);
        printf("\n Employee Name: %s", e[i].name);
        printf("\t Employee Gender: %s", e[i].gen);
        printf("\n Employee Designation: %s", e[i].des);
        printf("\t Employee Department: %s", e[i].dep);
        printf("\n Employee Salary: %f", e[i].gpay);
        printf("\n");
    }
    return 0;
}
