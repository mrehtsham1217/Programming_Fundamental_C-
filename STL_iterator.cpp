#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    //Iterators in C++--->STL 
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end();it++)
        cout << (*it) << endl;
    cout << "\n------------Iterator of pair-----------\n";
    vector<pair<int, int> > vect_pair;
    vect_pair.push_back(make_pair(10, 20));
    vect_pair.push_back(make_pair(20, 30));
    vect_pair.push_back(make_pair(40, 50));
    vect_pair.push_back(make_pair(60, 70));
    vect_pair.push_back(make_pair(80, 90));

    vector<pair<int, int> >::iterator itt;

    for (itt = vect_pair.begin(); itt != vect_pair.end();itt++)
    {
        // cout << (*itt).first << " " << (*itt).second << endl;
        cout << itt->first << " " << itt->second << endl;
    }
}
