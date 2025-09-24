#include <iostream>
#include <vector>
#include <algorithm> // для sort
using namespace std;

int main() {
    int s; cin >> s;

    vector<int> a(s);  
    for (int i = 0; i < s; i++) cin >> a[i]; 

    int x; cin >> x;

    int l = 0, r = s - 1;
    bool found = false;
    while (l <= r) {
        int m = l + (r - l) / 2; 
        if (a[m] == x) {
            cout << "Yes" << endl;
            found = true;
            break;
        } else if (a[m] < x) {
            l = m + 1;  
        } else {
            r = m - 1;  
        }
    }

    if (!found) {
        cout << "No" << endl;
    }

    return 0;
}
