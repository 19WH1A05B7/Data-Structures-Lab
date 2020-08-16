#include<stdio.h>
struct student
{
    char rollno[10];
    char name[20];
    int m[3];
    float avg;
    char grade;
};
int main()
{
    struct student s[15];
    float avg,sum;
    int n,i,j;
    char grade;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum = 0;
        scanf("%s",s[i].name);
        scanf("%s",s[i].rollno);
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i].m[j]);
            sum=sum+s[i].m[j];
        }
        avg=sum/3.0;
        if(avg>=50.0)
        grade='A';
        else
        grade='B';
           
        printf("name=%s\n",s[i].name);
        printf("rollno=%s\n",s[i].rollno);
        printf("grade=%c\n",grade);
     }
} 





