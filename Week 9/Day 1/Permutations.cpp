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

    if(n<4){
        if(n==1){
            cout<<1;
        }
        else{
            cout<<"NO SOLUTION"; newline
        }
    }
    else{
        for(int i=2; i<=n; i+=2){
            cout<<i<<" ";
        }
        for(int i=1; i<=n; i+=2){
            cout<<i<<" ";
        }
        newline
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();
    

    
    return 0;
}