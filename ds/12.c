//c program to implement insertion sort
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,n,arr[]={5,2,4,6,1,3};
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<n;i++){
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }

    }
    printf("Sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}