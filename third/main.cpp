#include <iostream>
using namespace std;
//1
// int main() {
//     int masyvas[5];
//     int n = 5;
//     int suma = 0;
//
//     cout << "Iveskite masyvo elementus, tinka tik sveikieji skaiciai: \n";
//
//     for (int i = 0; i < n; i++) {
//         cout << "Iveskite " << i + 1 << " -aji masyvo elementa: ";
//         cin >> masyvas[i];
//         suma += masyvas[i];
//     }
//     cout << "Masyvo elementu suma lygi: " << suma << "\n";
//     int maziausias = masyvas[0];
//     int didziausias = masyvas[0];
//     for (int i = 0; i < n; i++) {
//         if (masyvas[i] < maziausias)
//             maziausias = masyvas[i];
//
//         if (masyvas[i] > didziausias)
//             didziausias = masyvas[i];
//     }
//     cout << "Didziausias masyvo skaicius: " << didziausias << "\n";
//     cout << "Maziausias masyvo skaicius: " << maziausias << "\n";
//     return 0;
// }

//2
int main() {
    int n = 40;
    int ivertinimas;
    int kiekiai[11] = {0};

    for (int i = 0; i < n; i++) {
        cout << "Iveskite ivertinima nuo 1-10: ";
        cin >> ivertinimas;
        kiekiai[ivertinimas]++;
    }
    for (int i = 1; i <= 10; i++)
        cout << i << " pasikartojo " << kiekiai[i] << " kartus\n";

    return 0;
}
