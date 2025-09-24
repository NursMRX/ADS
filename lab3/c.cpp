#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& a, int p, bool f) {
    int l = 0;                 
    int r = a.size();          

    while (l < r) {
        int m = (l + r) / 2;    

        if (f) {
            if (a[m] <= p) {
                l = m + 1;      
            } else {
                r = m;          
            }
        } else {
            if (a[m] < p) {
                l = m + 1;      
            } else {
                r = m;          
            }
        }
    }
    return l;                  
}

int main() {
    int n, k;
    cin >> n >> k;              

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];           
    

    sort(a.begin(), a.end());

    while (k--) {
        int l, r, l1, r1;
        cin >> l >> r >> l1 >> r1;  

        int cnt1 = binary_search(a, r + 1, true) - binary_search(a, l, true);

        int cnt2 = binary_search(a, r1 + 1, true) - binary_search(a, l1, true);

        int left  = max(l, l1);
        int right = min(r, r1);

        int cnt3 = 0;
        if (left <= right) {
            cnt3 = binary_search(a, right + 1, true) - binary_search(a, left, true);
        }

        cout << cnt1 + cnt2 - cnt3 << '\n'; 
    }

    return 0;
}