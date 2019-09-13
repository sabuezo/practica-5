#include <iostream>
#include <conio.h>
using namespace std;
struct Nodo{
	int valor;
	Nodo *ptr;
	Nodo(int dato1){
		valor = dato1;
		ptr = NULL;
	}
};
Nodo D1(13), D2(7), D3(11), D4(15), D5(2);

int main(int argc, char** argv) {
	struct Nodo *inicio;
	struct Nodo *aux;
	inicio=NULL;
	aux = new Nodo(0);

	cout<<"Valores de Nodo:"<<endl;
	aux->valor=3;
	aux->ptr=NULL;
	cout<<aux->valor<<endl;
	cout<<endl;


	inicio = aux;
	aux = new Nodo(0);
	aux->valor=5;
	aux->ptr=NULL;
	cout<<aux->valor<<endl;
	cout<<endl;


	inicio->ptr=aux;
	aux = new Nodo(0);
	aux->valor=12;
	aux->ptr=NULL;
	cout<<aux->valor<<endl;
	cout<<endl;


	inicio->ptr->ptr=aux;
	aux = new Nodo(0);
	aux->valor=35;
	aux->ptr=NULL;
	cout<<aux->valor<<endl;
	cout<<endl;


	inicio->ptr->ptr->ptr=aux;
	aux = new Nodo(0);
	aux->valor=64;
	aux->ptr=NULL;
	cout<<aux->valor<<endl;
	cout<<endl;


	inicio->ptr->ptr->ptr->ptr=aux;
	aux = new Nodo(0);
	aux->valor=89;
	aux->ptr=NULL;
	cout<<aux->valor<<endl;
	cout<<endl;

	cout<<"Otros valores:"<<endl;
	cout<<D1.valor<<endl;
	cout<<endl;
	cout<<D2.valor<<endl;
	cout<<endl;
	cout<<D3.valor<<endl;

	D1.ptr=&D2;
	D2.ptr=&D3;
	D3.ptr=&D4;
	D4.ptr=&D5;
	D5.ptr=NULL;
	cout<<endl;

	cout<<"Valor de puntero:"<<endl;
	cout<<D1.valor<<endl;
	cout<<(D1.ptr)->valor<<endl;
	cout<<(D1.ptr)->ptr->valor<<endl;
	cout<<(D1.ptr)->ptr->ptr->valor<<endl;
	cout<<(D1.ptr)->ptr->ptr->ptr->valor<<endl;

	cout<<"Vista Dinamica:"<<endl;
	cout<<inicio->valor<<endl;
	cout<<(inicio->ptr)->valor<<endl;
	cout<<(inicio->ptr)->ptr->valor<<endl;
	cout<<(inicio->ptr)->ptr->ptr->valor<<endl;
	cout<<(inicio->ptr)->ptr->ptr->ptr->valor<<endl;

	 return 0;
}
