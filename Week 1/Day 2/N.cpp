#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n - 1];
    for(int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }
    sort(a, a + n - 1);

    if (a[0] != 1) {
        cout << "1" << endl;
        return 0;
    }

    for(int i = 0; i < n - 2; i++) {
        if (a[i] + 1 != a[i + 1]) {
            cout << a[i] + 1 << endl;
            return 0;
        }
    }

    cout << n << endl;

    return 0;
}
