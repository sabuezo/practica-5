#include <iostream>
#include <stdlib.h>

using namespace std;
struct Nodo{
	int valor;
	Nodo *ptr;
	Nodo(int dato1){
		valor = dato1;
		ptr = NULL;
	}
};

void agregar(int);
void mostrar();
struct Nodo *lista=NULL;
int main(int argc, char** argv) {

	    int opcion, add;
	    while(opcion!=3){

	    cout << "MENU NODOS" << endl;
        cout << "\t1 .- Intersectar nodos" << endl;
        cout << "\t2 .- Mostrar los datos de nodos" << endl;
        cout << "\t3 .- Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        	switch(opcion)
		{
			case 1:
				  cout << "Intersectar nodos: " << endl;
				  cin>>add;
				  agregar(add);
				break;

			case 2:
				    cout << " Mostrar datos de nodos: " << endl;
				    mostrar();
				break;

			case 3:
				system("cls");
				cout << "Salir del programa.\n";
				system(" pause");
				break;

}
}

	 return 0;

}
void agregar( int add)
{
   Nodo *nuevo = new Nodo(0);
   nuevo->ptr=NULL;
   nuevo->valor=add;
   if(lista==NULL)lista=nuevo;
   else{
   	Nodo *aux=lista;
   	while(aux->ptr!=NULL){
   		aux=aux->ptr;

	   }
	   aux->ptr=nuevo;
   }

}
void mostrar()
{
   Nodo *aux;
   aux=lista;
   while(aux!=NULL){
   		cout<<aux->valor<<" ";
   		aux=aux->ptr;
	   }
	  cout<<endl;
   }
