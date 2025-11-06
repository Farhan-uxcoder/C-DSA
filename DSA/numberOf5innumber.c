#include<stdio.h>
int main(){
printf("Enter the number to get the number of 5 ");
int n, count=0;
scanf("%d",&n);
while(n>0){
    int rem = n%10;

    if(rem==5){
        count++;
    }
    n = n/10;

}
printf("%d",count);
}
