#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int a = 1;
    while(true){
        if(k-(n-n/2)<1){
            break;
        }
        k-=(n-n/2);
		n/=2;
		a*=2;
    }
    cout<<(2*k-1)*a; newline

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