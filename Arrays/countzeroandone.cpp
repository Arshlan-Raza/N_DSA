#include<iostream>

using namespace std;

void countZeroAndOne(int arr[],int size){
    int count1 = 0;
    int count0 = 0;

    for(int i = 0 ; i < size ; i++){
        if(arr[i] == 1){
            count1++;
        }
        else{
            count0++;
        }
    
    }

    
    cout<<"Number of 1's in array is: "<<count1;
    cout<<endl;
    cout<<"Number of 0's in array is: "<<count0;
}

int main (){

    int arr[10] = {1,0,1,1,0,0,1,0,1,0};
    // 5's zero are there 
    // 5's one's are there 

    int size = 10;

    countZeroAndOne(arr,size);

}


