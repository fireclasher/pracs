//Code a C Program to implement the following various operations for Queue ADT using
//array implementation. i.) Insert ii.) Delete iii.) Display.
#include<stdio.h>
#include<stdlib.h>

struct queue{
    int data;
    struct queue *next;
};
struct queue *front,*rear,*temp;
void insert(int x){
    temp=(struct queue*)malloc(sizeof(struct queue));
    temp->data=x;
    temp->next=NULL;
    if(front==NULL){
        front=rear=temp;}
        else{
            rear->next=temp;
            rear=temp;

        }
    }
void delete(){
    if(front!=NULL){
    temp=front;
    front=front->next;
    free(temp);}
}
void display(){
    temp=front;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main(){
    delete();
    insert(5);
    insert(6);
    insert(7);
    display();
}