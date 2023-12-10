#include<iostream>

using namespace std;

void findTarget(int arr[3][3],int row, int col){

       
            for(int i = 0 ; i < col ; i++){
                 int sum = 0 ;
                for(int j = 0 ; j < row ; j++){
                    sum += arr[j][i];
                       
                }
                
                cout<<i<<" Col sum:"<<sum<<endl;
            }
            
}

int main(){
    int arr[3][3] ={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int target = 300;

    findTarget(arr,3,3);

    
}