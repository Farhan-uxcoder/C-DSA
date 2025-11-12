#include <stdio.h>
main(){
printf("hello world!");
// simple intrest
int p,t,r,simpleIntrest;
printf("enter the principle amount :\n enter the time : \n enter the rate : \n ");
scanf("%d%d%d",&p,&t,&r);
simpleIntrest = (p*t*r)/100 ;
printf("the simple intrest is %d",simpleIntrest);
}
