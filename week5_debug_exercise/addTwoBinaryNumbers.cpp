#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;

string addBinary(string a, string b) {
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry += a[i--] - '0';
      if (j >= 0)
        carry += b[j--] - '0';
      ans += carry % 2 + '0';
      carry /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
        string a = "1111";
        string b = "1111";

        string ans = addBinary(a,b);
        cout<<ans;
}

