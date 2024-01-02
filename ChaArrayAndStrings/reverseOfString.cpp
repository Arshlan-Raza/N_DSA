#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

void  reverseString(char ch[],int n){
    int i = 0 ; 
    int j = n - 1;

    while( i <= j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int main(){
    char ch[100];

    cin>>ch;

    cout<<"Before swap :"<<ch<<endl;
    reverseString(ch,strlen(ch));
    cout<<"After reverse:"<<ch<<endl;

    //  string ch;

    // cin>>ch;

    // cout<<"Before swap :"<<ch<<endl;
    // reverse(ch.begin(),ch.end());
    // cout<<"After reverse:"<<ch<<endl;
}