#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n, m;
    cin >> n >> m;
    pbds<int> p;
    for (int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        p.insert(x);
    }

    for (int i = 1;i <= m;i++) {
        int x;
        cin >> x;
        cout << p.order_of_key(x + 1) << " ";
    }
    newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();
    

    
    return 0;
}