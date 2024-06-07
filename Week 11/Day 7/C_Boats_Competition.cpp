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
    vector<int> a(n+1);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;

    for(int k=1;k<=100; k++){
        int temp = 0,i=1,j=n;
        while(i<j){
            if(a[i]+a[j] > k ){
                j--;
            }
            else if(a[i]+a[j]<k){
                i++;
            }
            else{
                temp++;
                i++;
                j--;
            }
        }
        ans = max(ans, temp);
    }
    cout<<ans; newline


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