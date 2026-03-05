#include <iostream>

using namespace std;

int main() {
    const int MOKINIAI = 3;
    const int PAZYMIAI = 3;
    string mokiniai[MOKINIAI] = {};
    int pazymiai[MOKINIAI][PAZYMIAI] = {};
    int kiek_pazymiu;

    for (int i = 0; i < MOKINIAI; i++) {
        cout << "Iveskite mokinio varda: ";
        cin >> mokiniai[i];
        cout << "Kiek pazymiu turi " << mokiniai[i] << " ?";
        cin >> kiek_pazymiu;
        if (0 <= kiek_pazymiu && kiek_pazymiu <= PAZYMIAI) {
            for (int j = 0; j < kiek_pazymiu; j++) {
                cout << "Iveskite " << j + 1 << " mokinio pazymi: " << endl;
                cin >> pazymiai[i][j];
            }
        } else {
            cout << "Netinkamas pazymiu skaicius: " << endl;
            return 0;
        }
    }
    for (int j = 0; j < MOKINIAI; j++) {
        cout << mokiniai[j] << " " << endl;
        for (int k = 0; k < PAZYMIAI; k++) {
            if (pazymiai[j][k] == 0) {
                break;
            }
            cout << pazymiai[j][k] << " ";
        }
    }


    return 0;
}
