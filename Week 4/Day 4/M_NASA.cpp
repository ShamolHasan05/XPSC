#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

const int maxN = (1 << 15);
vector<int> all_palindromes;

void make_palindrome(){
    for (int i = 0;i < maxN;i++) {
        string s = to_string(i);
        int len = s.length();
        bool ok = true;
        for (int i = 0;i < (len / 2);i++) {
            if (s[i] != s[len - i - 1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            all_palindromes.push_back(i);
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int> cnt(maxN), a;
    for (int i = 0;i < n;i++) {
        int x;
        cin >> x;
        cnt[x]++;
        a.push_back(x);
    }
    long long ans = n;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < all_palindromes.size();j++) {
            int curr = (a[i] ^ all_palindromes[j]);
            ans += cnt[curr];
        }
    }
    cout<<(ans/2); newline
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    make_palindrome();

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
    return 0;
}