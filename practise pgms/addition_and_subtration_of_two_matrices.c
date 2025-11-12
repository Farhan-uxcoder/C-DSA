#include <stdio.h>
void main(){
int i,j,a[3][3],b[3][3],sum[3][3],diff[3][3];
printf("enter the values in the matrix A \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter the values in the matrix B \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        sum[i][j]=a[i][j]+b[i][j];
        diff[i][j]=a[i][j]-b[i][j];
    }
    printf("\n");
}
printf("the sum of the two matrix are \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
}
printf("the difference of the two matrix are \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",diff[i][j]);
    }
    printf("\n");
}
}
