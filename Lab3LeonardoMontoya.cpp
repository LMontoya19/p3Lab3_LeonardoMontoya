#include <iostream>
#include <string>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
  char resp = 's';
  while(resp=='s'){
    cout<<"***MENU***"<<endl;
    cout<<"1)Ejercicio 1"<<endl;
    cout<<"2)Ejercicio 2"<<endl;
    cout<<"3)Ejercicio 3"<<endl;
    cout<<"4)Salir"<<endl;
    cout<<"Ingrese su opcion"<<endl;
    int opcion;
    cin>>opcion;
    switch(opcion){
      case 1 : 
	      {
	        int* arreglo = new int[3];
	       int termino1,termino2,termino3;
	       cout<<"Ingrese el primer numero"<<endl;
	       cin>>arreglo[0];
	       cout<<"Ingrese el segundo numero"<<endl;
	       cin>>arreglo[1];
	       cout<<"Ingrese el tercer numero"<<endl;
	       cin>>arreglo[2];
	       double factor1,factor2;
	       if(((arreglo[1]*arreglo[1])-4*arreglo[0]*arreglo[2])>=0){
	       factor1 = (-arreglo[1]-sqrt((arreglo[1]*arreglo[1])-4*arreglo[0]*arreglo[2]))/2*arreglo[0];
	       factor2 = (-arreglo[1]+sqrt((arreglo[1]*arreglo[1])-4*arreglo[0]*arreglo[2]))/2*arreglo[0];

                cout<<arreglo[0]<<"x^2+"<<arreglo[1]<<"x+"<<arreglo[2]<<"= ";
		if(factor1<0){
		cout<<"(x+"<<factor1*-1<<")";
		}else{
		   cout<<"(x"<<factor1<<")";}
		if(factor1<0){
                cout<<"(x"<<factor2<<")";
                }else{
                   cout<<"(x+"<<factor2<<")";}
	       }
	       cout<<endl;
    break;
    }
      case 2 : {
	       int angulo;
	       long double radianes,PI,contador;
	       contador = 0;
	       cout<<"Ingrese el angulo"<<endl;
	       cin>>angulo;
	       PI = M_PI;
	       radianes = angulo*(PI/180);
	       for(int i = 0;i<50;i++){
		  double denominador;
		   denominador = (2*i)+1;
		   long double factorial;
		   factorial = 1;
	          for(int j=1;j<=denominador;j++){
		    factorial*= j;
		  }
		  contador+= (pow(-1,i)*pow(radianes,denominador))/factorial;
		   
	       }
               cout<<"sin x = "<<contador<<endl;
	       contador = 0;
	        for(int i = 0;i<50;i++)
		{
     	           long denominador2;		
                   denominador2 = 2*i;
		   long double factorial2;
                   factorial2 = 1;
                  for(int j=1;j<=denominador2;j++){
                    factorial2*= j;
                  }
                  contador+= (pow(-1,i)*pow(radianes,denominador2))/factorial2;
			
               }
		cout<<"cos x = "<<contador<<endl;
		break;
	       }
		
	   case 3: {
		  cout<<"Ingrese cantidad de repeticiones.";
		  int repeticiones;
		  cin>>repeticiones;
		  for(int i=1;i<repeticiones;i++){} 
		   break;
		   }
    
    }//Fin switch
  }//Fin while
return 0;
}
