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



	 return 0;
}
