#include<stdio.h>
int pop();
void push(int val);
int peek();
int top=-1;
int stack[500];
int n=500;
int pop(){
	if (top==-1){
		printf("The stack underflow");
	        return -1;
	}
	else {
		return stack[top--];
	}
}
void push(int val){
	if (top==n-1){
		printf("Stack is already full");
	}
	else{
		stack[top++]=val;
	}
}
int peek(){
	if(top==-1){
		printf("The stack is empty");
	        return 0;
 	}
	return stack[top];
}
int main(){
	printf("Choices\n");
	printf("1.push\n");
	printf("2.Pop\n");
	printf("3.Peek\n");
	printf("4.Quit\n");
	printf("Enter your choice\n");
	int ch;
	scanf("%d",&ch);
	switch (ch){
		case 1:
			int val;
			printf("Enter the number to push");
			scanf("%d",&val);
			push(val);
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			return 0;
			break;
		default: 
			printf("Invalid choice");
			break;

	int a=10;
	int b=90;
	int c=26;
	push(a);
	push(b);
	int p=pop();
	int q=peek();
	printf("%d is the element retrived using pop.\n%d is the element retrived using peek\n",p,q);
	return 0;
}

