// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*cout << "Welcome back to COmpetative programming\n";
    int a = 2;
    int b = 3;
    int sum = a + b;
    char ch = 'A';
    cout << sum << endl;
    cout << "Ascii value of a " << (int)ch << endl;*/
    // cout << 7 * 2 / 3 << endl; // proceed from left ot right
    // cout << 7 / 2 * 3 << endl; // proceed from left ot right

    /* rought power of int -10^9<int <10^9
    long int -10^12 long 10^12
    long long int -10^18 long long int 10^18



    int num1 = 1000000;
    int num2 = 2000000;
    cout << num1 * num2 << endl;
    int max = INT_MAX;
    cout << max << endl;
    cout << "\n--------------------------\n";
    long int num3 = num1 * 1LL * num2;
    cout << num3 << endl;
    cout << "\n--------------------------\n";
    double n1, n2;
    n1 = 2000000;
    n2 = 3000000;
    cout << fixed << setprecision(0) << n1 * n2 << endl;
    // fixed is used to avoid scientific notations and setprecision is used to avoid extra zero after points
    cout << "\n--------------------------\n";
    double var = 1e24;
    cout << var << endl;*/
    // Question 01--->online question
    /*
    Given rectangle of length l and b.print area of rectangle.
    constraints:
    1 <= l<=10^9
    b <= l<=10^9

    input format
    2 space separated l and b
    output format
    Single number which is the area of rectangle
    sample input
    3 4
    sample output
    12
    */

    int l, b;
    cin >> l >> b;
    cout << l * 1LL * b;
    return 0;
}
