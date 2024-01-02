#include<iostream>
#include<string.h>
using namespace std ;

bool checkPalindrome(char ch[],int n){
    int i = 0 ;
    int j = n - 1;

    while(i <= j){
       
       if(ch[i] != ch[j])
        return false;

        i++;
        j--;
    }

    return true;

}

int main(){
    char ch[100];

    // cin>>ch;
    cin.getline(ch,100);

    int n = strlen(ch);
    
    int ans = checkPalindrome(ch,n);

    if(ans){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
}