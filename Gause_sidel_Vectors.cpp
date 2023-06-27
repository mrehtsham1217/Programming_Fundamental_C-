#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 5;
    vector<float> T1(5);
    vector<float> T2(5);
    vector<float> T3(5);
    vector<float> T4(5);
    T1[0] = 0.0;
    T2[0] = 0.0;
    T3[0] = 0.0;
    T4[0] = 0.0;

    for (int i = 0; i < T1.size(); i++)
    {
        T1[i + 1] = (160 + T2[i] + T3[i]) / 4;
        T2[i + 1] = (140 + T1[i + 1] + T2[i]) / 4;
        T3[i + 1] = (60 + T1[i + 1] + T4[i]) / 4;
        T4[i + 1] = (40 + T2[i + 1] + T3[i + 1]) / 4;
    }
    cout << "\n---------Displaying of Gause sidel method-------------\n";
    for (int i = 0; i < T1.size(); i++)
    {
        cout << T1[i + 1] << "\n";
        cout << T2[i + 1] << "\n";
        cout << T3[i + 1] << "\n";
        cout << T4[i + 1] << "\n";
        cout << "\n----------------------\n";
    }
}
