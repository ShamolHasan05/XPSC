#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(a<b){
        swap(a,b);
    }
    
    if((a+b)%3==0 && a<= 2*b){
        yes
    }
    else{
        no
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
    return 0;
}