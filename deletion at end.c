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
	
   // delection at end
   a[size-1]=NULL;
    size--;	
	
		printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d \n",a[i]);
	}
	
	
	
	
	
	
}
