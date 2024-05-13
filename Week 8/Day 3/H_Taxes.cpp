#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

bool isPrime(ll n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    
    // if(n==4){
    //     cout<<2; newline
    // }
    if(isPrime(n)){
        cout<<1; newline
    }
    else if(n%2 == 0 || isPrime(n-2)){
        cout<<2; newline
    }
    else{
        cout<<3; newline
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    
    return 0;
}