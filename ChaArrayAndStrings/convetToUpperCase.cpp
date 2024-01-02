#include<iostream>

using namespace std ;

void convertToUpperCase(char ch[]){
    int index = 0 ;

    while(ch[index]!='\0'){
       
       char currentChar = ch[index];

       if(currentChar >= 'a' && currentChar <='z'){
        ch[index] = currentChar - 'a' + 'A';
       }
       index  ++;
      
    }

}

int main(){
    char ch[100];

    // cin>>ch;
    cin.getline(ch,100);
    
    convertToUpperCase(ch);

    cout<<ch;
}