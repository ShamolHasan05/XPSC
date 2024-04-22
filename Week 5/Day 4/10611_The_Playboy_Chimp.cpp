#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

int lb(vector<int> &a, int k){
    int ans = -1;
    int n = a.size();
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;

        if(a[mid]<k){
            ans = a[mid];
            l = mid+1;
        }
        else{
            r = mid -1;
        }
    }
    return ans;
}

int ub(vector<int> &a, int k){
    int ans = -1;
    int n = a.size();
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;

        if(a[mid]>k){
            ans = a[mid];
            r = mid-1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        int ans1 = lb(a,k);
        int ans2 = ub(a,k);
        if(ans1 == -1){
            cout<<"X ";
        }
        else{
            cout<<ans1<<" ";
        }
        if(ans2 == -1){
            cout<<"X "; 
        }
        else{
            cout<<ans2<<" "; 
        }
        newline
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
        solve();
    

    
    return 0;
}