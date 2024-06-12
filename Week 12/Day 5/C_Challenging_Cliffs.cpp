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
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int s,l;
    int min = INT_MAX;
    for(int i=0; i<n-1; i++){
        if(min>(a[i+1] -a[i])){
            min = a[i+1] - a[i];
            s = i;
            l = i+1;
        }
    }
    cout<<a[s]<<" ";
    for(int i=l+1;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0; i<s;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[l]; newline

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
    return 0;
}