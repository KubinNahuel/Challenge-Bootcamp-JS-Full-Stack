#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c,d=0,e=0;
	cout<<"Ingrese cualquier numero, en caso de ser -1 el programa terminara"<<endl;
	cin>>a;
	b=a;
	c=a;
	if(a!=-1){
	do{//El programa solo terminara cuando la persona escriba -1. 
		if(a>b){
			b=a;
		}
		else
		   if(a<c){
			c=a;
		}
		d=d+a;
		e++;
		cin>>a;
	}while(a!=-1);
	}
	cout<<endl<<"El mayor numero ingresado es: "<<b<<"\nEl menor numero ingresado es: "<<c<<"\nLa suma de todos los numeros sin contar al -1 es: "<<d<<"\nLa cantidad de numeros ingresados fueron :"<<e;
	return 0;
}//Si bien el -1 no es tenido en cuenta para la suma o el conteo de los numeros, a la hora de ingresar el -1 como primer numero, tanto el mayor como el menor si tomaran ese valor en cuenta.

