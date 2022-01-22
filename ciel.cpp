// Tomya is a girl. She loves Chef Ciel very much.

// Tomya like a positive integer p, and now she wants to get a receipt of Ciel's restaurant whose total price is exa
// Note that the i-th menu has the price 2i-1 (1 ≤ i ≤ 12).

// Since Tomya is a pretty girl, she cannot eat a lot. So please find the minimum number of menus whose total price is exactly p. Note that if she orders the same menu twice, then it is considered as two menus are ordered. (See Explanations for details)

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t,p,i,count=0;
    cin>>t;
    while(t--){
        cin>>p;count=0;
        for(i=12;i>=1;i--)
                while(p>=pow(2,i)){
                    p-=pow(2,i);
                    count++;
                }
            
    cout<<count<<endl;
    }
}