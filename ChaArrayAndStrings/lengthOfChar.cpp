#include<iostream>

using namespace std ;

int findLength(char ch[]){
    int i = 0 ;

    while(ch[i]!='\0'){
       
        i++;
    }

    

    return i;
}

int main(){
    char ch[100];

    // cin>>ch;
    cin.getline(ch,100);
    
    int len = findLength(ch);

    cout<<"Length is :"<<len;
}