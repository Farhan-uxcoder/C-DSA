#include<stdio.h>
void main( )
{
int n, i, j, temp, a[100];
printf("Enter the value for n:\n");
scanf("%d",&n);
printf("Enter the array elements:\n");
 for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The array elements before sorting are: \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
for(i=0; i<n-1; i++)
{
for(j=0 ; j< n-i-1 ; j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("The elements after sorting are: \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
