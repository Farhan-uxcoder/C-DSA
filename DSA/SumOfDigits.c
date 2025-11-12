#include <stdio.h>
int main(){
printf("enter the number to get its sum ");
int num,dig,sum=0;
scanf("%d",&num);
while(num>0){
    dig=num%10;
    sum=sum+dig;
    num=num/10;
}
printf("%d",sum);

}
