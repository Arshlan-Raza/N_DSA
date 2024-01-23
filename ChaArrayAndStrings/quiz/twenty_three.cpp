#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int fun(char p[]){
    int curr = 1, i = 1 ;
    while(p[curr]){
        if(p[curr] != p[curr - 1]){
            p[i] = p[curr];
            i++;
        }

        curr++;
    }

    p[i] = 'X';
    return i ;
}

int main(){
    // string str ("nobody does like this");
    // string key("nobody");

    // size_t f;

    // f = str.rfind(key);
    // if(f != string::npos)
    //     str.replace(f,key.length(),"everybody");
        
    // cout<<str<<endl;

   char str[] = "babbar";
   int n = fun(str);

   for(int i = 0 ; i < n ;i++){
    cout<<str[i];
   }

    
  
}