#include <bits/stdc++.h>
using namespace std;
void displaY(vector<string> vector_array)
{
    cout << "Vector size:" << vector_array.size() << endl;
    for (int i = 0; i < vector_array.size(); i++)
    {
        cout << vector_array[i] << " ";
    }
    // for(auto &p : vector_array)
    // {
    //     cout<<p<<" ";
    // }
    cout << endl;
}
void displaY(vector<int> vector_array)
{
    cout << "Vector size:" << vector_array.size() << endl;
    for (int i = 0; i < vector_array.size(); i++)
    {
        cout << vector_array[i] << " ";
    }
    // for(auto &p : vector_array)
    // {
    //     cout<<p<<" ";
    // }
    cout << endl;
}
vector<int> inputVector()
{
    vector<int> vect;
    int size;
    cout << "Enter size of vector:\t";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter vector [" << i << "]:\t";
        int input;
        cin >> input;
        vect.push_back(input);
    }
    return vect;
}
void outputvect(vector<int> vect)
{

    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vector is like an array--->dynamically array but its size can be change
    // int array[10];--->already contain 10 blocks of memory
    // vector<int> Vector_array(10,3);
    /* vector<int> Vector_array;
     Vector_array.push_back(1222);
     displaY(Vector_array);
     Vector_array.pop_back();
     displaY(Vector_array);

     int size;
     cout << "Enter size of vector:\t";
     cin >> size;
     cout << "\n------Taking input from user-------\n";
     for (int i = 0; i < size;i++)
     {
         int input_element;
         cout << "Enter values:[" << i << "]:\t";
         cin >> input_element;
         // displaY(Vector_array);
         Vector_array.push_back(input_element);
     }
         cout << "\n------Taking input from user-------\n";
         displaY(Vector_array);*/

    //---------vectors of string------------
    /* vector<string> vect;
     int size;
     cout << "Enter size:\t";
     cin >> size;
     for (int i = 0; i < size;i++)
     {
        string input;
        cout << "Enter string :[" << i << "]\t";
        cin >> input;
        vect.push_back(input);
     }
     displaY(vect);
     vector<int> vect = inputVector();
     outputvect(vect);*/
}
