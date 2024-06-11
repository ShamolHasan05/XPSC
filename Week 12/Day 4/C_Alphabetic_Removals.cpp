#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    multiset<char> mp,f;
    for(int i=0; i<n; i++){
        mp.insert(s[i]);
    }
    for(char c : mp){
        if(k>0){
            f.insert(c);
        }
        --k;
    }
    string ans = "";
    for(char c : s){
        auto it = f.find(c);
        if(it != f.end()){
            f.erase(it);
        }
        else{
            ans += c;
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