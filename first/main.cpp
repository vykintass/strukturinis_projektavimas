#include <iostream>
#include <string>
using namespace std;
//1
// int main() {
//     string Vardas = "Jonas";
//     string Pavarde = "Jonaitis";
//     int Amzius = 22;
//     string Grupe = "IS25SN";
//     int Kursas = 1;
//     string Studiju_programos_pavadinimas = "Programu sistemos ir sauga";
//     cout << Vardas << " " << Pavarde +" jam yra " << Amzius <<" metai, jis mokosi " << Grupe+" grupeje, "<<Kursas<<" kurse ir jo studijos vadinasi "<<Studiju_programos_pavadinimas;
//     return 0;//
// }
//2
// int main() {
//     string Komandos_pavadinimas = "Kauno Zalgiris";
//     int Ikurimo_metai = 1944;
//     string Savininkas = "Jonas Okmanas";
//     string Arena = "Zalgirio arena";
//     int Vietu_skaicius = 15500;
//
//     cout << "Krepsinio klubas " << Komandos_pavadinimas << " ikurtas "<<Ikurimo_metai<<", komandos savininkas "<<Savininkas<<", komandos arenos pavadinimas "<< Arena<<", kuri talpina "<<Vietu_skaicius<<" ziurovu"<< endl;
//     return 0;
//
// }

//3
// int main() {
//     string Marke = "Nissan";
//     string Modelis = "Juke";
//     int Pagaminimo_metai = 2010;
//     double Litrazas = 1.4;
//     string Spalva = "juodos";
//
//     cout << "Automobilis " << Marke<<" "<<Modelis << " yra pagamintas "<<Pagaminimo_metai<<" metais. Jo motoras "<<Litrazas<<" litrazo. Automobilis yra "<<Spalva<<" spalvos "<< endl;
//     return 0;
//
// }
//4
// int main() {
//
//     int a = 13;
//     int b = 5;
//     double c = 17.5;
//
//     cout << a+ b - c<< endl;
//     cout << 15/2 +c <<endl;
//     cout << a /static_cast<double>(b) +2*c <<endl;
//     cout << 14%3+6.3 + b/a << endl;
//     cout << static_cast<int>(c)%5+a-b << endl;
//     cout << 13.5/2 +4.0*3.5 +18 << endl;
//     return 0;
// }
//5
int main() {
    double a,b,c,d,e;
    double vidurkis;
    cout << " Iveskite 5 skaicius: ";
    cin >> a>>b>>c>>d>>e;
    vidurkis = (a+b+c+d+e)/5;
    cout <<"Ivestu skaiciu vidurkis: "<<vidurkis<<endl;
    return 0;
}