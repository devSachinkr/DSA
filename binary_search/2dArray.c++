#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& arr, int target) {
        int rows=arr.size();
        int cols=arr[0].size();
        int st=0,end=(rows*cols)-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            int rowIdx=mid/cols;
            int colIdx=mid%cols;
            if(arr[rowIdx][colIdx]==target){
                return true;
            }else if(arr[rowIdx][colIdx]>target){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return false;
    }
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    if(searchMatrix(arr, 9)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}