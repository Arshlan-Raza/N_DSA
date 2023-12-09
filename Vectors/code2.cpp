#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v ){
    cout<<"The vector elements are :"<<endl;
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v;

    int n ;
    cin>>n;
    
    for(int i = 0 ; i < n ; i++){
        v.push_back(i);
    }

    print(v);


    // clearing the vector 

    v.clear();

    print(v);
}