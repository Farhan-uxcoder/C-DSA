// pgm to count number of digits in a given number
#include <stdio.h>
int main(){
    printf("enter the number to get the number of digits");
long n,count=0;
scanf("%d",&n);//145
while(n>0){
    n=n/10;
    count++;
}
printf("%d",count);




}
