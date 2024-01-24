#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std  ;

bool isVowel(char ch) {
        ch = toupper(ch);
        return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' );
        cout<<"checking"<<endl;
}
    
string sortVowels(string s) {
        string t = s;
        vector<char> vowel;
        
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])) 
                vowel.push_back(s[i]);   

        }
        
        if(vowel.size()==0) return s;
        
        sort(vowel.begin(), vowel.end());
        
        int j=0;
        for(int i=0;i<t.length();i++){
            if(isVowel(t[i])) {
                t[i]=vowel[j++];
            }
        }
        
        return t;
}

int main() {

    string input = "uoiea";
    
    

    // Calling the function and displaying the result
    string output = sortVowels(input);

    cout<<endl;
    cout << "Original: " << input <<endl;
    cout << "Sorted Vowels: " << output <<endl;

    return 0;
}