#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "Hellojee";
    /* if (str1 == str2)
         cout << "Equal";
     else
         cout << "Not Equal";
     return 0;
    str1[0] = 'a'; // cannot assign like str[0]="a"
    cout << str1.size();
    string str;
    getline(cin, str);
    cout << str;

    int number;
    cin >> number;
    cin.ignore();
    while (number--)
    {
        string s;
        getline(cin, s);
        cout << s << endl;
    }*/
    string s1, s2;
    cin >> s1;
    // cin >> str2;
    string rev_str;
    for (int i = s1.size() - 1; i >= 0; i--)
    {
        // rev_str = rev_str + s1[i];//adding char to string
        rev_str.push_back(s1[i]);
    }
    cout << rev_str;
    if (s1 == rev_str)
        cout << "Yes";
    else
        cout << "NO";
}
