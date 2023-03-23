#include<stdio.h>
#include<stdlib.h>
#define N 5;
int stack[N] = {};
int top = -1;
void push()
{
int x; //let us suppose x=5
printf("enter the data\n");
scanf("%d",&x);
if(top == N-1)
{
    printf("overflow\n");
}
else
{
    top++;
    stack[top]=x; //stack[top] means as top++ hua means 0th index i.e. stack[0] i.e. 5
}
}
void pop()
{
    int item;
    if(top == -1)
    {printf("underflow\n");}
    else
    {
     item = stack[top];   //means jo stack[top] me value hoyegi wo item me aajegi
        top--;
        prinntf("the popped item is %d",item);
    }
}
//peek: getting the top most element of the stack without removing it means here we will dont do top--we just want to see that which element is at the top of the stack
void peek()
{
    if(top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("the topmost element is %d",stack[top]);
    }
}
void display()
{
    int i;
    for(i=top;i<=0;i--) //from top to zero
//  for(i=0;i<=top;i++)
{
    printf("%d",stack[i]);
}
}
int main()
{
    int ch;
    printf("enter 0 if you want to finish it \n");
    do{
        printf("enter choice 1:push 2:pop 3:peek 4:display");
        scanf("%d",&ch);
        switch(ch){
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        peek();
        break;
       case 4:
        display();
        break;
        default:
        printf("invalid choice");
        }
        while(ch =! 0)
    }
    return 0;
}