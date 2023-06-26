#include<bits/stdc++.h>
using namespace std;
void displaY(vector<int> vector_array)
{
    cout << "Vector size:" << vector_array.size()<<endl;
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

int main()
{
    // vector is like an array--->dynamically array but its size can be change
    // int array[10];--->already contain 10 blocks of memory
    vector<int> Vector_array;
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
        displaY(Vector_array);
}