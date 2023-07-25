#include<stdio.h>
main(){
	int a[50],size,i,num,pos;
	printf("enter size of an array\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter element %d  ",i+1);
		scanf("%d",&a[i]);
	}
	printf("print the elements of an array\t");
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d \n",a[i]);
	}
	// insert the element at specific position
	printf("enter the data you want to insert \n");
	scanf("%d",&num);
	printf("enter the position at you want to insert \n");
	scanf("%d",&pos);
	if(pos<=0||pos>size+1)
	{
		printf("invlid insertion \n");
	}
	else{
		for(i=size-1;i>=pos-1;i--)
		{
			a[i+1]=a[i];
		}
		a[pos-1]=num;
		size++;
	}
	
	printf("print the elements of an array\t");
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d \n",a[i]);
	}
	
	
}
