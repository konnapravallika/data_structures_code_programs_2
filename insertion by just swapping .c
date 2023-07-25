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
	// insert the element at specific position .we have just swapped time complexity is decreased......
	printf("enter the data you want to insert \n");
	scanf("%d",&num);
	printf("enter the position at you want to insert \n");
	scanf("%d",&pos);
	a[size]=a[pos-1];
	a[pos-1]=num;
	printf("print the elements of an array\t");
	printf("\n");
	size++;
	for(i=0;i<size;i++)
	{
		printf("%d \n",a[i]);
	}
	
	
	
	
	
	
}
