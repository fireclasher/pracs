//singly linked list
#include<stdio.h>
#include<stdlib.h>

struct list{
    int data;
    struct list *next;
}*newnode,*temp,*header;
void insertatbeginning(int x){
    newnode=(struct list*)malloc(sizeof(struct list));
    newnode->data=x;
    newnode->next=NULL;
    if(header==NULL){
        header=newnode;
    }
    else{
        temp=header;
        header=newnode;
        header->next=temp;

    }
}
void insertatend(int x){
    newnode=(struct list*)malloc(sizeof(struct list));
    newnode->data=x;
    newnode->next=NULL;
    if(header==NULL){
        header=newnode;
    }
    else{
        temp=header;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }

}
void insertatintermediate(int x,int pos){
    newnode=(struct list*)malloc(sizeof(struct list));
    newnode->data=x;
    newnode->next=NULL;
    if(pos==1){
        newnode->next=header;
        header=newnode;
    }
    else{
        temp=header;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void deleteatbeginning(){
    temp=header;
    header=header->next;
    free(temp);
}
void deleteatend(){
    temp=header;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}
void deleteatint(int pos){
    temp=header;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode=temp->next;
    temp->next=temp->next->next;
    free(newnode);

}
void display(){
    temp=header;
    printf("\n");
    while(temp!=NULL){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
}
int main(){
    int choice,x,pos;
    insertatbeginning(10);
    display();
    insertatbeginning(20);
    display();
    insertatend(30);
    display();
    insertatend(40);
    display();
    insertatintermediate(50,3);
    display();
    insertatintermediate(60,5);
    display();
    deleteatbeginning();
    display();
    deleteatend();
    display();
    deleteatint(3);
    display();

     
}