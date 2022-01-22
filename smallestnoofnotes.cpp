// Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
// If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.

#include <iostream>
using namespace std;

int main()
{
    int t,n,i,arr[6]={100,50,10,5,2,1};
    cin>>t;
    while(t--){
        cin>>n;
        int count=0;
        for(i=0;i<6;i++){
            count+=n/arr[i];
            n=n%arr[i];
        }
        cout<<count<<endl;
    }
}