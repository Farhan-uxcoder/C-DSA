#include <stdio.h>
int main(){
int n ;
scanf("%d",&n);
int count=0;
int flag=0;
for(int i=2;i*i<n;i++){
    if(n%i==0){
        printf("not prime");
        flag=1;
        return 0;
    }
}
if(flag==0){
    printf("prime");
    return 0;
}
}
