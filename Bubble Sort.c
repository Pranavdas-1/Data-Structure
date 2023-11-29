#include<stdio.h>
void read(int x[],int n)
{
	int i;
	printf("Enter the numbers ");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
}

void sort(int x[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(x[j]>x[j+1])
				swap(&x[j],&x[j+1]);
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
void swap(int *x,int *n)
{
	int t;
		t=*x;
		*x=*n;
		*n=t;
}
void main()
{
	int n,a[10];
	printf("Enter number of element   ; ");
	scanf("%d",&n);
	read(a,n);
	sort(a,n);
	print(a,n);
}
