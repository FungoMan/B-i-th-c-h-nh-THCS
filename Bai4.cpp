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
    double s = 0;
    int n, i;
    cin >> n;
    for ( i = 0; i < n; i++ ) {
       s = sqrt(2+s);
    }
    cout << s;
}