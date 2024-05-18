#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    map<char, int> mp;
    for(char c:s){
        mp[c]++;
    }
    int odd = 0, cnt = 0;
    char Ochar = '\0';
    for(auto [x,y] : mp){
        if(y%2 != 0){
            odd++;
            cnt = y;
            Ochar = x;
        }
    }
    if(odd > 1){
        cout<<"NO SOLUTION"; newline
        return;
    }
    
    string fst = "", ans = "";
    for(auto [x,y] : mp){
        if(y%2 == 0){
            for(int i=0; i<y/2; i++){
                fst += x;
            }
        }
    }
    ans = fst;
    if(odd == 1){
        for(int i=1; i<=cnt; i++){
            ans += Ochar;
        }
    }
    
    reverse(fst.begin(), fst.end());
    ans += fst;
    cout<<ans; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    
    return 0;
}