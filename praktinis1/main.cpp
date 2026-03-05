#include <iostream>
#include <iomanip>
using namespace std;
//VALIUTOS KEITIMAS
int main() {
    int pasirinkimas;
    string valiuta;
    double kiekis;
    double GBP_Bendras = 0.8729;
    double GBP_Pirkti = 0.8600;
    double GBP_Parduoti = 0.9220;
    double USD_Bendras = 1.1793;
    double USD_Pirkti = 1.1460;
    double USD_Parduoti = 1.2340;
    double INR_Bendras = 104.6918;
    double INR_Pirkti = 101.3862;
    double INR_Parduoti = 107.8546;
    while (true) {
        cout << "============================================================\n";
        cout << "      VALIUTOS KEITYKLA       \n";
        cout << "============================================================\n";
        cout << "Pasirinkite veiksma:\n";
        cout << "1 - Palyginti kursa\n";
        cout << "2 - Pirkti valiuta\n";
        cout << "3 - Parduoti valiuta\n\n";
        cout << "0 - Iseiti is programos\n";
        cout << "Iveskite pasirinkimo skaiciu: ";
        cin >> pasirinkimas;
        if (pasirinkimas == 0) {
            break;
        }
        cout << "============================================================\n";
        cout << "Pasirinkite valiuta:\n";
        cout << "Didziosios Britanijos svaras (GBP)  \n";
        cout << "Jungtiniu Amerikos Valstiju doleris (USD) \n";
        cout << "Indijos rupija (INR)\n\n";
        cout << "Iveskite pasirinkimo trumpini: ";
        cin >> valiuta;
        cout<<endl;
        cout << fixed << setprecision(2);
        if (pasirinkimas == 1) {
            if (valiuta == "GBP") {
                cout << " 1 EUR = " << GBP_Bendras << " GBP"<<endl;
            } else if (valiuta == "USD") {
                cout << " 1 EUR = " << USD_Bendras <<" USD"<<endl;
            } else if (valiuta == "INR") {
                cout << " 1 EUR = " << INR_Bendras << " INR"<<endl;
            } else {
                cout << "Netinkamas valiutos trumpinys" << endl;
            }
        }
        //Jeigu pasirenka pirkti valiuta
        else if (pasirinkimas == 2) {
            if (valiuta != "GBP" && valiuta != "USD" && valiuta != "INR") {
                cout << "Netinkamas valiutos trumpinys" << endl;
                cout << "Bandykite dar karta."<<endl;
                continue;
            }
            cout << "============================================================\n";
            cout << "Iveskite kieki (EUR) uz kuri norite pirkti: " << endl;
            cin >> kiekis;
            cout << "============================================================\n";
            if (valiuta == "GBP") {
                cout << " Uz " << kiekis << " EUR, gaunate: " << GBP_Pirkti * kiekis << " GBP" << endl;
            } else if (valiuta == "USD") {
                cout << " Uz " << kiekis << " EUR, gaunate: " << USD_Pirkti * kiekis << " USD" << endl;
            } else if (valiuta == "INR") {
                cout << " Uz " << kiekis << " EUR, gaunate: " << INR_Pirkti * kiekis << " INR" << endl;
            } else {
                cout << "Netinkamas valiutos trumpinys" << endl;
            }
        }
        //Jeigu pasirenka parduoti valiuta
        else if (pasirinkimas == 3) {
            if (valiuta != "GBP" && valiuta != "USD" && valiuta != "INR") {
                cout << "Netinkamas valiutos trumpinys" << endl;
                cout << "Bandykite dar karta."<<endl;
                continue;
            }
            cout << "============================================================\n";
            cout << "Iveskite kieki kuri norite parduoti: " << endl;
            cin >> kiekis;
            cout << "============================================================\n";
            if (valiuta == "GBP") {
                cout << " Uz " << kiekis << " GBP, gaunate: " << kiekis / GBP_Parduoti << " EUR" << endl;
            } else if (valiuta == "USD") {
                cout << " Uz " << kiekis << " USD, gaunate: " << kiekis / USD_Parduoti << " EUR" << endl;
            } else if (valiuta == "INR") {
                cout << " Uz " << kiekis << " INR, gaunate: " << kiekis / INR_Parduoti << " EUR" << endl;
            } else {
                cout << "Netinkamas valiutos trumpinys" << endl;
            }
        }
    }
    return 0;
}
