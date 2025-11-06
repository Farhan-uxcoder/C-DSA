#include <stdio.h>
void main(){
int a[10],i,n,max;
printf("enter the value for n\n");
scanf("%d",&n);
printf("enter the elements to the array\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++){

    if(a[i]>max){
        max=a[i];
    }
}
printf("the max value in the array is %d",max);
}
