//stack implementation using arrays
#include<stdio.h>
#include<stdlib.h>
int a[10],top=-1;
#define maxsize 5
void push(int item)
{
        top++;
        a[top]=item;
}
 int pop()
{
        return(a[top]);
}
int isfull()
{
         if(top==maxsize-1)
          return 1;
         else
          return 0;
}
int isempty()
{
        if(top==-1)
          return 1;
         else
          return 0;

}
int peek()
{
       return(a[top]);
}
void display()
{
        for(int i=top;i>=0;i--)
        printf("%d ",a[i]);
}
int main()
{
        int ch;
        while(1)
        {
             printf("program of stack using array");
             printf("\n1-push\n2-pop\n3-display\n4-peek\n5-exit\n");
             printf("enter your choice\n");
             scanf("%d",&ch);
             switch(ch)
             {
                case 1: if(isfull())
                        printf("Stack overflow\n");
                        else
                        {
                           int x;
                           printf("enter data to push\n");
                           scanf("%d",&x);
                           push(x);
                        }
                        break;
                case 2: if(isempty())
                        printf("Stack underflow");
                        else
                        {
                        int x;
                        x=pop();
                        printf("deleted element is %d\n",x);
                        top--;
                        }
                        break;
                case 3: display();
                         break;
                case 4: printf("top most element on the stack is %d\n",peek());
                         break;
                case 5: exit(0);
              }
        }        
}