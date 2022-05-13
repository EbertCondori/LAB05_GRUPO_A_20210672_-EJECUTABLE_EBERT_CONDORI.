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


/*
//3.
void crear(float *&p, int tm){
	p=new float[tm];
}
	
void ingresar(float*p,int tm){
	int num;
	int num2=0;
	cout<<"se ingresaron "<<tm-1<<" numeros aleatorios del 0 al 10000 "<<endl;
	for(int i=0;i<tm;i++){
		num=rand()%100;
		while(num2>num){
		num=rand()%100000;
		}
		*(p+i)=num;
		num2=num;
		}
	}
		
void eliminar(float*p,int tm,int eli){
	int aux;
	for(int i=0;i<tm;i++){
		if(eli==*(p+i)){
			*(p+i)=NULL;
			
		}
	}
	    cout<<endl;
	
}
			
	
void ingresar2(float* p,int tm,int x){
	int aux;
	for(int i=0;i<tm+1;i++){
		if(i==10){
			*(p+i)=x;
		}
	}
}
	
void ordenar(float* p, int tm){
		
	int aux;
	for(int i=0;i<=tm+1;i++){
		for(int j=i+1;j<tm+1;j++){
			if(*(p+i)>*(p+j))
			{
				aux=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=aux; 
			}
			
		}
		
	}
	cout<<endl;
}
	

		

				
void imprimir(float*p,int tm){
	for(int i=0;i<tm;i++)
	//cout<<v[i];
	cout<<*(p+i)<<" ";
	cout<<endl;
	
}

	
void imprimir2(float*p,int tm){
	for(int i=0;i<tm+1;i++){
		if(*(p+i)!=0)
			cout<<*(p+i)<<" ";
	}
	cout<<endl;
		
}
	
	
void borrar(float *p, int tm){
	delete p;
}
int main(){
	int ta,tb,x,y;
	float*p1,*p2;
	crear(p1,11);
	ingresar(p1,11);
	imprimir(p1,10);
	cout<<"ingresar valor a ingresar al puntero : "<<endl;
	cin>>y;
	ingresar2(p1,10,y);
	imprimir(p1,11);
	ordenar(p1,10);
	imprimir(p1,11);
	cout<<endl;
	cout<<"ingresar valor a eliminar del puntero : "<<endl;
	cin>>x;
	eliminar(p1,10,x);
	imprimir2(p1,10);
	
	
	
	borrar(p1,(ta+1));
	return 0;

}

*/


/*
//5.
void unir(char *p1, char *p2)
{
while(*p1){
	p1++;      
}
while(*p2){
	*p1=*p2;   
	p2++;      
	p1++;      
}
	
	
	
}

int main (){
	char p1[10],p2[10];
	cout << "ingrese 1 cadena de caracteres : ";
	cin.getline(p2,10);
	cout << "ingrese 2 cadena de caracteres : ";
	cin.getline(p1,10);
	
	unir(p1,p2);
	
	cout <<p1<< endl;
	return 0;
}
*/


/*
//6.
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

*/
