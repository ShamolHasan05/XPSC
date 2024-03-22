#include<bits/stdc++.h>
#define ll long long
#define newline cout<<'\n';
using namespace std;

void solve(){
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin>>s>>t;
    int ans = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] != t[i]){
            ans++;
        }
    }
    cout<<ans;
    newline
    
    return 0;
}