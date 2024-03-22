#include<bits/stdc++.h>
#define ll long long
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        string str;
        cin>>str;
        int ans = a[i];
        for(int i=0;i<x;i++){
            if(str[i] == 'D'){
                if(ans == 9){
                    ans = 0;
                }
                else{
                    ans++;
                }
            }
            else{
                if(ans == 0){
                    ans = 9;
                }
                else{
                    ans--;
                }
            }
        }
        v.push_back(ans);

    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
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