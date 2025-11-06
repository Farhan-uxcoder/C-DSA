#include <stdio.h>
#include <math.h>
#define PI 3.142

void main(){
    int i = 1, degree;
    float x, sum = 0, term, num, deno;
    printf("enter the vlaue in degrees:\n");
    scanf("%d", &degree);
    x = degree * (PI / 180);
    num = x;
    deno = 1;
    do {
        term = num / deno;
        sum = sum + term;
        num = -num * x * x;
        deno = deno * (i + 1) * (i + 2);
        i = i + 2;
    } while (fabs(term) >= 0.0001);
    printf("the sine of %d is %f \n", degree, sum);
    printf("the sine function of %d is : %f \n", degree, sin(x));
}
