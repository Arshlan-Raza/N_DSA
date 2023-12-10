#include<iostream>

using namespace std;

bool findTarget(int arr[3][3],int row, int col,int target){
            for(int i = 0 ; i < row ; i++){
                for(int j = 0 ; j < col ; j++){
                    if(arr[i][j] == target)
                        return 1;
                }
            }

            return 0;
}

int main(){
    int arr[3][3] ={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int target = 300;

    int ans = findTarget(arr,3,3,target);

    if(ans == 1){
        cout<<"Target Found"<<endl;
    }
    else{
        cout<<"Target not Found"<<endl;
    }
}