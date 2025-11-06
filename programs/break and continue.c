#include <stdio.h>
main()
{
    int i ;
    for(i=0;i<10;i++){
        if(i==4){
            break;
        }printf("%d \n",i);
    }
    printf("here ends the break example \n the continue example starts here\n ");
     for(i=0;i<10;i++){
        if(i==4){
            continue;
        }printf("%d \n",i);
    }
}
