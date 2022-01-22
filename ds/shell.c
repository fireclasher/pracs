//c program to implement implement the shell sort
// Language: c
// Path: ds/shell.c
// Compare this snippet from ds/12a.c:
// // Write a C program to implement the operations binary search tree and perform the following.
#include<stdio.h>
#include<stdlib.h>

void shellsort(int arr[],int n){
int gap,i,j,tmp;
for(gap=n/2;gap>0;gap/=2){
    for(i=gap;i<n;i++){
        tmp=arr[i];
        for(j=i;j>=gap && arr[j-gap]>tmp;j-=gap){
            arr[j]=arr[j-gap];

        }
        arr[j]=tmp;

    }
}
}
int main(int argc,const char * argv[]){
    int arr[]={10,20,5,17,18,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    shellsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}