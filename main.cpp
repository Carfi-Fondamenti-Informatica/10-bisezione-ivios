#include <iostream>
#include <cmath>
using namespace std;

float fn(float x) {
    float risultato = 0;
    risultato = (pow(x, 2) * cos(x)) + 1;
    return risultato;
}

int main() {
    float a = 0, b = 0, m = 0, err = 0;
    do {
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;
    } while (fn(a) * fn(b) >= 0);

    do {
        m = (a + b) / 2;

        if (fn(m) == 0) {
            cout << m << endl;
            cout << fn(m);
            break;
        } else {
            if (fn(a) * fn(m) < 0) {
                b = m;
            } else {
                a = m;
            }
            err = abs((b - a) / 2);
        }
    } while (err >= 1e-6);
    cout << int(m * 10000) / 10000.0 << endl;

    return 0;
}
