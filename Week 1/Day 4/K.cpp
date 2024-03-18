#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str[3][n];
        map<string, int> mp;

        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin>>str[i][j];
                mp[str[i][j]]++;
            }
        }
        int ans[3];
        ans[0] = 0;
        ans[1] = 0;
        ans[2] = 0;

        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                if(mp[str[i][j]] == 1){
                    ans[i] +=3;
                }
                else if(mp[str[i][j]]==2){
                    ans[i] +=1;
                }
            }
        }
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;

    }

    
    return 0;
}