#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i;
	bool ban=true;
	cout<<"Ingrese un numero: ";
	cin>>i;
	if (i>1 && i!=4){
		for(int j=2;j<i/2;j++){//se busca un numero primo, por lo tanto si el numero ingresado por el usuario se divide por cualquier numero que sea la mitad de el, no podria ser primo
			if(i%j==0){//de esta forma se optimiza el programa.
				ban=false;
				break;
			}
		}
	}
	else{
		ban=false;
	}
	if (ban==false){
		cout<<endl<<"Su numero no es primo ";
	}
	else
		cout<<endl<<"Su numero es primo";//cabe recalcar que el 1 no cuenta como primo.
	
	return 0;
}

