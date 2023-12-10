#include<iostream>

using namespace std;

void printArray(int arr[3][3],int row, int col){
    for(int i = 0 ; i < row ;i++){
        for(int j = 0 ; j < col; j ++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Transpose(int arr[3][3],int row, int col){
    for(int i = 0 ; i < row ;i++){
        for(int j = i ; j < col; j ++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main(){
    int arr[3][3] = {
        {2,4,6},
        {8,3,5},
        {7,9,1}
    };

    cout<<"Before transpose:"<<endl;
    printArray(arr,3,3);
    

    cout<<"After transpose:"<<endl;
    Transpose(arr,3,3);
    printArray(arr,3,3);
}