#include<bits/stdc++.h>
using namespace std;

vector<int> pref_func(string s){ 
    int n = s.size();
    vector<int> pi(n);
    pi[0] = 0;

    for(int i = 1; i < n; i++){
        int j = pi[i - 1];

        while(j > 0 && s[i] != s[j]) j = pi[j - 1];

        if(s[i] == s[j])j++;
        
        pi[i] = j;
    }
    return pi;
}


int main(){
    string s1, s2, comb; cin >> s1;
    int n, cnt; cin >> n >> s2;

    cnt = 0;
    comb = s1 + '#' + s2;

    vector<int> pi = pref_func(comb);

    for(int i = 0; i < comb.size(); i++){
        if(pi[i] == s1.size()) cnt++;
    }
    
    if(cnt >= n) cout << "YES";
    else cout << "NO";
}