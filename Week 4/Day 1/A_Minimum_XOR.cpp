#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int XOR = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        XOR ^= a[i];
    }
    int ans = XOR;
    for(int i=0;i<n;i++){
        ans = min(ans, (XOR ^a[i]));
    }
    cout<< ans; newline

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