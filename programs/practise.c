#include <stdio.h>
void main(){
  int a = 20;;
  int b,c,d,e,f;
  b=++a;
  c=a++ + ++a;
  e=++a + ++a;
  f=++a + a++ + ++a;
  printf("the value of b is %d\n",b);
  printf("the value of c is %d\n",c);
  printf("the value of d is %d\n",d);
  printf("the value of e is %d\n",e);
  printf("the value of f is %d\n",f);
}
