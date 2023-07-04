#include <iostream>
using namespace std;

int main() {
    int numerogeneraciones;
    double superficieInicial;
    int numHerederosPorGeneracion[50];

    cout <<"-------------------------------- \n";
    cout << "Ingrese la superficie inicial:| \n";
    cout <<"--------------------------------\n";
    cin >> superficieInicial;
    system("cls");

    cout <<"------------------------------------\n";
    cout << "Ingrese el numero de generaciones:|\n";
    cout <<"------------------------------------\n";
    cin >>  numerogeneraciones;
     system("cls");

    for (int i = 0; i < numerogeneraciones; i++) {
        cout << "Ingrese el numero de herederos para la generacion " << i + 1 << ": ";

        cin >> numHerederosPorGeneracion[i];
    }
       system("cls");


    double areaTotal = superficieInicial;
    for (int i = 0; i <  numerogeneraciones; i++) {
        int numHerederos = numHerederosPorGeneracion[i];
        double areaHeredero = areaTotal / numHerederos;
        areaTotal = areaHeredero;
    }

    cout <<"-------------------------------------------------------------------------------------\n";
    cout << "El area del terreno que le corresponde al heredero despues de " <<  numerogeneraciones << " generaciones es:|" << areaTotal <<"|"<< endl;
    cout <<"-------------------------------------------------------------------------------------\n";
    return 0;
}

