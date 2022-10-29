#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top;

int isEmpty(){
    if(top==NULL)
    return 1;
    else
    return 0;
}
int isFull(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    return 1;
    else
    return 0;
}
void push(int n){
    if(isFull()){
        printf("Overflow!!\n");
        return; 
    }
    else{
        struct node* newNode;
        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = n;
        newNode->next = top;
        top = newNode;
    }
}
int pop(){
    if(isEmpty()){
    printf("Underflow!!\n");
        return -1;
    }
    else{
        int item;
        struct node* temp;
        item = top -> data;
        temp = top ;
        top=top->next;
        temp->next = NULL;
        free(temp);
        return item;
    }
}
void traverse(){
    if(isEmpty()){
        printf("Stack is Empty !!\n");
        return ;
    }
    else{
        int i=1;
        struct node* temp = top;
        while(temp!=NULL){
            printf("value at %d is : %d\n",i,temp->data);
            temp=temp->next;
            i++;
        }
    }
}
int main(){
    int ch , data;
    do{
    printf(" 1. Push \n");
    printf(" 2. Pop \n");
    printf(" 3. Traverse \n");
    printf(" 4. Exit \n");
    printf("Enter your choice \n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("Enter value to enter : ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            printf("The deleted element is : %d\n",pop());
            break;
        case 3:
            traverse();
            break;
        case 4:
            printf("exit\n");
            break;
        default:
            printf("wrong choice !!!\n");
            break;
    }
}while(ch!=4);
}
