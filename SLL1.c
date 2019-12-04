/*Single Linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *nn=NULL, *temp=NULL,*head=NULL;
void insert(int val);
void display();
/*void insert(int val){
	nn=(struct node *)malloc(sizeof(struct node));
	nn->data=val;
	nn->next=NULL;
	if(head==NULL)
	{
		
		head=nn;
	}
	else
	{
		
		temp=head;
		while(temp->next!=NULL)
		{
			
			temp=temp->next;
		}
		temp->next=nn;
	}
}
void display()
{
		temp=head;
		while(temp->next!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("%d ",temp->data);
}*/

main()
{
	 int ch,val;
	 while(1)
	 {
	 	printf("1.insert 2.delete   3.dispaly  4.exit");
	 	scanf("%d",&ch);
	 	if(ch==1)
		{
			printf("Enter value to insert:");
			scanf("%d",&val);
			insert(val);
		}	
		else if (ch==3)
		{
			display();
		}
	 }
	 
}
void insert(int val){
	nn=(struct node *)malloc(sizeof(struct node));
	nn->data=val;
	nn->next=NULL;
	if(head==NULL)
	{
		
		head=nn;
	}
	else
	{
		
		temp=head;
		while(temp->next!=NULL)
		{
			
			temp=temp->next;
		}
		temp->next=nn;
	}
}
void display()
{
		temp=head;
		while(temp->next!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("%d ",temp->data);
}

