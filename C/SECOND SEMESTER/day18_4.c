# include<stdio.h>
struct bookdatabase
{
int a1;char b1,b2,b3,b4,b5;
int a2;
int a3;
int a4;
int a5;
};
int main()
{
char a,b,c,d,e;
int c1,c2,c3,c4,c5,i;
printf("Enter the name \n");
scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);
printf("\n");
struct bookdatabase k={a,b,c,d,e};
printf("Enter the marks\n");
scanf("%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);
printf("\n");
struct bookdatabase j={c1,c2,c3,c4};
char aa[5];
int ab[5];
aa[0]=k.b1;
aa[1]=k.b2;
aa[2]=k.b3;
aa[3]=k.b4;
aa[4]=k.b5;
ab[0]=j.a1;
ab[1]=j.a2;
ab[2]=j.a3;
ab[3]=j.a4;
ab[4]=j.a5;
int t=ab[0];
int o=0;
for(i=0;i<4;i++)
{
if(t>ab[i+1])
{
}
else
{
t=ab[i+1];
o=i+1;
}
}
printf("\n The student %c has got  the highest mark %d",aa[o],t);
return 0;
}    

