#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define newline cout << '\n';
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> st;
    int pairs = 0;

    for (int i = 0; i < n; i++){
        if (s[i] == '('){
            st.push(i); 
        }
        else if (s[i] == ')' && !st.empty()){
            pairs++; 
            st.pop(); 
        }
    }
    int ans = n/2 - pairs;
    cout<<ans; newline
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
