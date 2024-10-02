#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int target)
{

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == target)
    {
      return true;
    }
  }
  return false;
}
int main()
{
  //   Taking Input In An  Array

  // int arr[6];
  // for (int i = 0; i <= 5; i++)
  // {
  //   cin >> arr[i];
  // }
  // for (int i = 0; i <= 5; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // --------------------------------------Linear Search--------------------------------------

  int arr[] = {12, 34, 56, 78, 90};
  int target = 92;
  if (linearSearch(arr, 5, target))
  {
    cout << "Found";
  }
  else
  {
    cout << "Not Found";
  };
}