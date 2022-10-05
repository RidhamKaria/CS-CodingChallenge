#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main(){
    ll n,o=0,e=0,c=0;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0)
        {
            c=n/i;
            if(c&1)
                o++;
            else
                e++;
            if(i&1)
                o++;
            else
                e++;
        }
    }
    if(e>o)
        cout<<"BUY";
    else if(e<o) 
        cout<<"SELL";
    else
        cout<<"PASS";
    cout<<endl;
    return 0;
}