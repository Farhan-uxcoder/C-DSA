#include<stdio.h>
#include<stdlib.h>
void main(){
char op;
float a,b,res;
printf("enter the operater \n");
scanf("%c",&op);
printf("enter the two operands \n");
scanf("%f%f",&a,&b);
switch(op){
case '+':
    res = a+b;
    break;
case'-':
    res=a-b;
    break;
case '*':
    res=a*b;
    break;
case '/':
    if( b != 0){
        res=a/b;
    }else{
    printf("the division is not possible\n ");
    exit(0);
    }
    break;
default:
    printf("invalid input\n ");
    break;
}
printf("result = %f \n",res);
}
