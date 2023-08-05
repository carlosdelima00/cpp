#include <iostream>
using namespace std;
int main(){
    // cin comando de entrada = "console input"
    // cout = console out
    // "cin >> variavel"
    int idade = 0;
    string nome = "a";
    cout << idade << " e " << nome << endl;
    system("pause");
    cout << "digite seu nome\n";
    cin >> nome;
    cout << "digite sua idade\n";
    cin >> idade ;
    idade = 10;
    cout << idade << " e " << nome << endl;
    
    
    
    system("pause");
    system("exit");
    return 0;
} 