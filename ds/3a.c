// a.) Write a C Program to implement the following various operations for List ADT
// using array implementation. i.) Create ii.) Insert iii.) Erase iv.) Traverse

#include <stdio.h>
#include <stdlib.h>

int a[10],n,i,pos;

void display(){
    printf("\nElements are:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void create(){
    printf("enter no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    display();
    printf("created sucessfully");


}
void erase(int x){
    pos=-1;
    for(i=0;i<n;i++){
        if(a[i]==x){
            pos=i;break;
        }

    }
    if(pos=-1){
        printf("element not present");

    }else{
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];n--;}
    display();
}

void insert(int x,int pos){
    if(pos>n){
        a[n+1]=x;
    }else{

    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
        a[i]=x;
    }
        n++;
}
void traverse(){
    printf("list in reverse order is");
    for(i=n;i>=0;i--){
        printf("%d\t",a[i]);
    }
}
int main(){
create();
insert(5,1);
display();
erase(1);
traverse();
}
