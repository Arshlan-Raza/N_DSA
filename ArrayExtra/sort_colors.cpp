#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int> a , int size){
    size = a.size();

    int index = 0 ; 
    int left = 0 ; 
    int right = size - 1;

    // cout<<"Array first "<<a[index]<<a[left]<<a[right]<<endl;

    while(index <= right){
        if(a[index] == 0 ){
            swap(a[index],a[left]);
            left++;
            // cout<<a[index]<<a[left];
            index++;
        }
        else if(a[index] == 2 ){
            swap(a[index],a[right]);
            right--;
            
        }
        else{
            index++;
        }
       
    }

     cout<<"The array is :";
    for(int i = 0 ; i < a.size();i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    
    vector<int> v = {2,0,2,1,1,0};

    sortColors(v,v.size());

}