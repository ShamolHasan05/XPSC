#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k;
    vector<int> a,b;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x<0){
            b.push_back(x*(-1));
        }
        else{
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 1;
    for(int i=a.size()-1; i>=0; i-=k){
        ans += a[i]*2;
    }
    for(int i=b.size()-1; i>=0; i-=k){
        ans += b[i]*2;
    }
    int ad = 0, bd = 0;
    if(a.empty()){
        ad = 0;
    }
    else{
        ad = a.back();
    }
    if(b.empty()){
        bd = 0;
    }
    else{
        bd = b.back();
    }

    ans -= max(ad,bd);
    cout<<ans-1; newline

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