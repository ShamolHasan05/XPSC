#include<bits/stdc++.h>
#define ll long long 
using namespace std;



int main(){
    ll x, y;
    cin>>x>>y;

    ll ans = 0;
    

    while(y>=x){
        x *= 2;
        ans++;
    }

    cout<<ans<<endl;
    
    return 0;
}