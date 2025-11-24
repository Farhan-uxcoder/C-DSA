#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
int main(){
    int ele,ch;
    while(1){
        printf("1.Emqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    printf("What is your choice?\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        printf("Enter the element to be enqueued:\n");
        scanf("%d",&ele);
        enqueue(ele);
        break;
        case 2:
        ele=dequeue();
    if(ele!=-1)
    printf("The dequeued element is %d\n",ele);
    break;
    case 3:
    display();
    break;
    case 4:
    exit(0);
    default:
    printf("Invalid choice\n");
        break;
    }
    }
    return 0;
}