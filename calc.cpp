#include "calc.h"
#include "pch.h"
#include <cmath>
using namespace std;
double calculateY(double x, int n) {
    double y;

    if (x <= 0) {
        y = 0;
        for (int i = 0; i <= n; i++) {
            y += pow(x - i, 2);
        }
    }
    else {
        y = 1;
        for (int i = 1; i < n; i++) {
            double p = 1;
            for (int j = 1; j < n; j++) {
                p *= (x + i + j * j);
            }
            y *= p;
        }
    }

    return y;
}
