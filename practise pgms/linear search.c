#include <stdio.h>
void main(){
int i,n,key,found=0,a[10];
printf("enter the value of n \n");
scanf("%d",&n);
printf("enter the elements in the array \n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("enter the element to search \n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
        found=1;
        break;
        }
        }
        if(found){
            printf("the %d is found at the location %d with an index of %d\n",key,i+1,i);
        }else
        printf("enter a valid number to search \n");
}
