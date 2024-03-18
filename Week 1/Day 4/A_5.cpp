
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
    int n = txt.length();
    int k = pat.length();
    int ans = 0, l = 0, r = 0;
    
    vector<int> Newpat(26,0);
    for(int i = 0; i < k; i++){
        Newpat[pat[i]-'a']++;
    }
    
    vector<int> Newtxt(26,0);
    
    while(r < n){
        Newtxt[txt[r] - 'a']++;
        if(r - l + 1 == k){
            if(Newtxt == Newpat)
                ans++;
                
                Newtxt[txt[l] - 'a']--; 
                l++; 
        }
        r++;
    }
    
    return ans;
}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}