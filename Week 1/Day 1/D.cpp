#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int cnt = 0;
    int ans = n;

    if(n == 0){
        cout<<"0000"<<endl;
    }
    else if(n == 00){
        cout<<"0000"<<endl;
    }
    else if(n == 000){
        cout<<"0000"<<endl;
    }
    else{
        while(n != 0){
            n /= 10;
            cnt++;
        }
        cnt = 4 - cnt;
        for(int i=0; i<cnt; i++){
            cout<<"0";
        }
        cout<<ans<<endl;
        
    }

    
    
    return 0;
}