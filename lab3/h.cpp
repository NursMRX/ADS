#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;             

    vector<int> a(n);          
    cin >> a[0];                
    for (int i = 1; i < n; i++) {
        cin >> a[i];          
        a[i] += a[i - 1];       
    }

    int b;                      
        cin >> b;              

        int l = 0; int r = n;             
        int mid;

        while (l < r) {
            mid = l + (r - l) / 2;  
            if (a[mid] < b) {
                l = mid + 1;        
            } else {
                r = mid;           
        }

        cout << l + 1 << endl;  
    }

    return 0;
}