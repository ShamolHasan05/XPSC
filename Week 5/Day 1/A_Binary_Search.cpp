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

        int l=0, r=n-1;
        bool ans = false;

        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == k){
                ans = true;
                break;
            }
            else if(a[mid]<k){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        if(ans==true){
            yes
        }
        else{
            no
        }

    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
     solve();
    

    
    return 0;
}