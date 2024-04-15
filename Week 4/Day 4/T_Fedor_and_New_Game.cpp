#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(m+1);
    for(int i=0;i<=m;i++){
        cin>>a[i];
    }
    int me = a[m];
    vector<int> x(m);
    for(int i=0;i<m;i++){
        x[i] = a[i]^me;
    }
    int ans = 0;

    for(int i=0;i<m;i++){
        int cnt=0;
        for(int k=0;k<n;k++){
            if(cnt>k){
                break;
            }
            if((x[i]&(1<<k))){
                cnt++;
            }
        }
        if(cnt<=k){
            ans++;
        }
    }

    cout<<ans; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    
    return 0;
}