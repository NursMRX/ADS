#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    queue<int> nursik;
    queue<int> boris;

    for(int i = 0; i < 5; i++)
    {
        int num; cin >> num;
        boris.push(num);
    }

    for(int i = 0; i < 5; i++)
    {
        int num; cin >> num;
        nursik.push(num);
    }

    int cnt = 0;

    while(!nursik.empty() && !boris.empty())
    {
        if((nursik.front() == 0) && (boris.front() == 9)) 
        {
            nursik.push(boris.front());    
            nursik.push(nursik.front());
        }
        else if((nursik.front() == 9) && (boris.front() == 0)) 
        {
            boris.push(boris.front());
            boris.push(nursik.front());
        }
        else if((nursik.front() > boris.front())) 
        {
            nursik.push(boris.front());
            nursik.push(nursik.front());
        }
        else 
        {
            boris.push(boris.front());
            boris.push(nursik.front());
        }
        nursik.pop();
        boris.pop();
        cnt++;
    }

    if(boris.empty()) cout << "Nursik" << " " << cnt;
    else  cout << "Boris" << " " << cnt;
    return 0;
}