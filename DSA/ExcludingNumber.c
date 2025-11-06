#include<stdio.h>
int main(){
printf("Enter the number  ");
int n, count=0,excl;
scanf("%d",&n);
printf("enter the number to be excluded");
scanf("%d",&excl);
while(n>0){
    int rem = n%10;

    if(rem!=excl){
       count++ ;
    }
     n = n/10;
     }

printf("%d",count);


}
