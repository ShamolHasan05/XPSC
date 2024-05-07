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
    vector<bool> vis(n+1, false);
    vector<int> b;

    for(int i=0; i<n; i++){
        if(a[i]<=n){
            if(vis[a[i]] == false){
                vis[a[i]] = true;
            }
            else{
                b.push_back(a[i]);
            }
        }
        else{
            b.push_back(a[i]);
        }
    }
    vector<int> c;

    for(int i=1; i<=n; i++){
        if(vis[i]==false){
            c.push_back(i);
        }
    }
    sort(b.begin(), b.end());
    bool ans = true;

    for(int i=0; i<b.size();i++){
        if(2*c[i]>=b[i]){
            ans = false;
            break;
        }
    }
    if(ans){
        cout<<c.size(); newline
    }
    else{
        cout<<-1; newline
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