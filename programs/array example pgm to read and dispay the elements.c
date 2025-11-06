#include <stdio.h>
void main(){
int n,i;
float a[10];
printf("enter the number of elements in an array \n");
scanf("%d",&n);
printf("enter the elements : \n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("the enterd elements are \n ");
for(i=0;i<n;i++){
    printf("%d \n",a[i]);// when the & is added in the printf statement we can get the address of the elements

}
}
