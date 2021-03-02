#include <cstring>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define DBG
class solution {
public:
        string longestPalindrome(string s) {
            if(s.length()==0) return "";
            int i = 0, j = s.length();
            int checkLength = j;
            while(checkLength > 0){
                string subA = s.substr(i, checkLength);
                string subB = s.substr(i, checkLength);
                reverse(subB.begin(), subB.end());
                if(subA.compare(subB)!=0){
                    if( j+1 > int(s.length())){
                        checkLength--;
                        i = 0;
                        j = checkLength;
                    }
                    else{
                        i++;
                        j++;
                    }
                }
                else{
                    return subA;
                }
            }
            return s;
        }
};

int main(int argc, char *argv[]) {
    string check = "cbbd";
    // string temp1 = check.substr(0,3);
    // string temp2 = check.substr(1,2);
    // cout << "Temp1: " << temp1 << endl;
    // cout << "Temp2: " << temp2 << endl;
    solution mySolution;
    mySolution.longestPalindrome(check);
    return 0;
}
