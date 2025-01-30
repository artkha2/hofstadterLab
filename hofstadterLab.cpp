#include <iostream>
#include <vector>

using namespace std;

int G(int n){
    if(n==0)
        return 0;
    return n-G(G(n-1));
}

// Optimized (non-recursive) function
int optimized_G(int n) {
    vector<int> seq(n + 1, 0); // all-zero (empty) array of size n+1 so that the last element has index n
    for (int i = 1; i <= n; i++) {
        seq[i] = i - seq[seq[i - 1]];
    }
    return seq[n];
}

int main() {
    cout << "The first 20 terms of the Hofstadter sequence:" << endl;
    for(int index=0; index < 20; index++){
        cout << G(index) << " ";
    }
    return 0;
}