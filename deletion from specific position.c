#include<stdio.h>
main()
{
	
	int a[50],size,i,pos;
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
	//deletion from specific position
	printf("enthe the pos of a element that you want to delete");
	scanf("%d",&pos);
	for(i=pos-1;i<size;i++)
	{
		a[i]=a[i+1];
	}
	size--;
	printf("print the elements of an array\t");
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d \n",a[i]);
	}
}
