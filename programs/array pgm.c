#include <stdio.h>
void main(){
int n,i,a[20],sum;
printf("enter the number of elements \n");
scanf("%d",&
      n);
printf("enter the elements ");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
sum=0;
for(i=0;i<n;i++){
    sum = sum+a[i];
}
printf("the enterd elements are \n");
for(i=0;i<n;i++){
    printf("%d \n",a[i]);
}
}
