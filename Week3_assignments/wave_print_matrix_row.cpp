#include<iostream>
#include<vector>

using namespace std;

void wavePrintMatrix(vector<vector<int>>v){
    int m = v.size();
    int n = v[0].size();

    for(int startRow = 0 ; startRow < n ; startRow++){

        //even no of col 
        if((startRow % 2) == 0){
            for(int i  = 0 ; i < m ; i++){
                cout<<v[startRow][i]<<" ";
            }
        }

        // odd no of col
        else{
            for(int i  = n-1 ; i >= 0 ; i--){
                cout<<v[startRow][i]<<" ";
            }
        }
    }
}

int main(){
    vector<vector<int>> arr =  {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    wavePrintMatrix(arr);
}