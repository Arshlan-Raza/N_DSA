#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<vector<int>> arr, int row , int col){ 
    for(int i = 0 ; i < row ; i++ ){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout <<endl;
    }
}

int main(){
    
    vector<vector<int>> arr(3,vector<int>(3,-1));
    printArray(arr,arr.size(),arr[0].size());
}