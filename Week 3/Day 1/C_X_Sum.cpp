#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

int maxSum(int a[][205], int r, int c, int n, int m) {
    int sum = 0;
    int i = r, j = c;
    while (i >= 0 && j >= 0) {
        sum += a[i][j];
        i--;
        j--;
    }

    i = r-1; j = c+1;
    while (i >= 0 && j < m) {
        sum += a[i][j];
        i--;
        j++;
    }

    i = r+1; j = c+1;
    while (i < n && j < m) {
        sum += a[i][j];
        i++;
        j++;
    }

    i = r+1; j = c-1;
    while (i < n && j >= 0) {
        sum += a[i][j];
        i++;
        j--;
    }

    return sum;
}

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n][205];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp = maxSum(a, i, j, n, m);
            ans = max(ans, temp);
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
