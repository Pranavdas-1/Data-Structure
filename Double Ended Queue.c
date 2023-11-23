#include<stdio.h>
#include<stdlib.h>
#define size 4
int Q[size];
int item;
int f=-1,r=1;
void insertrear(int);
void insertfront(int);
int deletefront();
int deleterear();
int isfull();
int isempty();
void Display();
void main()
{
	int ch;
	
	do{
		printf("\n1.INSERT REAR\n2.INSERT FRONT\n3.DELETE REAR\n4.DELETE FRONT\n5.DISPLAY\n6.EXIT\n");
		printf("Enter the Choise :-");
		scanf("%d",&ch);
		switch(ch){
			case 1: if(isfull()){
					printf("FULL");
				}
				else{
					printf("Enter the number to be inserted: ");
					scanf("%d",&item);
					insertrear(item);
				}
				break;
			case 2: if(isfull()){
					printf("FULL");
				}
				else{
					printf("Enter the number to be inserted: ");
					scanf("%d",&item);
					insertfront(item);
				}
				break;
			case 3: if(isempty()){
					printf("EMPTY");
				}
				else{
					item=deleterear();
					printf("The deleted Element id:%d",item);
				}
				break;
			case 4: if(isempty()){
					printf("EMPTY");
				}
				else{
					item=deletefront();
					printf("The deleted Element id:%d",item);
				}
				break;
			case 5:Display();
				break;
			case 6:exit(0);
		}
	}while(1);
}
void insertrear(int item)
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
void insertfront(int item)
{
	if(isfull())
	{
		printf("Q is full");
	}
	else{
		if(f==-1){
			f=r=0;
		}
		else if(f==0){
			f=size-1;
		}
		else{
			f--;
		}

	}
	Q[f]=item;
}
int deletefront()
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
int deleterear()
{
	if(isempty()){
		printf("Empty");
		return -1;
	}
	item=Q[r];
	if(f==r)
	{
		f=r=-1;
	}
	else if(r==0){
		r=size-1;
	}
	else{
	r--;
	}
	return(item);
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
