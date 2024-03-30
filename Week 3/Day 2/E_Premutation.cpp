#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n][n - 1];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            cin >> a[i][j];
        }
    }

    int val, idx;
    val = a[0][0];
    
    if(val == a[1][0]){
        val = a[1][0];
    }
    else if(val == a[2][0]){
        val =a[2][0];
    }
    else{
        val = a[2][0];
    }
    
    for(int i = 0; i < n; i++) {
        if(a[i][0] != val) {
            idx = i;
            break;
        }
    }

    
    cout << val << " ";
    for(int j = 0; j < n - 1; j++) {
        cout << a[idx][j] << " ";
    }
    newline
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
