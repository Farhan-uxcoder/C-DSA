#include <stdio.h>
int main(){
printf("enter the size of the array");
int size ;
scanf("%d",&size);
int arr [size];
printf("enter the elements in the array");
for(int i=0;i<size;i++){
   scanf("%d",&arr[i]);
}
int max = arr[0];
for(int i=1;i<size;i++){
if(max<arr[i]){
    max = arr[i];
}
}
        printf("the max value in the array is %d",max);


}
