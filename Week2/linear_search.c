#include<stdio.h>
int linear_search(int n,int a[50],int key)
{
    int i,pos=-1;
    for(i=0;i<n;i++)
    {
       if(a[i]==key)
        {
          pos=i;
          break;
        }
    }
    return pos;
}
int main()
{
    int i,pos,n,key,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    pos = linear_search(n,a,key);
    if(pos == -1)
        printf("element not present\n");
    else
        printf("element found at position %d\n",pos+1);
}
    
