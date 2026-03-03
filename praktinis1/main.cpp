#include <iostream>
#include <iomanip>
using namespace std;
//VALIUTOS KEITIMAS
int main() {
    int pasirinkimas;
    string valiuta;
    double kiekis;
    double GBP_Bendras   = 0.8729;
    double GBP_Pirkti    = 0.8600;
    double GBP_Parduoti  = 0.9220;
    double USD_Bendras   = 1.1793;
    double USD_Pirkti    = 1.1460;
    double USD_Parduoti  = 1.2340;
    double INR_Bendras   = 104.6918;
    double INR_Pirkti    = 101.3862;
    double INR_Parduoti  = 107.8546;
    //double gaunama_suma=0;
    cout << "==============================\n";
    cout << "      VALIUTOS KEITYKLA       \n";
    cout << "==============================\n";
    cout << "Pasirinkite veiksma:\n";
    cout << "1 - Palyginti kursa\n";
    cout << "2 - Pirkti valiuta\n";
    cout << "3 - Parduoti valiuta\n\n";
    cout << "Iveskite pasirinkimo skaiciu: ";
    cin >> pasirinkimas;
    cout << "==============================\n";
    cout << "Pasirinkite valiuta:\n";
    cout << "Didziosios Britanijos svaras (GBP)  \n";
    cout << "Jungtiniu Amerikos Valstiju doleris (USD) \n";
    cout << "Indijos rupija (INR)\n\n";
    cout << "Iveskite pasirinkimo trumpini: ";
    cin >> valiuta;
    // cout << "==============================\n";
    // cout <<"Iveskite kieki: "<<endl;
    // cin >> kiekis;
    //Jeigu pasirenka palyginti kursus
    cout << fixed << setprecision(2);
    if (pasirinkimas == 1) {
        if (valiuta=="GBP") {
            cout <<" 1 EUR = "<<GBP_Bendras<<endl;
        }
        else if (valiuta=="USD") {
            cout <<" 1 EUR = "<<USD_Bendras<<endl;
        }
        else if (valiuta=="INR") {
            cout <<" 1 EUR = "<<INR_Bendras<<endl;
        }
        else {
            cout <<"Netinkamas valiutos trumpinys"<<endl;
        }
    }
    //Jeigu pasirenka pirkti valiuta
    else if (pasirinkimas == 2) {
        cout << "============================================================\n";
        cout <<"Iveskite kieki (eurais) uz kuri norite pirkti: "<<endl;
        cin >> kiekis;
        if (valiuta=="GBP") {
            cout <<" Uz "<<kiekis<<" euru, gaunate: "<<GBP_Pirkti*kiekis<<" svaru"<<endl;
        }
        else if (valiuta=="USD") {
            cout <<" Uz "<<kiekis<<" euru, gaunate: "<<USD_Pirkti*kiekis<<" doleriu"<<endl;
        }
        else if (valiuta=="INR") {
            cout <<" Uz "<<kiekis<<" euru, gaunate: "<<INR_Pirkti*kiekis<<" rupiju"<<endl;
        }
        else {
            cout <<"Netinkamas valiutos trumpinys"<<endl;
        }

    }
    //Jeigu pasirenka parduoti valiuta
    else if (pasirinkimas == 3) {
        cout << "============================================================\n";
        cout <<"Iveskite kieki kuri norite parduoti: "<<endl;
        cin >> kiekis;
        if (valiuta=="GBP") {
            cout <<" Uz "<<kiekis<<" svaru, gaunate: "<<kiekis/GBP_Parduoti<<" euru"<<endl;
        }
        else if (valiuta=="USD") {
            cout <<" Uz "<<kiekis<<" doleriu, gaunate: "<<kiekis/USD_Parduoti<<" euru"<<endl;
        }
        else if (valiuta=="INR") {
            cout <<" Uz "<<kiekis<<" rupiju, gaunate: "<<kiekis/INR_Parduoti<<" euru"<<endl;
        }
        else {
            cout <<"Netinkamas valiutos trumpinys"<<endl;
        }

    }
    return 0;
}
