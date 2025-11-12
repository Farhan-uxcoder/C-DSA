#include <stdio.h>
int add(int x,int y);
int main(){
int a,b,result;
printf("enter the values for a and b \n");
scanf("%d%d",&a,&b);
result=add(a,b);
printf("the sum of %d and %d are %d",a,b,result);
}
 int add(int x , int y){
 return x+y;
 }
