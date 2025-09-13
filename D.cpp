#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    stack<char> st;

    if(str.empty())
    {
        cout << "YES";
    }
    else
    {
        for(char ch : str)
        {
            if(!st.empty() && st.top() == ch) st.pop();
            else  st.push(ch);
        }

        if(st.empty()) cout << "YES";
        else cout << "NO";    
    }
    return 0;
}
