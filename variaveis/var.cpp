#include <iostream>
using namespace std;
int main(){
    int inteiro = 3;//inteiro
    char caractere = 'C'; //armazena um unico caracter
    bool logico = true; // verdade ou falso-1byte
    double decimais_com_ate_15_casas;
    float ate_8_casas = 3.8e30;
    decimais_com_ate_15_casas = 3.3e300;
    string palavra = "carlos";
    cout << "string = " << palavra<<endl;
    cout << "inteiro = " << inteiro <<endl;
    cout << "caracter =" <<caractere <<endl;
    cout << "logico =" << logico <<endl;
    cout <<"float ="<< ate_8_casas <<endl;
    cout <<"double =" << decimais_com_ate_15_casas<<endl;



    system("pause");
    return 0;
}