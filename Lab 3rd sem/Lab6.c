// implementation of the circular queue in C
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int cq[MAX],front=0,rear=-1,count=0;
int isempty(){
    if(count==0)
        return 1;
    else
        return 0;
}
int isfull(){
    if(count==MAX)
        return 1;
    else
        return 0;
}
void insert(){
    int x ;
    if(isfull()){
        printf("Circular Queue is full\n");
        return;
    }
    else{
        printf("Enter the element to be inserted:");
        scanf("%d",&x);
        rear=(rear+1)%MAX;
        cq[rear]=x;
        count++;
    }
}
int delete(){
    int x;
    if(isempty()){
        printf("Circular queue is empty\n");
        return -1;
    }
    else{
        x=cq[front];
        front=(front+1)%MAX;
        count--;
        return x;
    }
}
void display(){
    int i,f;
    if(isempty()){
        printf("Circular Queue is empty\n");
        return;
    }
    else{
        printf("Elements in Circular Queue are:\n");
        f=front;
        for(i=0;i<count;i++){
            printf("%d ",cq[f]);
            f=(f+1)%MAX;
        }
        printf("\n");
    }
}
int main(){
    int ch,ele;
    while(1){
        printf("1.insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Whats your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insert();
            break;
            case 2:
                ele=delete();
                if(ele!=-1)
                printf("Deleted element is %d\n",ele);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
    }
}
return 0;
}