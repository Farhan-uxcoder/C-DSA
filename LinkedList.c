// Online C compiler to run C program online
#include <stdio.h>
#include <stdio.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create(){
    int n;
    struct node *temp,*newnode;
    printf("how many nodes?\n");
    scanf("%d",&n);
    head=(struct node)malloc(sizeof(struct node));
    printf("Enter the data for node 1:");
    scanf("%d",&head->data);
    head ->next=NULL;
    temp=head;
    for (int i=2;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node %d:",i);
        scanf("%d",&newnode->data);
        newnode->next+NULL;
        temp->next=newnode;
        temp=newnode;
    }
}
void display(){
    struct node *temp = head;
    while(temp!NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

}
int main(){
    int ch;
    while(1){
        printf("1.create\n2.Display\n3.exit\n");
        printf("Whats your choice?\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
            exit (0);
            }
        }
return 0;
}