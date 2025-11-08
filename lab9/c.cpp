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
    string s1, s2, comb; cin >> s1 >> s2;
    comb = s1 + '#' + s2 + s2;

    int n = s2.size();
    vector<int> pi = pref_func(comb);

    for(int i = 0; i < comb.size(); i++){
        if(pi[i] == n){
            cout << i - 2*n;
            return 0;
        }
    }
    cout << -1;
    return 0;
}