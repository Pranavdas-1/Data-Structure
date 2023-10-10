#include<stdio.h>

int binery(int x[],int k,int m)
{
	int top,bot,mid;
	top=0;
	bot=m-1;
	while(top<=bot)
	{
		mid=(top+bot)/2;
		if(x[mid]==k)
		{
			return(mid);
		}
		else if(x[mid]>k)
		{
			bot=mid-1;
		}
		else if(x[mid]<k)
		{
			top=mid+1;
		}
	}
	return 0;
}

void main()
{
	int i,n,k,x[20],l;
	printf("Enter number of element   ; ");
	scanf("%d",&n);
	printf("Enter the numbers ");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	printf("Enter the number to be searched");
	scanf("%d",&k);
	l=binery(x,k,n);
	if(l==0)
	{
		printf("not found");
	}
	else
	{
		printf("The element is found in the index %d",l);
	}
}
