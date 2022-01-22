//to check wether the given no is prime
#include<iostream>
using namespace std;
int main(){
    int t,n,i,count=0;
    cin>>t;
    bool flag;
    while(t--){
        // flag=false;
        count=0;
        cin>>n;
        for(i=2;i<=n/2;i++)
            if(n%i==0)
            count++;
                // flag=true;
        cout<<(count==2?"yes":"no")<<endl;
    
}}