#include<bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int t = 0 ; t < T ; ++t) {
        int n;
        bool prime = true;
        cin >> n;
        if (n > 1) {
            for (int i = pow(M_E, log(n)/2) ; i > 1 ; --i) {
                if ( !(n % i) ) {
                    prime = false;
                    break;
                }
            }
        } else {
            prime = false;
        }
        if ( prime ) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}

