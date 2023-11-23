#include<stdio.h>
#include<stdlib.h>
#define size 4
int Q[size];
int item;
int f=-1,r=1;
void insertQ(int);
int deleteQ();
int isfull();
int isempty();
void main()
{
	int ch;
	
	do{
		printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
		printf("Enter the Choise :-");
		scanf("%d",&ch);
		switch(ch){
			case 1: if(isfull()){
					printf("FULL");
				}
				else{
					printf("Enter the number to be inserted: ");
					scanf("%d",&item);
					insertQ(item);
				}
				break;
			case 2: if(isempty()){
					printf("EMPTY");
				}
				else{
					item=deleteQ();
					printf("The deleted Element id:%d",item);
				}
				break;
			case 3:Display();
				break;
			case 4:exit(0);
		}
	}while(1);
}
void insertQ(int item)
{
	if(isempty())
	{
		f=0;
		r=0;
		Q[r]=item;
	}
	else{
		r=(r+1)%size;
		Q[r]=item;
	}
}
int deleteQ()
{
	item=Q[f];
	if(f==r)
	{
		f=-1;
		r=-1;
	}
	else{
		f=(f+1)%size;
		return(item);
	}
}
void Display(){
	int i;
	
        if(f<r)
	{
		for(i=f;i<=r;i++)
		{
			printf("%d\n",Q[i]);
		}
	}
	else if(r<f)
	{
		for(i=0;i<size;i++)
		{
			printf("%d\t",Q[i]);
		}
	}
        else if(f==-1 && r==-1)
	{
		printf("Q is Empty");
	}
}

int isempty(){
	if(f==-1)
		return(1);
	else
		return(0);
}
int isfull(){
	if(f==(r+1)%size)
		return(1);
	else
		return(0);
}
			
