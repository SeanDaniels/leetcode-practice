#include <iostream>
#include <stdlib.h>
#include <vector>
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
using namespace std;
bool sumCheck(int arg1, int arg2, int target){
    int checkSol = arg1 + arg2;
    if(checkSol==target)return true;
    return false;
}

vector<int> twoSum(vector<int> &nums, int target) {
  vector<int> resultVector;
  int sum;
  for (int i = 0; i < nums.size(); i++) {
    for(int ii = 0; ii < nums.size(); ii++){
        if(ii != i){
            sum = nums[i] + nums[ii];
            cout << nums[i] << " + " << nums[ii] << " = " << sum << endl;
            if(sum==target){
                cout << " Target = sum " << endl;
                resultVector.insert(resultVector.end(), i);
                resultVector.insert(resultVector.end(), ii);
                return resultVector;
            }
        }
    }
  }
  return resultVector;
}

int main(int argc, char *argv[]) {
  vector<int> sumVector = {2, 7, 11, 5};
  vector<int> resultVector;
  int lockCheck, currIndex, sum, target = 9;
  resultVector = twoSum(sumVector, 9);
  for (auto it = resultVector.begin(); it != resultVector.end(); ++it) {
    cout << *it << endl;
  }
  return 0;
}
