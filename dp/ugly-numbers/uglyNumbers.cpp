#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
#define MAXUGLY 10

int uglyNumbers[MAXUGLY];

void setUgly(int n){
    int i2 = 0, i3 = 0, i5 = 0;
    int nextI2, nextI3, nextI5, nextValue;
    nextI2 = uglyNumbers[i2] * 2;
    nextI3 = uglyNumbers[i3] * 3;
    nextI5 = uglyNumbers[i5] * 5;
    for (int i = 1; i < n; i++) {
        nextValue = min(min(nextI2, nextI3), nextI5);
        uglyNumbers[i] = nextValue;
        if(nextValue == nextI2){
            i2++;
            nextI2 = uglyNumbers[i2]*2;
        }
        if(nextValue == nextI3){
            i3++;
            nextI3 = uglyNumbers[i3]*3;
        }
        if(nextValue == nextI5){
            i5++;
            nextI5 = uglyNumbers[i5]*5;
        }
    }
    return;
}

int main(int argc, char *argv[]) {
    uglyNumbers[0] = 1;
    setUgly(MAXUGLY);
    for(auto x : uglyNumbers) cout << x << endl;
    return 0;
}
