#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) 
    {
        if (n % i == 0) return false;
    }
        return true;
}

int main()
{
    int n; cin >> n;
    int k = 2;
    int cnt = 0;
    int super_cnt = 0;

    
    while(super_cnt < n)
    {
        if(isPrime(k))
        {
            cnt++;
            if(isPrime(cnt)) 
            {
                super_cnt++;
                if(super_cnt == n)
                {
                    cout << k << endl;
                    break;
                }
            }
        }
        k++;
    }
}
