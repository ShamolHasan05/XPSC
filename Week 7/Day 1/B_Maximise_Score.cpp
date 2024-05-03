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
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int f = abs(a[0]-a[1]);
    int l = abs(a[n-1]-a[n-2]);
    int ans = min(l,f);

    for(int i=1; i<n-1; i++){
        int x = abs(a[i]-a[i+1]);
        int y = abs(a[i]-a[i-1]);
        
        int temp = max(x,y);
        ans = min(ans,temp);
    }

    cout<<ans; newline

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