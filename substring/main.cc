#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution{
    public:
      int substringLength(string s) {
        if(s.length()==0) return 0;
        int len = 0, max = 0, i = 0, j = 0;
        vector<char> characters;
        for(i = 0; i < s.length(); i++){
          char c = s.at(i);
          vector<char>::iterator it = find(characters.begin(), characters.end(), c);
          while(it != characters.end()){
            auto findChar = find(characters.begin(), characters.end(), s.at(j));
            characters.erase(findChar);
            ++j;
            it = find(characters.begin(), characters.end(), c);
          }
          characters.push_back(c);
          #ifdef DBG
          cout << "Char vector: ";
          for(auto x : characters) cout << x << ",";
          cout << endl;
          #endif
          len = i - j + 1;
          if(len>max) max = len;
          // i++;
        }
        return max;
      }
};

int main(int argc, char *argv[]) {
    string check = "abadvdf";
    Solution mySolution;
    cout << mySolution.substringLength(check) << endl;
    return 0;
}
