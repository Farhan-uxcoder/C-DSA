#include <stdio.h>
void main(){
int m,n,i,j,a[10][10],b[10][10];
printf("enter the value for number of rows in the matrix \n");
scanf("%d",&m);
printf("enter the value for number of colomns in matrix \n");
scanf("%d",&n);
printf("enter the elements to the matix ");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        b[j][i]=a[i][j];
    }
}
printf("the trasposed matrix is given by as follows \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d",b[i][j]);
    }printf("\n");
}
}
