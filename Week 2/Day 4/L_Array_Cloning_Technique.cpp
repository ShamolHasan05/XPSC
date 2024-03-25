#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    map<int,int> mst;
    for(int i=0;i<n;i++){
        mst[v[i]]++;
    }
    int mx = 0;
    for(auto it:mst){
        mx = max(mx,it.second);
    }
    int ans = 0;
    while(mx<n){
        int rem = n - mx;
        int add = mx;
        ans++;
        ans += min(add,rem);
        mx += min(add,rem);
    }
    cout<<ans;
    newline

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