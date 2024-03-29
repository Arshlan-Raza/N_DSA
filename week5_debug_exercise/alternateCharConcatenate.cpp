
/*
Test Case:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
*/

#include<iostream>

using namespace std ;

string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string result = "";
        int i = 0, j = 0;

        while (i < m || j < n) {
            if (i < m) {
                result.push_back(word1[i++]);
            }
            if (j < n) {
                result.push_back(word2[j++]);   
            }
        }

        return result;  
}

int main() {
    string word1 = "abc";
    string word2 = "pqr";

    string merged = mergeAlternately(word1, word2);

    cout<<merged<<endl;

    return 0;
}