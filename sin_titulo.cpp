#include <iostream>

using namespace std;

/*
//1.
void inter(int *a,int *b){
	int aux=*a;
	
	*a=*b;
	*b=aux;
	
}


int main(int argc, char *argv[]) {
	int num1=10,num2=20;
	cout<<"numero 1 : "<<num1<<endl;
	cout<<"numero 2 : "<<num2<<endl;
	
	inter(&num1,&num2);
	
	cout<<"nuevo numero 1 : "<<num1<<endl;
	cout<<"nuevo numero 2 : "<<num2<<endl;
	
	
	return 0;
}
*/

/*
//2.
void crear(float *&p, int tm){
	p=new float[tm];
}

void ingresar(float*p,int tm){
	int num;
	cout<<"se ingresaron "<<tm<<" numeros aleatorios del 0 al 10 "<<endl;
	for(int i=0;i<tm;i++){
		num=rand()%10;
		*(p+i)=num;
	}
}
	
void producto(float*p1, int ta,float*p2,int tb){
	float aux1,aux2,aux3;
	float resultado=0;
	
	if(ta>tb)
		aux1=ta;
	else
		aux1=tb;
	
	for(int i=0;i<aux1;i++){
		resultado=resultado+(*(p1+i))*(*(p2+i));
		
	}
	cout<<"producto punto de 2 vectores es : "<<resultado<<endl;
	
}

void borrar(float *p, int tm){
	
	delete p;
}

void imprimir(float*p,int tm){
	for(int i=0;i<tm;i++)
		//cout<<v[i];
		cout<<*(p+i)<<" ";
	cout<<endl;
	
}


int main(){
	int ta,tb;
	float*p1,*p2;
	
	cout<<"tamano del vector 1 : ";
	cin>>ta;
    crear(p1,ta);
	ingresar(p1,ta);
	imprimir(p1,ta);
	
	cout<<endl;
	
	cout<<"tamano del vector 2 : ";
	cin>>tb;
	crear(p2,tb);
	ingresar(p2,tb);
	imprimir(p2,tb);
	cout<<endl;
	producto(p1,ta,p2,tb);
	
	for(int i=0;i<1000000;i++){
		crear(p1,ta);
		ingresar(p1,ta);
		imprimir(p1,ta);
		crear(p2,tb);
		ingresar(p2,tb);
		imprimir(p2,tb);
		producto(p1,ta,p2,tb);
		cout<<endl;
		
	}
	
	borrar(p1,ta);
	borrar(p2,tb);
	
	
	return 0;
	
}
*/


#include <iostream>
using namespace std;

void suma(int a,int b)
{
	cout<<"Introdujo suma: "<<a<<"+"<<b<<"= "<<a+b;
}
void resta(int a,int b)
{
	cout<<"Introdujo resta: "<<a<<"-"<<b<<"= "<<a-b;
}
void multiplicaion(int a,int b)
{
	cout<<"Introdujo multiplicaion: "<<a<<"*"<<b<<"= "<<a*b;
}
void division(int a,int b)
{
	cout<<"Introdujo division: "<<a<<"/"<<b<<"= "<<a/b;
}

int main()
{
	int a,b;
	void (*p[4])(int,int)={suma,resta,multiplicaion,division};
	cout<<"INGRESE 2 NUMEROS"<<endl;
	cin>>a;
	cin>>b;
	
	int opc;
	cout<<"opcion 0 : suma "<<endl;
	cout<<"opcion 1 : resta "<<endl;
	cout<<"opcion 2 : multiplicaion "<<endl;
	cout<<"opcion 3 : division "<<endl;
	cout<<"\nIntroduzca una opcion entre 0 y 3: ";
	cin>>opc;
	while(opc>=0 && opc<=3)
	{
		(*p[opc])(a,b);
		cout<<"\nIntroduzca una opcion entre 0 y 3: ";
		cin>>opc;
	}
	return 0;
}

