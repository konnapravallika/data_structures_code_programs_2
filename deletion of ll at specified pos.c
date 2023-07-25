#include <stdio.h>
#include <stdlib.h>
main(){
	struct node{
		int data;
		struct node*next;
	};
	int size,count,i,pos;
	printf("enter the no of nodes you wanna create \n");
	scanf("%d",&size);
	struct node *head=NULL,*newnode,*temp=NULL,*tem;
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
	
	printf("enter the position that you want to delete\n");
	scanf("%d",&pos);
		temp=head;
	for(i=2;i<pos;i++){
		temp=temp->next;
		
		
	}
	tem=temp->next;
	temp->next=temp->next->next;
     free(tem);
	
	temp=head;
	printf("print the array \n");
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
}
