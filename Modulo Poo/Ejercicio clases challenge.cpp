#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
class Password{
	private://atributos de la clase
		int longitud=8;
		string con;
	public://metodos
		Password(int);//constructor 1
		Password(string);//constructor 2 que a la vez ambos funcionan como Setters.
		bool esFuerte(string);
		string generarPassword();
		
		int getlongitud();
};
Password::Password(int _long){
	longitud= _long;
	
}
Password::Password(string _con){	
	con= _con;
}
Password::getlongitud(){
	return longitud;
}

bool Password::esFuerte(string con){
	int g=0,l=0,p=0;
	bool flag=false;
	for (int i=0; i<longitud;i++){
		if (con[i]>= 48 &&  con[i]<=57){
			g++;
		}
		if(con[i]>=65 && con[i]<=90){
			l++;
		}
		if(con[i]>=97 && con[i]<=122){
			p++;
		}}
			if(g>=3 && l>=2 && p>=1){
		flag=true;
	}
	return flag;
}
string Password::generarPassword(){
	char a;
	string con;
	srand(time(NULL));
	for(int i=0;i<longitud;i++){
		a=48+ rand() % (48-122);
		con +=a;
	}
	return con;

}
int main(int argc, char *argv[]) {
string av;
cout<<"Ingrese una contraseña: ";
cin>>av;
Password p1=Password(av);
if(p1.esFuerte(av)==true){
	cout<<endl<<"Su contraseña es fuerte";
}else{
	cout<<endl<<"Su contraseña es debil";
}
	
	return 0;
}




