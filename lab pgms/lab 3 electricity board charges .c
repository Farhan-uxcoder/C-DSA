#include<stdio.h>
void main(){
char name[20];
int units;
float charges,subcharges;
printf("Enter the name of the costomer :\n");
scanf("%s",name);
printf("Enter the total number of units consumed :\n");
scanf("%d",&units);
if(units>=0 && units<=200){
    charges = 100+units*0.80;
    }
    else if(units>200 && units<=300){
        charges =100+200*0.80+(units-200)*0.90;
        }
    else if(units>300){
        charges =100+200*0.80+100*0.90+(units-100)*1.00;
        }
        if(charges>400){
           subcharges=charges*0.15;
            charges=charges+subcharges;
           }
           printf("User %s need to pay %f rupees for electricity bill ",name , charges);
}
