#include<bits/stdc++.h>
using namespace std;



int main(){
    string str;
    cin>>str;

    bool cnt[26];
    memset(cnt, false, sizeof(cnt));

    for(int i=0; i<str.length();i++){
        cnt[str[i] - 'a'] = true;
    }


    for(int i=0; i<26;i++){
        if(cnt[i] == false){
            char letter = static_cast<char>(i + 'a');
            cout<<letter<<endl;
            return 0;
        }
    }

    cout<<"None"<<endl;
    
    
    return 0;
}