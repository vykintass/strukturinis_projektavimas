#include <iostream>

using namespace std;

int main() {
    const int MOKINIAI = 100;
    const int PAZYMIAI = 10;
    string mokiniai[MOKINIAI] = {};
    int pazymiai[MOKINIAI][PAZYMIAI] = {};
    int kiek_pazymiu;
    int kiek_mokiniu;

    cout << "Iveskite mokiniu skaiciu (iki 100)? ";
    cin >> kiek_mokiniu;
    if (kiek_mokiniu > 0 && kiek_mokiniu <= MOKINIAI) {
        for (int i = 0; i < kiek_mokiniu; i++) {
            cout << "Iveskite mokinio varda: ";
            cin >> mokiniai[i];
            cout << "Kiek pazymiu turi " << mokiniai[i] << " ?";
            cin >> kiek_pazymiu;
            if (0 <= kiek_pazymiu && kiek_pazymiu <= PAZYMIAI) {
                for (int j = 0; j < kiek_pazymiu; j++) {
                    cout << "Iveskite " << j + 1 << " mokinio pazymi: " << endl;
                    int pazymys;
                    cin >> pazymys;
                    while (pazymys < 1 || pazymys > 10) {
                        cout << "Netinkamas pazymys, Iveskite dar karta: " << endl;
                        cin >> pazymys;
                    }
                    pazymiai[i][j] = pazymys;
                }
            } else {
                cout << "Netinkamas pazymiu skaicius: " << endl;
                return 0;
            }
        }
        for (int j = 0; j < kiek_mokiniu; j++) {
            cout << mokiniai[j] << " :";
            for (int k = 0; k < PAZYMIAI; k++) {
                if (pazymiai[j][k] == 0) {
                    break;
                }
                cout << pazymiai[j][k] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Skaicius negali buti lygus nuliui, neigiamas, daugiau negu 100. " << endl;
    }


    return 0;
}
