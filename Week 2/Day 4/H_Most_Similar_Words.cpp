#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int ans = INT_MAX;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string f = str[i];
            string s = str[j];
            int val = 0;
            for(int k = 0;k<m;k++){
                val +=abs(f[k]-s[k]); 
            }
            ans = min(ans,val);
        }
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