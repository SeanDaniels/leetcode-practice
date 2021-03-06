#include <bits/stdc++.h>

using namespace std;
#define ITEMS 5
void generateSubsets(int number, int size, vector<int> sub, vector<int> super){
    if(number > size){
        for(auto x : sub){
            cout << x << endl;
        }
        return;
    }
    sub.push_back(super.at(number));
    generateSubsets(super.at(number + 1), size, sub, super);
    sub.pop_back();
    generateSubsets(super.at(number + 1), size, sub,  super);
}

int main(){
    vector<int> superSet = {1,2,3,4};
    vector<int> subSet;
    int size = 4;
    generateSubsets(superSet.at(0), size, subSet, vector<int> super)
    return 0;
}
