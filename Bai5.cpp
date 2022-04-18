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
    int x,i;
    cin >> x;
    bool y = true;
    for ( i = 2; i < x; i++) {
        if (x % i == 0) {
            y = false;
        }
       
    }
    if (y == true) {
        cout << "la so nguyen to";
    }
    else cout << "khong phai la so nguyen to";
}