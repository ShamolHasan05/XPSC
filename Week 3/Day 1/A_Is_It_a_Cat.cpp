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

    for(char &c : s){
        c = tolower(c);
    }
    int l = 0;
    while(l<n){
        if(s[l] == s[l+1]){
            s.erase(l,1);
            n--;
        }
        else{
            l++;
        }
    }

    if(s == "meow"){
        yes
    }
    else{
        no
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