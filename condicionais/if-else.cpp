#include <iostream>
using namespace std;
int main(){
    float nota1,nota2,media;
    cout << "nota1:\n";
    cin >> nota1;
    cout << "nota2:\n";
    cin >> nota2;
    media = (nota1 + nota2)/2;
    cout << "media: " << media << endl;
    /*if(media >=6){
        
        cout << "\naprovado"<<endl;
    }
    else{
        cout << "\nreprovado"<<endl;
    } */
    // 0-2.5 D , 2.5-5 C , 5-7 B , 7-10 A

    if(media > 7){
        cout << "A";
    }
    else if(media >=5 && media <=7){
        cout << "B";
    }
    else if(media > 2.5 && media < 5){
        cout << "C";
    }
    else{
        cout << "D";
    }
    cout << "\n";



    system("pause");
    return 0;
}