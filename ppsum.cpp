// Yesterday, puppy Tuzik learned a magically efficient method to find the sum of the integers from 1 to N. He denotes it as sum(N). But today, as a true explorer, he defined his own new function: sum(D, N), which means the operation sum applied D times: the first time to N, and each subsequent time to the result of the previous operation.

// For example, if D = 2 and N = 3, then sum(2, 3) equals to sum(sum(3)) = sum(1 + 2 + 3) = sum(6) = 21.

// Tuzik wants to calculate some values of the sum(D, N) function. Will you help him with that?

#include <iostream>
#include <cstdlib>
using namespace std;
int t,sum=0;

int Sum(int n){
    if(n==1)
        return 1;
    else
        return n+Sum(n-1);
}
int main(){
    cin>>t;
    while(t--){
        int d,n;
        cin>>d>>n;
        sum=0;
        while(--d){
            sum=Sum(n);
            n=sum;
        }
        cout<<Sum(n)<<endl;

    }
}