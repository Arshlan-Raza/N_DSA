#include<iostream>
#include<vector>

using namespace std;

void wavePrintMatrix(vector<vector<int>>v){
    int m = v.size();
    int n = v[0].size();

    for(int startCol = 0 ; startCol < m ; startCol++){

        //even no of col 
        if((startCol % 2) == 0){
            for(int i  = 0 ; i < n ; i++){
                cout<<v[i][startCol]<<" ";
            }
        }

        // odd no of col
        else{
            for(int i  = m-1 ; i >= 0 ; i--){
                cout<<v[i][startCol]<<" ";
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