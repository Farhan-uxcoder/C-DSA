#include<stdio.h>
#include<math.h>
void main(){
float a,b,c,disc,root1,root2,real,img;
printf("enter the coefficients a,b and c of the quadratic equation \n");
scanf("%f%f%f",&a,&b,&c);
disc=b*b-4*a*c;
if(disc==0)
{
    printf("roots are real and equal\n");
    root1=root2= -b/(2*a);
    printf("root1=%f and root2=%f\n",root1,root2);

}

else if (disc>0){
printf("roots are real  and distinct\n");
root1=(-b+sqrt(disc)) /(2*a);
root2=(-b-sqrt(disc)) /(2*a);
printf("root1=%f and root2=%f\n",root1,root2);
}

else if(disc<0){
 printf("roots are complex and distinct\n");
 real=-b/(2*a);
 img=sqrt(fabs(disc))/(2*a);
 printf("root1=%f + i(%f) \n",real,img);
 printf("root2=%f - i (%f) \n",real,img);
}
}
