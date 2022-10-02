#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int val,ant,can,imp;
	string nom;
	cout<<"Ingrese el valor de hora su empleado/a: ";
	cin>>val;
	cout<<endl<<"Ingrese el nombre de su empleado/a: ";
	cin>>nom;
	cout<<endl<<"Ingrese cuantos años en la empresa lleva  su empleado/a: ";
	cin>>ant;
	cout<<endl<<"Ingrese la cantidad de horas de su empleado/a: ";
	cin>>can;
	imp= val*can;
	if(ant>=10){
		imp= (val*can)+ (ant*30);//Se le medira el valor de sus horas en base a su antiguedad y se le multiplicara el valor por cada año trabajado.
	}
	cout<<"Nombre: "<<nom<<endl<<"antiguedad: "<<ant<<endl<<"Total a cobrar: "<<imp;
	return 0;
}

