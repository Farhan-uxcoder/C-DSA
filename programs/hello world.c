#include <stdio.h>
main(){
printf("hello world!");
// the 1st pgm
int temp,a,b;
printf("enter the two values which we have to swap ");
scanf("%d%d",&a,&b);
printf("the value of a and b before swapping is %d,%d \n",a,b);
temp = a ;
a=b;
b=temp;
printf("after swapping the numbers the new values is %d,%d \n",a,b);
return(0);

}
