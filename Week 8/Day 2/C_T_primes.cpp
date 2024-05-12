#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    auto isPrime = [&](ll n){
        if(n==1){
            return false;
        }
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    };

    auto Sq =[&](ll n){
        ll x = sqrtl(n);
        return (x*x) == n;
    };

    while(n--){
        ll a;
        cin>>a;
        if(isPrime(sqrtl(a)) && Sq(a)){
            yes
        }
        else{
            no
        }

    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();

    
    return 0;
}