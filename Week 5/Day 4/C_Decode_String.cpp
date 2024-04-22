#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    string ans = "";
    for(int i=0; i<n; i++){
        if(i+2<n && s[i+2]=='0' && ( s[i+3] != '0')){
            int num = ((s[i] - '0')*10) + (s[i+1]-'0');
            ans += (char)(96+num);
            i+=2;
        }
        else{
            int num = (s[i]-'0');
            ans += (char)(96+num);
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