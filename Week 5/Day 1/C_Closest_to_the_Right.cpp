#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){
        int k;
        cin>>k;
        int ans = n;
        int l=0, r=n-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] >= k){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        
        cout<<ans+1; newline
        

    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    solve();
    

    
    return 0;
}