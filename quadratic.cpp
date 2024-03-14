#include <iostream>
using namespace std;

void quadratic(long n){
    int s = 0;
    for (int i = 0; i < n; i++) { // Fix: increment i, not n
        for(int j = 0; j < n; j++) {
            s += 1;
            cout << "i= " << i << " j= " << j << " and steps s= " << s << endl;
        }
        cout << endl;
    }
}

int main() {
    quadratic(10);
    return 0;
}
