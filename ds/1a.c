//a.) Code a C Program to implement the following various operations for Stack ADT
//using array
//implementation. i.) Push ii.) Pop iii.) Display.

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int data;
    struct stack *next;
    
};
struct stack *top;
void push(int x){
 struct stack *temp;
    temp = (struct stack *)malloc(sizeof(struct stack));
    temp->data = x;
    temp->next = top;
    top = temp;
}
int pop(){
    struct stack *temp;
    temp=top;
    top =top->next;
    free(temp);

}
int display(){
    struct stack *temp;
    temp=top;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main(){
push(5);
pop(5);
push(6);
display();
return 0;
}