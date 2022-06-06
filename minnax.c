#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sorted(int a[])
{
	int size,i;
	printf("Enter the element of the array: ");
	scanf("%d",&size);
	printf("Enter Elements: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Minimum element in the array is %d\n",a[0]);
	printf("Maximum element in the array is %d\n",a[size-1]);
}

void selection(int a[])
{
	int i,j,index,size,temp;
	printf("Enter element of the array :");
	scanf("%d",&size);
	printf("Enter Elements: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		index=i;
		for(j=i+1;j<size;j++)
		{
			if(a[j]<a[index])
			{
				index=j;
			}
		temp=a[index];
		a[index]=a[i];
		a[i]=temp;
		}
	}
	printf("Minimum element in the array is %d\n",a[0]);
	printf("Maximum element in the array is %d\n",a[size-1]);
	
}

void compare(int a[])
{
	int i,j,size,temp,min,max;
	printf("Enter the elemts in the array :");
	scanf("%d",&size);
	printf("Enter elements:");
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Minimum element in the array is %d\n",min);
	printf("Maximum element in the array is %d\n",max);
				




}
int main()
{
	int choice,size;
	int a[100];
	while(1)
	{
		printf("Menu \n");
		printf("1.Sorted Array \n");
		printf("2.Unsorted Array \n");
		printf("3.Comparision \n");
		printf("4.Exit \n");

		printf("Enter choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				sorted(a);
				break;
			case 2:
				selection(a);
				break;
			case 3:
				compare(a);
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong Choice .");

		}
	}		
}