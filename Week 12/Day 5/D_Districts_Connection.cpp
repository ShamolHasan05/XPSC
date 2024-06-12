#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define newline cout << '\n';
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    unordered_map<int, int> mp;
    int m = 0, s = -1;
    for(int i = 0; i < n; i++){
        mp[a[i]]++;
        m = max(m, mp[a[i]]);
    }
    if(m == n){
        no
        return;
    }
    yes
    for(int i = 1; i < n; i++){
        if(a[i] != a[0]){
            s = i;
            break;
        }
    }
    for(int i = 1; i < n; i++){
        if(a[i] != a[0]){
            cout << 1 << " " << i + 1;
            newline
        } else {
            cout << s + 1 << " " << i + 1;
            newline
        }
    }
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
