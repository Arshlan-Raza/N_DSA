#include<iostream>

using namespace std;

void printArray(int arr[][2], int row , int col){ 
    for(int i = 0 ; i < row ; i++ ){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout <<endl;
    }
}

// column wise access 
void colWiseAccesPrint(int arr[][2],int row, int col){
    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[2][2] = {
        {1,2},
        {3,4}
    };

    // for intialiasing column is given mandatory 
    int arr2[4][4]; 

    colWiseAccesPrint(arr,2,2);
    cout<<endl;
    printArray(arr,2,2);

}