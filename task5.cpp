#include <iostream>
using namespace std;

int climbWays(int n) {
    if (n == 0 || n == 1)
        return 1;
    return climbWays(n - 1) + climbWays(n - 2);
}

int main() {
    int n;
    cout << "Enter number of steps: ";
    cin >> n;

    if (n < 0)
        cout << "Steps can't be negative." << endl;
    else
        cout << "Number of ways to climb: " << climbWays(n) << endl;

    return 0;
}