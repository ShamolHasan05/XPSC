#include<bits/stdc++.h>
#define ll long long
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    string str = "Timru";
    sort(s.begin(),s.end());
    
    if(s == str){
        cout<<"YES";
        newline
    }
    else{
        cout<<"NO";
        newline
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