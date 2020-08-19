#include<stdio.h>
void selectionsort(int a[100],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
             if(a[j]>a[min])
             {
                  min = j;
             } 
             t=a[j];
             a[j]=a[min];
             a[min]=t;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    selectionsort(a,n);
    printf("after sorting\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}


