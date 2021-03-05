#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    int coinVal;
    int multTwo, multThree, multFour, sumVal;
    while(cin >> coinVal){
      multTwo = coinVal / 2;
      multThree = coinVal / 3;
      multFour = coinVal / 4;
      sumVal = multTwo + multThree + multFour;
      if (sumVal > coinVal) {
        cout <<  sumVal << endl;
      } else {
        cout <<  coinVal << endl;
      }
    }
    return 0;
}
