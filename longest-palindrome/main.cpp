#include <cstring>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define DBG
class solution {
public:
        void printSubstr(string s, int low, int high){
            for(int i = low; i <= high; i++){
                cout << s[i] ;
            }
            cout << endl;
            return;
        }
        string longestPalindrome(string s) {
            if(s.length()==0) return "";
            int maxLength = 1, start = 0, len = s.length();
            int low, high;
            for(int i = 1; i < len; i++){
                low = i - 1;
                high = i;
                while(low>=0 && high<len && (s[low] == s[high])){
                    if(high - low + 1 > maxLength){
                        start = low;
                        maxLength = high - low + 1;
                    }
                    --low;
                    ++high;
                }
                low = i - 1;
                high = i + 1;
                while(low>=0 && high<len && (s[low] == s[high])){
                    if(high - low + 1 > maxLength){
                        start = low;
                        maxLength = high - low + 1;
                    }
                    --low;
                    ++high;
                }
            }
            string sol = s.substr(start, start+maxLength-1);
            return sol;
        }
};

int main(int argc, char *argv[]) {
    string check = "cbbd";
    solution mySolution;
    cout << mySolution.longestPalindrome(check) << endl;
    return 0;
}
