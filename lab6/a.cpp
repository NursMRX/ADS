#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'o' || c == 'i' || c == 'e' || c == 'u');
}

bool check(char a, char b){
    bool n1 = isVowel(a);
    bool n2 = isVowel(b);

    if(n1 != n2) return n1;
    return a < b;
}

int main(){
    int n; 
    string s;

    cin >> n >> s;

    sort(s.begin(), s.end(), check);

    cout << s;

    return 0;
}

