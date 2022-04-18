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
    int n,i,a;
    int s = 0;
    cin >> n;
    for ( i = 2; i <= n; i++) {
        if ( n % i == 0 && i % 2 == 0) { 
            s += i;
        }
    }
    cout << s;
}