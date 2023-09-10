/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int gaps = n-1,k=1;
        int j = i;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps + 1, z = i;

        while(z>=ch){
            cout<<j;
            j = j - 1;
          
        }
        // j = j - 1;
        // z = (ch-1)/2;
        // while(z>=1){
        //     j = j - 1;
        //     cout<<j;
        //     z = z - 1;
        // }
        // k = 1;
        // while(k<=gaps/2){
        //     cout<<" ";
        //     k = k + 1;
        // }
        cout<<"\n";
        i = i + 1;
    }
}