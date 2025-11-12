#include <stdio.h>
#include <math.h>
void main(){
int n,i,temp;
float a[20], sum, mean, var, sd;
float *p;
printf("enter the total number of elements :\n");
scanf("%d",&n);
printf("enter the elements to the array :\n");
for(i=0;i<n;i++){
scanf("%f",&a[i]);
}
p=a;
for(i=0;i<n;i++){
sum=sum+*(p+i);
}
mean=sum/n;
for(i=0;i<n;i++){
temp=temp+(*(p+i)-mean)*(*(p+i)-mean);
}
var=temp/n;
sd=sqrt(var);
printf("sum=%f\n",sum);
printf("mean=%f\n",mean);
printf("variance=%f\n",var);
printf("standard deviatoion =%f\n",sd);

}
