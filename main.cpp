#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float valFunzione(float x) {
    float funzione = (pow(x, 2) * cos(x)) + 1;
    return funzione;
}

int main() {
    float a, b, x;
    do {
        cout << "inserire estremi";
        cin >> a >> b;
    } while (valFunzione(a) * valFunzione(b) >= 0);
    
    float err = abs(((b - x) / 2));

    do {
        x = ((a + b) / 2);
        if (valFunzione(x) == 0) {
            cout << setprecision(5) << x;
            cout << setprecision(5) << valFunzione(x);
            break;
        } else {
            if (valFunzione(a) * valFunzione(x) < 0) {
                a = x;
            } else {
                b = x;
            }
        }
    } while (err >= pow(1, -6));

    return 0;
}
