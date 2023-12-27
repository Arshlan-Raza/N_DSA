#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool possibleSolution(vector<long long int>&trees, long long int m,long long int mid){
        long long woodCollected = 0;
        for(int i = 0 ; i < trees.size() ; i++){
            if(trees[i] > mid){
                woodCollected += trees[i] - mid;
            }
        }
        return woodCollected >= m;
}

long long int maxSawBladeHeight(vector<long long int>&trees , int n , int m){
    long long int s = 0;
    long long int e = *max_element(trees.begin(),trees.end());
    int ans = -1;

    while(s <= e){
        long long int mid = s + (e - s)/2;
        if(possibleSolution(trees,m,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    long long int n , m ;
    cin>>n>>m;

    vector<long long int >trees;
    while(n--){
        long long int height  ;
        cin>>height;
        trees.push_back(height);
    }

    cout<<maxSawBladeHeight(trees,n,m);
}