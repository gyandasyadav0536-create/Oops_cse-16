#include <bits/stdc++.h>
using namespace std;

// Call by Value
void callByValue(int x) {
    x = x + 10; // modifies only the local copy
    cout << "Inside callByValue, x = " << x << endl;
}

// Call by Reference
void callByReference(int &x) {
    x = x + 10; // modifies the original variable
    cout << "Inside callByReference, x = " << x << endl;
}

int main() {
    int a = 5;

    cout << "Initial value of a = " << a << endl;

    // Call by Value
    callByValue(a);
    cout << "After callByValue, a = " << a << endl << endl;

    // Call by Reference
    callByReference(a);
    cout << "After callByReference, a = " << a << endl;

    return 0;
}