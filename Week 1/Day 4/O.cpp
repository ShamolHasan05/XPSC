#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    char c;
    cin >> n >> c;
    string str;
    cin >> str;
    string s = str + str;

    if(c == 'g'){
        cout << 0 << endl;
        return;
    }

    int r=0,ans=0;
    for(int i=2*n; i>0;i--){
        if(s[i] == 'g'){
            r = i;
        }
        if(s[i] == c){
            ans = max(ans, r-i);
        }

    }
    cout<<ans<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
