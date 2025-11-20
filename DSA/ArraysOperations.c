#include <stdio.h>
#include <stdlib.h>

int a[20];
int val,n,pos,i;

void create();
void insert();
void display();
void deletion();

int main(){
int choice;
while(choice){
    printf("Enter your choice :\n 1.Create\n 2.Insert\n 3.Delete\n 4.Display\n 5.Exit");
    switch(choice){
case 1:
    create();
    break;
case 2:
    insert();
    break;
case 3:
    delete();
    break;
case 4:
    display();
    break;
case 5:
    exit(0);
    break;
default:
    printf("enter the valid input");
    break;
    }
}
return 0;
}

void create(){
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements in the array");
for (i=0;i<n;i++){

}
}
