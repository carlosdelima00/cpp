#include <iostream>
using namespace std;
void entrar(){
	int quest=0;
	cout << "responda minhas perguntas,para ganhar pontos"<<endl;
	
		
		
}
void personagem(){
	string person[] = {"messi","neymar"};
	cout << person;
	
}
void menu(){
	int menu_personagem;
	cout << "1-para entrar no jogo\n";
	cout << "2 para ver os personagens\n";
	cin >> menu_personagem;
	if(menu_personagem == 1){
		entrar();
	}
	else if(menu_personagem == 2){
		personagem();
	}
	
	
	
	
}

void Iniciar(){
	char iniciar;
	cout << "deseja iniciar?\n";
	cin >> iniciar;

	if(iniciar == 's' || iniciar == 'S'){
		menu();
	}
	
		
	else if (iniciar == 'n' || iniciar == 'N'){
		system("exit");
	}	
	
		
	
	
	
		
	
}
int main(){
	
	
	personagem();
	
	
	
	
	
	return 0;
}
