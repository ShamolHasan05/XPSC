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
    int xr = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        xr ^= a[i];
    }

    if(xr){
        int k=0, cnt = 0;
        for(int i=0; i<n; i++){
            k ^= a[i];
            if(xr==k){
                k=0;
                cnt++;
            }
        }
        if(cnt>=2){
            yes
        }
        else{
            no
        }
    }
    else{
        yes
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