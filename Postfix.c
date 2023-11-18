#include<stdio.h>
char postfix[50],infix[50],stack[50];
int top=0; 
int instackpriority(char);
int inputpriority(char);
void push(char);
char pop();
char peek();
void main(){
	int i=0,j=0;
	char c;
	printf("Enter the INFIX :- ");
	gets(infix);
	while(infix[i]!='\0'){
		switch(infix[i]){
			case'(':push(infix[i]);
				break;
			case'+':
			case'-':return 2;
				break;
			case'*':
			case'/':return 4;
				break;
			case'^':while(isempty() && instackpriority(peek())>instackpriority(infix[i])){
					postfix[j++]=pop();
					push(infix[i]);
				}
				break;
			case')':while((c=pop())!='c'){
					postfix[j++]=c;
				}
				break;
			default:postfix[j++]=infix[i];
		}
	}
	while(isempty())
		postfix[j++]=pop();
	postfix[j]='\0';
	puts(postfix);
	
}
int intstackpriority(char c){
	switch(c){
		case'+':
		case'-':return 2;
			break;
		case'*':
		case'/':return 4;
			break;
		case'^':return 5;
			break;
		case'(':return 0;
			break;
	}
}
int instackpriority(char c){
	switch(c){
		case'+':
		case'-':return 1;
			break;
		case'*':
		case'/':return 3;
			break;
		case'^':return 6;
			break;
		
	}
}
void push(char c){
	stack[top]=c;
	top=top+1;
}
char pop(){
	top=top-1;
	return(stack[top]);
}
char peek(){
	return(stack[top-1]);
}
int isempty(){
	if(top==0)
		return 1;
	else
		return 0;
}
