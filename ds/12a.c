// Write a C program to implement the operations binary search tree and perform the following.

// i. Create a BST with the elements 10,20,5,17,18,11
// ii. Insert a node with the element 6
// iii. Delete the element 11
// iv. Display the elements of the BST in preorder.

#include <stdio.h>
#include <stdlib.h>

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}*root,*current;

void create(int x){
    struct tree *temp = (struct tree *)malloc(sizeof(struct tree));
    temp->data = x;
    temp->left=temp->right=NULL;
    if(root==NULL){
        root=temp;
        return;
    }
    else{
        current=root;
        while(current!=NULL){
            if(x<current->data){
                if(current->left==NULL){
                    current->left=temp;
                    return;
                }
                else{
                    current=current->left;
                }}
                else{
                    if(current->right==NULL){
                        current->right=temp;
                        return;
                    }
                    else{
                        current=current->right;
                    }
                }
                }
                }
            }
void postorder(struct tree *current){
    if(current!=NULL){
        postorder(current->left);
        printf("%d ",current->data);
        postorder(current->right);
    }
}
int main(int argc,const char * argv[]){
    for(int i=1;i<argc;i++){
        create(atoi(argv[i]));
    }
    postorder(root);
}