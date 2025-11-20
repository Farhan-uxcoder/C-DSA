//Stack implementation using dynamic array
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int top=-1;
int *stack=NULL;
void createStack()
{
        stack=(int *)malloc(MAX*sizeof(int));
        if(stack==NULL)
        {
            printf("Memory full\n");
            exit(0);
        }
}
int isempty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
int isfull()
{
    if(top==MAX-1)
    return 1;
    else
    return 0;
}
void push(int x)
{
    if(isfull())
    {
        printf("Stack overflow\n");
        return;
    }
    stack[++top]=x;
}
int pop()
{
    if(isempty())
    {
        printf("stack underflow");
        return -1;
    }
    return stack[top--];
}
void display()
{
    if(isempty())
    {
        printf("stack underflow\n");
        return;
    }
    for(int i=top;i>=0;i--)
    printf("%d\n",stack[i]);
}
int peek()
{
    if(isempty())
    {
        printf("stack underflow\n");
        return -1;
    }
    return stack[top];
}

int main()
{
    createStack();
    int ch,x;
    while(1)
    {
       printf("1. push\n");
       printf("2. pop\n");
       printf("3. display\n");
       printf("4. peek\n");
       printf("5. exit\n");
       printf("Whats your choice?\n");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:  printf("Enter the element to be pushed\n");
                    scanf("%d",&x);
                    push(x);
                    break;
            case 2: x=pop();
                    if(x!=-1)
                    printf("Popped element is %d\n",x);
                    break;
            case 3:display();
                    break;
            case 4: x=peek();
                    if(x!=-1)
                    printf("Top element is %d\n",x);
                    break;
            case 5:exit(0);
       }
    }
    return 0;
}
