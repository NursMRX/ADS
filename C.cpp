#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    string str1; string str2; cin >> str1 >> str2;
    stack<char> ch1;
    stack<char> ch2;

    for(char l : str1)
    {
        if(l != '#') ch1.push(l);
        else if(!ch1.empty()) ch1.pop();
    }

    for(char l : str2)
    {
        if(l != '#') ch2.push(l);
        else if(!ch2.empty()) ch2.pop();
    }

    if(ch1.size() == ch2.size()) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}