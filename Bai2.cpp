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

int main() {
    int h,i,j;
    cin >> h;
    for ( i = 1; i <= h; i++ ) {
        for (j = 1 ; j <= i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
}