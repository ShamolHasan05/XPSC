#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    vector<int> cnt(26, 0);

    for(int i=0;i<n;i++){
        cnt[s[i]-'a']++;
    }
    int odd=0;
    for(int i=0;i<26;i++){
        if(cnt[i]%2 != 0){
            odd++;
        }
    }
    
    if(odd - k > 1){
        no
    }
    else{
        yes
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
