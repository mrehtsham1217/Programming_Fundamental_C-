#include <bits/stdc++.h>
using namespace std;
void printvect(vector<pair<int, int> > &vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i].first << " " << vect[i].second << endl;
    }
}
void printvect(vector<int> &vect)
{
    cout << "vector size:\t" << vect.size()<<endl;
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
    }
}

int main()
{
    // array of vectors
    // vectors of vectors-->nesting of vectors
    /*vector<pair<int, int> > vect;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cout << "Enter pair:["<<i<<"]:\t";
        cin >> x >> y;
        vect.push_back(make_pair(x, y));
    }
     printvect(vect);*/

     //array of vectors------>
    /*int size;
    cout << "Enter vector:\t";
    cin >> size;
    vector<int> vect[size];//-->
    cout << "\n---------Taking input from the user---------\n";
    for (int i = 0; i < size; i++)
    {
        int inner_size;
        cout << "Enter inner vector size:[" << i << "]:\t";
        cin >> inner_size;
        for (int j = 0; j < inner_size;j++)
        {
            int inner_element;
            cout << "Enter inner element in vector:[" << j << "]:\t";
            cin >> inner_element;
            vect[i].push_back(inner_element);
        }
    }
    cout << "\n---------Displaying vectors---------\n";
    for (int i = 0; i < size;i++)
    {
        printvect(vect[i]);
    }*/

    //--------------vectors of vectors-----------------
    vector<vector<int> > vect;
    int SIZE;
    cout << "Enter size for vector:\t";
    cin >> SIZE;
    vector<int> temp;
    for (int i = 0; i < SIZE; i++)
    {
        int vector_size;
        cout << "Enter vector size:["<<i<<"]:\t";
        cin >> vector_size;
        for (int j = 0; j < vector_size;j++)
        {
            int elements;
            cout << "Enter element inside vetor:[" << j << "]:\t";
            cin >> elements;
            temp.push_back(elements);
        }
        vect.push_back(temp);
    }
    vect[0].push_back(1000);
    vect.push_back(vector<int>());
    cout << "\n---------Displaying vectors---------\n";
    for (int i = 0; i < vect.size(); i++)
    {
        // for (int j = 0; j < vect[i].size();j++)
        // {
        //     cout << vect[i][j];
        // }
        printvect(vect[i]);
    }
}
