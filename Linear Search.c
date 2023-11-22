#include<stdio.h>

int linearsearch(int x[],int n,int m)
{
	int i,flag=0,d;
	for(i=0;i<n;i++)
	{
		if(x[i]==m)
		{
			flag=1;	
			d=i;
		}
	}
	if(flag==1)
	{
		return(d);
	}
	else
	{
		return(0);
	}		
}

void read(int x[],int n)
{
	int i;
	printf("Enter the numbers ");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
}

void main()
{
	int n,x[22],m,l;
	printf("Enter number of elements");
	scanf("%d",&n);
	read(x,n);
	printf("Enter the number to be searched");
	scanf("%d",&m);
	l=linearsearch(x,n,m);
	if(l!=0)
		printf("Number found in %d place",l+1);
	else
		printf("Number not found");
}
