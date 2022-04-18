#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <string>
#include <numeric>
#include <map>
#include <iomanip>

using namespace std;

int main () {
    int h,i,j,x,y;
    cin >> h;
    for ( i = 1; i <= h; i++) {
        for (j = h-i; j >= 0 ; j--) {
            cout << " " << " ";
        }
        for (x = 0; x < i-1; x++) {
            cout << "*" << " ";
        }
        cout << "*" << " ";
        for ( y = 0; y < i-1; y++) { 
            cout << "*" << " ";
        }
        cout<< endl;
    }
}