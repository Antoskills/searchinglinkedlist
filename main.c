#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link;
};

int main()
{
  struct node *newptr ,*save, *ptr, *start=NULL;
  int data,n;
  printf("enter number of nodes :");
  scanf("%d",&n);
  for(int i=n;i>0;i--)
    {
      newptr= (struct node*)malloc(sizeof(struct node));
      if(newptr==NULL)
      {
        printf("\n overflow");
      }
      printf("enter the elements");
      scanf("%d",&data);
      newptr->data=data;
      newptr->link=NULL;
      if(start==NULL)
      { 
        start=newptr;
      }
      else
      {
        save=start;
        start=newptr;
        newptr->link=save;
      }
    }
  ptr=start;
  while(ptr!=NULL)
    {
      printf("\n%d\t",ptr->data);
      ptr=ptr->link;
    }
  int ele,flag=0,i;
  printf("enter element to be searched:");
  scanf("%d",&ele);
  ptr=start;
  while(ptr!=NULL)
    {
      i++;
      if(ele==ptr->data)
      {
        flag=1;
        printf("element found at %d",ptr->data);
        break;
      }
      ptr=ptr->link;
    }
  if(flag==0)
    printf("element not found!"); 
}