#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string c,i;
	int g=0,k;
	cout<<"Por favor establezca una contrase�a: ";//se pide la contrase�a
	cin>>c;
	cout<<endl;
	for(int j=0;j<3;j++){
		cout<<"ingrese su contrase�a nuevamente: ";
		cin>>i;
			if(i==c){
		cout<<endl<<"�Felicitaciones, recordas tu contrase�a! \nPresione una tecla para salir: ";//se la compara 
		cin>>k;
		break;
			}
			else{
				g++;
				if(g==3){
					cout<<"�Tenes que ejercitar la memoria! \nPresione una tecla para salir: ";//se la compara y dado el caso de que falle 3 veces, le dara error.
					cin>>k;
					break;
				}
			}
	}
	
	return 0;
}

