#include<stdio.h>
#include<string.h>
#define size 20
int top=0;
char Stack[size];
void push(char);
char pop();
void main()
{
	int i;
	char str[20];
	printf("Enter a string :- ");
	gets(str);
	
	for(i=0;i<strlen(str);i++)
	{
		push(str[i]);
	}
	for(i=0;i<strlen(str);i++)
	{
		str[i]=pop();
	}
	printf("reversed string is\n");
	puts(str);
}

void push(char item)
{
	if(top==size)
	{
		printf("Stack Overflow");
	}
	else{
		Stack[top]=item;
		top=top+1;
	}
}
char pop()
{	
	if(top==0)
	{
		printf("Stack overflow");
	}
	else{
		top=top-1;
		return(Stack[top]);
	}
}
	
