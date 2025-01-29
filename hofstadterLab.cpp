#include <iostream>

using namespace std;

int G(int n){
    if(n==0)
        return 0;
    return n-G(G(n-1));
}

int main() {
    cout << "The first 20 terms of the Hofstadter sequence:" << endl;
    for(int index=0; index < 20; index++){
        cout << G(index) << " ";
    }
    return 0;
}