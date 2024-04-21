#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    for(int i=1; i<n/2; i++){
        if(s[i] != s[i-1]){
            yes
            return;
        }
    }
    no

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