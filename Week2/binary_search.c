#include<stdio.h>
int binary_search(int first,int last,int a[50],int key)
{
    int i,mid;
    while(first <= last)
    {
        mid = (first+last)/2;
        if(a[mid] == key)
        return mid;
        else if(a[mid] < key)
        first = mid+1;
        else
        last = mid-1;
     }
     return -1;   
}
int main(void)
{
    int i,pos,n,key,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    pos = binary_search(0,n-1,a,key);
    if(pos == -1)
        printf("element not present\n");
    else
        printf("element found at position %d\n",pos+1);
}
    
