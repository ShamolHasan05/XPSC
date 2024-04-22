#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define newline cout<<'\n';
using namespace std;

int bs(vector<int>& a, int k){
    int ans = -1;
    int n= a.size();
    int l=0, r=n-1;

    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid] == k){
            return mid;
        }
        else if(a[mid]<k){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return ans;
}

void solve(){
    int ts = 1;
    while(true){
        int n,q;
        cin>>n>>q;
        if(n==0 && q==0){
            break;
        }
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        cout << "CASE# " << ts << ":" << endl;

        while(q--){
            int k;
            cin>>k;
            int ans = bs(a,k);
            if(ans==-1){
                cout<< k << " not found"; newline
            }
            else{
                cout<<k <<" found at "<<ans+1; newline
            }
        }
        ts++;

    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    solve();
    

    
    return 0;
}