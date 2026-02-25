#include <iostream>

using namespace std;
//1
// int main() {
//     double pazymys1,pazymys2,pazymys3;
//     double vidurkis;
//     cout<<"Iveskite pirma pazymi: "<<endl;
//     cin>>pazymys1;
//     if (pazymys1 <1 || pazymys1 >10) {
//         cout <<"Ivestas netinkamo formato pazymys."<<endl;
//         return 0;
//     }
//     cout<<"Iveskite antra pazymi: "<<endl;
//     cin>>pazymys2;
//     if (pazymys2 <1 || pazymys2 >10) {
//         cout <<"Ivestas netinkamo formato pazymys."<<endl;
//         return 0;
//     }
//     cout<<"Iveskite trecia pazymi: "<<endl;
//     cin>>pazymys3;
//     if (pazymys3 <1 || pazymys3 >10) {
//         cout <<"Ivestas netinkamo formato pazymys."<<endl;
//         return 0;
//     }
//     vidurkis =(pazymys1+pazymys2+pazymys3)/3;
//     if (vidurkis>=5){
//     cout<<"Vidurkis teigiamas"<<endl;
//     }
//     return 0;
// }
//2
// int main() {
//     double pazymys1,pazymys2,pazymys3;
//     double vidurkis;
//     cout<<"Iveskite pirma pazymi: "<<endl;
//     cin>>pazymys1;
//     if (pazymys1 <1 || pazymys1 >10) {
//         cout <<"Ivestas netinkamo formato pazymys."<<endl;
//         return 0;
//     }
//     cout<<"Iveskite antra pazymi: "<<endl;
//     cin>>pazymys2;
//     if (pazymys2 <1 || pazymys2 >10) {
//         cout <<"Ivestas netinkamo formato pazymys."<<endl;
//         return 0;
//     }
//     cout<<"Iveskite trecia pazymi: "<<endl;
//     cin>>pazymys3;
//     if (pazymys3 <1 || pazymys3 >10) {
//         cout <<"Ivestas netinkamo formato pazymys."<<endl;
//         return 0;
//     }
//     vidurkis =(pazymys1+pazymys2+pazymys3)/3;
//     if (vidurkis>=5){
//     cout<<"Vidurkis teigiamas"<<endl;
//     }
//     else {
//         cout<<"Vidurkis yra neigiamas"<<endl;
//     }
//     return 0;
// }

//3
// int main() {
//     int ivertinimas;
//     cout<<"Iveskite egzamino ivertinima: "<<endl;
//     cin>>ivertinimas;
//     if (ivertinimas <1||ivertinimas >10){
//         cout <<"Pateiktas neteisingas ivertinimo formatas"<<endl;
//         return 0;
//     }
//     if (ivertinimas ==10) {
//         cout <<"puiku"<<endl;
//     }
//     else if (ivertinimas >=9) {
//         cout <<"labai gerai"<<endl;
//     }
//     else if (ivertinimas >=7) {
//         cout <<"gerai"<<endl;
//     }
//     else if (ivertinimas >=5) {
//         cout <<"patenkinamai"<<endl;
//     }
//     else {
//         cout <<"egzaminas neislaikytas"<<endl;
//     }
//     return 0;
// }
//4
int main() {
    int ivertinimas;
    cout << "Iveskite egzamino ivertinima: " << endl;
    cin >> ivertinimas;
    if (ivertinimas < 1 || ivertinimas > 10) {
        cout << "Pateiktas neteisingas ivertinimo formatas" << endl;
        return 0;
    }
    switch (ivertinimas) {
        case 10:
            cout << "puiku" << endl;
            break;
        case 9:
            cout << "labai gerai" << endl;
            break;
        case 8:
        case 7:
            cout << "gerai" << endl;
            break;
        case 6:
        case 5:
            cout << "patenkinamai" << endl;
            break;
        default:
            cout << "egzaminas neislaikytas" << endl;
    }
    return 0;
}
