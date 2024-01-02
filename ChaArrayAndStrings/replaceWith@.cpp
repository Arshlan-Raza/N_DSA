#include<iostream>

using namespace std ;

void replaceChar(char ch[]){
    int index = 0 ;

    while(ch[index]!='\0'){
       
       char currentChar = ch[index];

       if(currentChar == '@'){
        ch[index] = ' ';
       }
       index  ++;
      
    }

}

int main(){
    char ch[100];

    // cin>>ch;
    cin.getline(ch,100);
    
    replaceChar(ch);

    cout<<ch;
}