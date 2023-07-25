#include <stdio.h>
#include <stdlib.h>
main(){
	struct node{
		int data;
		struct node*next;
	};
	int size,count,i;
	printf("enter the no of nodes you wanna create \n");
	scanf("%d",&size);
	struct node *head=NULL,*newnode,*temp=NULL;
	for(i=0;i<size;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the node data :");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
	}
	temp=head;
	printf("print the array \n");
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	//insertion at end
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter new node data\n");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	
	temp=head;
	printf("print the array  again\n");
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
	
}
