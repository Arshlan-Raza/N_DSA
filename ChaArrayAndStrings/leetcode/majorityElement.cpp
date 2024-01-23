#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;


int main() { 


    vector<int > v = {1,1,2,2,2,3,4,4};

    // auto it1 = lower_bound(v.begin() ,v.end(), 2);
    // cout<<"Index of lower Bound is:"<<it1 - v.begin()<<endl;

    // auto it2 = upper_bound(v.begin() ,v.end(), 2);
    // cout<<"Index of upper Bound is:"<<it2 - v.begin()<<endl;

    for(int i = 0 ; i < v.size() ; i++){

        if(v[i] != v[i+1] ){
            auto it1 = lower_bound(v.begin() ,v.end(), v[i]);
            cout<<"Index of lower Bound is:"<<it1 - v.begin()<<endl;

            auto it2 = upper_bound(v.begin() ,v.end(), v[i]);
            cout<<"Index of upper Bound is:"<<it2 - v.begin()<<endl;
        }
     
    }

}