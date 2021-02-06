#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
      int substringLength(string s) {
        vector<string> subStrings;
        int max = 0, maxIndex = 0, counter = 0;
        string existingChar = "", tempChar = "", tempString = "";
        for (int i = 0; i < s.length(); i++) {
          tempChar = s[i];
          for (int ii = 0; ii < tempString.length(); ii++) {
            existingChar = tempString[ii];
            if (tempChar == existingChar) {
                if(tempString.length()>max) max=tempString.length();
                subStrings.push_back(tempString);
                tempString = "";
                continue;
            }
          }
          tempString.append(tempChar);
        }
        subStrings.push_back(tempString);
        return max;
      }
};

int main(int argc, char *argv[]) {
    string check = "sass";
    Solution mySolution;
    cout << mySolution.substringLength(check) << endl;
    return 0;
}
