#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    // Creation
    vector<int> arr(5, -1);
    //  Creation with initial size
    vector<int> arr1(5);
    //  Creation with initial size and value
    vector<int> arr2(5, 10);
    // Capacity
    cout << "Capacity: " << arr.capacity() << endl; // output: 0
    // // Reserve :- We can reserve capacity for the vector
    arr.reserve(10);
     cout << "Capacity: " << arr.capacity() << endl;   // output: 10

    //  Iterator
    vector<int>::iterator it = arr.begin();
    //  Print the elements of the vector using iterator
    while (it != arr.end())
    {
        cout << *it << " ";
        ++it;
    }
    // 2D vector Creation
     vector<vector<int>>arr2();
    // 2D vector Creation with initial size
    vector<vector<int>> arr3(4,vector<int>(5,-1));
    // printing using for loop
//    for(int i=0;i<arr3.size();i++){
//     for(int j=0;j<arr3[0].size();j++){
//         cout<<arr3[i][j]<<" ";
//     }
//     cout<<endl;
//    }
    //  Printing using foreach loop
    for(auto i:arr3){
         for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    // print
    // print(arr2);
    return 0;
}