#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
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
    string city, s; cin >> city;
    int n; cin >> n;
    vector<string> ss(n);
    for(int i = 0; i < n; i++){
        cin >> s; ss.push_back(s);
    }

    

}