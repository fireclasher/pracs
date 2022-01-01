//Code a C Program to check whether the given number is in the list using linear search.
#include<stdio.h>
int main(){
    int a[10],n,i,x,flag=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("The number is present in the array\n");
    }
    else{
        printf("The number is not present in the array\n");
    }
    return 0;
}