#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int l = 1;
        int ans = 0;

        for(int i=0;i<n;i++){
            if(a[i] > l){
                ans += a[i] - l;
                l += a[i] - l;
            }
            l++;
        }

        cout<<ans<<endl;

    }
    
    return 0;
}