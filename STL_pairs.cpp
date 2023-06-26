//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //what are pairs in C++
    pair<int, string> pairr;
    //first method
    pairr = make_pair(2, "Ehtsham");
    //cout<< pairr.first<<' '<<pairr.second;
    //second method
    // pairr = {2,"Ehtsham"};
    cout<< pairr.first<<' '<<pairr.second<<endl;

    //copying the data to other pair
    //pair is used to find relation between items like array
    //pair<int, string> pairr2 = pairr;
    pair<int, string> &pairr2 = pairr;
    pairr.first = 1217;
    pairr.second = "Mudassar";
    cout << pairr2.first << " " << pairr2.second << endl;
    cout << pairr.first << ' ' << pairr.second << endl;


    //find relation using pairs
    pair<int, int> pairr_Array[3];
    pairr_Array[0] = make_pair(1, 2);
    pairr_Array[1] =make_pair(2,3);
    pairr_Array[2] = make_pair(3,4);
    cout << "\n--------Displaying array---------\n";
    for (int i = 0; i < 3;i++)
    {
        cout << pairr_Array[i].first << " " << pairr_Array[i].second<<endl;
    }
        cout << "\n--------Displaying array after swap---------\n";
        swap(pairr_Array[0], pairr_Array[2]);
        for (int i = 0; i < 3;i++)
    {
        cout << pairr_Array[i].first << " " << pairr_Array[i].second<<endl;
    }

    cout << "\n-------------Taking input from user------------------\n";
    pair<string, string> spair;
    cout << "Enter first value of pair:\t";
    cin >> spair.first;
    cout << "Enter second value of pair:\t";
    cin >> spair.second;
    cout << spair.first << " " << spair.second<<endl;
    swap(spair.first, spair.second);
    cout << spair.first << " " << spair.second<<endl;

    cout << "\n-------------Taking input from user of pair array------------------\n";
    pair<int, int> P_array[5];
    for (int i = 0; i < 5;i++)
    {
        cout << "Enter pair of array:["<<i<<"]:\t";
        cin >> P_array[i].first>>P_array[i].second;
        // cin >> P_array[i].second;
    }
    cout << "\n--------------Displaying array of pair--------------\n";
    for (int i = 0; i < 5;i++)
    {
        cout << P_array[i].first << " " << P_array[i].second << endl;
    }
}
