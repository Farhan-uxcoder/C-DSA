#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *head=NULL;

void create(){
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    } else {
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("Node created successfully\n");
    
}

int display(){
    struct node *temp;
    if(head == NULL){
        printf("List is empty\n");
        return 0;
    }
    temp = head;
    printf("Linked List: ");
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}


int main(){
    int ch;
    while(1){
        printf("1. Create\n2. Display\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1 : create();
            break;
            case 2 :display();
            break;
            case 3 : exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
    }