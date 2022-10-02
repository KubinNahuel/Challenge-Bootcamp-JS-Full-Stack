#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	int A;
	double valor;
	srand(time(NULL));//Se establece el tiempo de reseteado del numero y luego se le agrega un rango que va desde 0 hasta 1000.
	valor=rand()%1001;
	cout<<"Se ha generado un numero aleatorio, es su turno de adivinar cual es: ";
	do{
		cin>>A;
		if(A==valor){
			cout<<endl<<"Felicidades, a acertado el numero";
		}
		else
		   if(A<valor){
			cout<<endl<<"El numero buscado es mayor a "<<A<<"\n";
		}
		   else
			  if(A>valor){
			   cout<<endl<<"El numero buscado es menor a "<<A<<"\n";
		   }
		}while(A!=valor);
	
	return 0;
}

