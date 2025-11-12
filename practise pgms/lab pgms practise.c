// 1st pgm simulation of simple calculater
#include <stdio.h>
void main(){
int a,b,res;
char op;
printf("enter the operater\n");
scanf("%c",&op);
printf("enter the value of a \n");
scanf("%d",&a);
printf("enter the value of b \n");
scanf("%d",&b);

switch(op){
case '+' :
    res=a+b;
    break;
case '-':
    res=a-b;
    break;
case '*':
    res=a*b;
    break;
case '/':
    if(b!=0){
        res=a/b;

    }
    else
        printf("dividion not possible\n");
default:
    printf("enter the valid operater\n");
    break;
}
printf("the result of  the numbers %d and %d is %d",a,b,res);
}
