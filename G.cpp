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
    int k = 1;
    int cnt = 0;

    for(int i = 1; i <= n; i++)
    {
        while(true)
        {
            if(isPrime(k))
            {
                if(k == n) 
                {
                    cout << k << endl;
                    break;
                }
            }
            k++;
        }
    }
}