#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node* link;
};
struct node* head=NULL,*tail=NULL,*cur,*prev,*next;
void create()
{
        int i,n;
        printf("enter how many number of nodes to be created:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		cur=(struct node*)malloc(sizeof(struct node));
		printf("Enter current node data:\n");
		scanf("%d",&cur->data);
		cur -> link=NULL;
		if(head == NULL)
                {
			head=tail=cur;
                }
		else
		{
			tail->link=cur;
			tail=cur;
		}
        }
}
void display()
{
    if(head == NULL)
    printf("list is empty\n");
    else
    {
        next = head;
        while(next != NULL)
        {
            printf("%d->",next->data);
            next = next->link;
        }
    }
}
void display_in_reverse()
{
           int a[100],i=0;
           cur=head;
           while(cur!=NULL)
           {
                a[i++]=cur->data;
                cur=cur->link;
           }
           while(i>=0)
           {
                printf("%d->",a[i]);
                i--;
           }
        
}          
void insert_at_begin()
{
          cur=(struct node*)malloc(sizeof(struct node));
	  printf("Enter current node data:\n");
	  scanf("%d",&cur->data);
          cur->link=head;
          head=cur;
}
void insert_at_position()
{
          int pos,c=1;
          printf("Enter the position to insert data:\n");
          scanf("%d",&pos);
          cur=(struct node*)malloc(sizeof(struct node));
	  printf("Enter current node data:\n");
	  scanf("%d",&cur->data);
          next=head;
          while(c<pos)
          {
               prev=next;
               next=next->link;
               c++;
          }
          prev->link=cur;
          cur->link=next;
}
void insert_at_end()
{
          cur=(struct node*)malloc(sizeof(struct node));
	  printf("Enter current node data:\n");
	  scanf("%d",&cur->data);
          cur->link=NULL;
          tail->link=cur;
          tail=cur;
}
void insert_before()
{
          int value;
          cur=(struct node*)malloc(sizeof(struct node));
	  printf("Enter current node data:\n");
	  scanf("%d",&cur->data);
          printf("Enter before which node we have to perform insertion\n");
          scanf("%d",&value);
          next=head;
          while(next->data!=value && next!=NULL)
          {
                prev=next;
                next=next->link;
          }
          prev->link=cur;
          cur->link=next;
}                 
void insert_after()
{
          int value;
          cur=(struct node*)malloc(sizeof(struct node));
	  printf("Enter current node data:\n");
	  scanf("%d",&cur->data);
          printf("Enter after which node we have to perform insertion\n");
          scanf("%d",&value);
          next=head;
          while(next->data!=value && next!=NULL)
                   next=next->link;
          cur->link=next->link;
          next->link=cur;
}
void delete_at_begin()
{
          cur=head;
          head = cur->link;
          cur->link=NULL;
          printf("Deleted element is %d\n",cur->data);
          free(cur);
}
void delete_at_end()
{
          cur=head;
          while(cur->link!=tail)
                cur=cur->link;
          cur->link=NULL;
          next=tail;
          printf("Deleted element is %d\n",next->data);
          free(next);
          tail=cur;
}
void delete_at_pos()
{
          int pos,c=1;
          printf("enter position of deletion:\n");
          scanf("%d",&pos);
          next=head;
          while(c<pos)
          {
                prev=next;
                next=next->link;
                c++;
          }
          prev->link=next->link;
          printf("Deleted element is %d\n",next->data);
          next->link=NULL;
          free(next);
}
void delete_before_node()
{
           int value;
           printf("Enter before which node to delete:\n");
           scanf("%d",&value);
           next=head;
           while(next->link->data!=value)
           {
                 prev=next;
                 next=next->link;
           }
           prev->link=next->link;
           next->link=NULL;
           printf("Deleted element is %d\n",next->data);
           free(next);
}
void delete_after_node()
{
           int value;
           printf("Enter after which node to delete:\n");
           scanf("%d",&value);
           next=head;
           while(next->data!=value)
           {
                 prev=next;
                 next=next->link;
           }
           prev=next->link;
           next->link=prev->link;
           prev->link=NULL;
           printf("Deleted element is %d\n",prev->data);
           free(prev);
}
void search()
{
           int value,flag=0,c=0;
           printf("Enter value to be searched");
           scanf("%d",&value);
           next=head;
           while(next!=NULL)
           {
                 if(next->data==value)
                 {
                      flag=1;
                      break;
                 }
                 next=next->link;
                 c++;
           }
           if(flag==1)
           {
                printf("Element is present at %d position\n",c+1);
           }
           else
           {
                printf("Element is not present in list \n");
           }
}
void sorting()
{
           struct node *p1,*p2;
           int t;
           p1=head;
           int c=0,i;
           while(p1!=NULL)
           {
              c++;
              p1=p1->link;
           }
           for(i=0;i<c;i++)
           {
              p2=head;
              while(p2->link!=NULL)
              {
                   if(p2->data>p2->link->data)
                   {
                        t=p2->data;
                        p2->data=p2->link->data;
                        p2->link->data=t;
                   }
                   p2=p2->link;
              }
         }
}
int main()
{
      int ch;
      while(1)
      {      
           printf("Program for single linked list\n");
           printf("1-Create\n2-insert at begin\n3-insert at position\n4-insert at end\n5-insert before");
           printf("\n6-insert after\n7-delete at begin\n8-delete at end\n9-delete at pos\n10-delete before\n");
           printf("11-delete after\n12-traversal\n13-display in reverse\n14-search\n15-sort\n");
           printf("enter your choice\n");
           scanf("%d",&ch);
           switch(ch)
          {
            case 1:create();
                   break;
            case 2:insert_at_begin();
                   break;
            case 3:insert_at_position();
                   break;
            case 4:insert_at_end();
                   break;
            case 5:insert_before();
                   break;
            case 6: insert_after();
                   break;
            case 7: delete_at_begin();
                   break;
            case 8: delete_at_end();
                   break;
            case 9: delete_at_pos();
                   break;
            case 10: delete_before_node();
                    break;
            case 11: delete_after_node();
                    break; 
            case 12:display();
                   break;
            case 13: display_in_reverse();
                   break;
            case 14: search();
                   break;
            case 15: sorting();
                   break;   
            case 16:exit(0);
           }
       }
}              