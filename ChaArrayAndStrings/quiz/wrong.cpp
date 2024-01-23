#include<iostream>
#include<string>
#include<cstring>


using namespace std ;

int main(){
    char p[20];
    char s[] = "string";
    int length = strlen(s);
    int i;

    for(i = 0 ; i < length ; i++){
        p[i] = s[length - i];
        cout<<"p[i]:"<<p[i]<<" "<<"s[length - i]:"<<s[length - i]<<endl;
    }

    for(int i = 0 ; p[i] != '\0' ; i++){
            cout<<p[i]<<" ";
    }

}