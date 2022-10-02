#include <iostream>
#define e 10
using namespace std;
struct Nodo{//Se crea el nodo por el cual se va a actuar.
	int dato;
	Nodo *sig;
}*prim, *ult;
void eliminar(int);//si bien no lo pide el ejercicio, crei necesario crear las demas funciones para un mayor entendimiento del codigo.
void insertar();
void imprimir();
int main(int argc, char *argv[]) {
	int N;
	insertar();
	insertar();
	insertar();//Se insertan 3 numeros distinto en la lista.
	imprimir();
	cout<<"Inserte un numero a eliminar"<<endl;
	cin>>N;
	eliminar(N);//Luego de pedirle al usuario el numero, se procede a buscar el numero y eliminarlo.
	imprimir();
	return 0;
}

	void insertar(){
		Nodo *nuevo = new Nodo();
		cout<<"Ingrese el nuevo dato: ";
		cin>>nuevo->dato; 
		 if(prim==NULL){
			 prim= nuevo;
			 prim->sig=NULL;
			 ult=nuevo;
		 }else{
			 ult->sig=nuevo;
			 nuevo->sig=NULL;
			 ult=nuevo;
		 }
		 cout<<"Registro guardado"<<endl;
	}
	void imprimir(){
		cout<<"Imprimiendo la lista: "<<endl;
		Nodo *actual= new Nodo();
		actual=prim;
		if(prim!=NULL){
			while(actual!=NULL){
				cout<<" "<<actual->dato;
				actual=actual->sig;
			}
		}else{
			cout<<"Lista vacia";
		}
		cout<<endl;
	}
	void eliminar(int aliminar){
		cout<<"Eliminando.. "<<aliminar<<"..."<<endl;
	
		
		
		if( prim != NULL){
			Nodo *aux_borrar;
			Nodo *anterior=NULL;
			aux_borrar=prim;
			while(aux_borrar != NULL && aux_borrar->dato!= aliminar){
				anterior=aux_borrar;
				aux_borrar=aux_borrar->sig;
			}
			if(aux_borrar==NULL){
				cout<<"El elemento no existe"<<endl;
			} else if(anterior==NULL){
				prim=prim->sig;
				delete aux_borrar;
			}else{
				anterior->sig=aux_borrar->sig;
				delete aux_borrar;
			}
		}
	}
		
	
