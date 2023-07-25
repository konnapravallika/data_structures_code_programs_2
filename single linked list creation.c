#include<stdio.h>
#include<stdlib.h>
main(){
	struct node{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*newnode,*temp=NULL;
	int size,i;
	printf("enter how many nodes you want to create :");
	scanf("%d",&size);
	for(i=0;i<size;i++){
	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter node data :");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
}
	//printing the linked list
	printf("print the linked list \n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	//insertion at end
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter new node data\n");
	scanf("%d",&newnode->data);
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=NULL;
	printf("print the linked list again \n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
}
