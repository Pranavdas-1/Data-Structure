#include<stdio.h>

void insertion(int x[],int n)
{
	int i,j,Key;	
	for(i=1;i<n;i++)
	{
		Key=x[i];
		j=i-1;
		while(j>=0 && x[j]>Key)
		{
			x[j+1]=x[j];
			j--;		
		}
	x[j+1]=Key;
	}
}

void read(int x[],int n)
{
	int i;
	printf("Enter the numbers ");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
}

void print(int x[],int n)
{
	int i;
	printf("the sorted array is :");
	for(i=0;i<n;i++)
		{
		printf("%d",x[i]);
		printf("\t");
		}
}

void main()
{
	int i,n,x[10];
	printf("Enter count of numbers ");
	scanf("%d",&n);
	read(x,n);
	insertion(x,n);
	print(x,n);
}
