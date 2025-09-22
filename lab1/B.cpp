#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{

    int number; cin >> number;

    stack<int> st;

    vector<int> ages(number);

    vector<int> res(number);

    for(int i = 0; i < number; i++) cin>>ages[i];

    for(int k = 0; k < number; k++)
    {
        if(st.empty())
        {
            res[k] = -1;
            st.push(ages[k]);
        }
        else if(st.top() > ages[k])
        {
            while(!st.empty() && st.top() > ages[k]) st.pop();

            if(st.empty()) res[k] = -1;
            else res[k] = st.top();
            st.push(ages[k]);
        }
        else
        {
            res[k] = st.top();
            st.push(ages[k]);
        }
    }

    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";

}