// Code a C Program to check whether the given number is in the list using binary search.

#include<stdio.h>

int binarysearch(int a[],int n,int x){
    int low,high,mid;
    low=0;high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==x){
            return 1;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
int main(){
 int a[]={1,2,3,4,5,6,7,8,9,10};
 int n=10;
 int x;
 printf("Enter the number to be searched\n");
    scanf("%d",&x);
int result=binarysearch(a,n,x);
if(result==1){
    printf("Number is present in the list\n");
}
else{
    printf("Number is not present in the list\n");
}
}