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
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[a[i]]++;
    }
    int m = 0;
    for(auto [x,y] : mp){
        m = max(y,m);
    }
    
    if(n%2==0){
        if(m <= (n/2)){
            cout<<0; newline
        }
        else{
            cout<<2*m-n; newline
        }
    }
    else{
        if(m <= (n/2)){
            cout<<1; newline
        }
        else{
            cout<<2*m-n; newline
        }
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