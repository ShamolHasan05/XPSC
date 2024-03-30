#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    map<string,bool> mp;
    for(int i=0;i<n;i++){
        mp[s[i]] = true;
    }

    for(int i=0; i<n;i++){
        bool ans = false;
        for(int j=1; j<s[i].size(); j++){
            string s1 = s[i].substr(0,j);
            string s2 = s[i].substr(j,s[i].size()-1);
            if(mp[s1]==true && mp[s2]==true){
                ans = true;
                break;
            }
        }
        if(ans){
            cout<<1;
        }
        else{
            cout<<0;
        }
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