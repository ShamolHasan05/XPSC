#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int l = 0, ans = 0; 
    set<int> s; 
    for(int i=0; i<n; i++){
        while(s.count(a[i])){
            s.erase(a[l]);
            l++;
        }
        s.insert(a[i]);
        ans = max(ans, (int)s.size());
    }
    
    cout<<ans; newline
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   
    solve();

    return 0;
}
