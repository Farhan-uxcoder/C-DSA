#include <stdio.h>
void main(){
int a[10],i,n,psum,nsum,avg;
printf("enter the value of n \n");
scanf("%d",&n);
printf("enter the elements to the array of the size %d\n",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    if(a[i]>0){
            psum=0;
        psum=psum+a[i];
        }
        else
        nsum=0;
            nsum=nsum+a[i];
        }
       avg=(float)(psum+nsum)/2;
        printf("the sum of the positive integers is %d \n the sum of negative integers is %d\n",psum,nsum);
        printf("the average of the postive numbers and negative numbers is %d",avg);
}
