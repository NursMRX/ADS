#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    vector<string> res;

    while(true)
    {   
        char ch; cin >> ch;
        if(ch == '!') break;
        else
        {
            int num;
            if(ch == '+')   
            {
                cin >> num;
                dq.push_front(num);
            }   
            else if(ch == '-')
            {
                cin >> num;
                dq.push_back(num);
            }
            else if(ch == '*')
            {
                if(dq.size() >= 2)
                {
                    int sum = dq.front() + dq.back();
                    res.push_back(to_string(sum));
                    dq.pop_front();
                    dq.pop_back();
                }
                else if(dq.size() == 1)
                {
                    int sum = dq.front() * 2;
                    res.push_back(to_string(sum));
                    dq.pop_front();
                }
                else res.push_back("error");
            }
        }
    }

    for(int i = 0; i < res.size(); i++) cout << res[i] << '\n';
}