#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter non-negative integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Invalid input\n";
        return 1;
    }

    long long fact = 1;
    int i = 1;
    while (i <= n) {
        fact *= i;
        ++i;
    }

    cout << n << "! = " << fact << endl;
    return 0;
}
