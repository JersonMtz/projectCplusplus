
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<time.h>
#include<unistd.h>
using namespace std;


void menuprincipal(){
	cout<<""<<endl;
	cout<< "\t\t***************************************\n";
 	cout<< "\t\t*               [MENU]                *\n";
	cout<< "\t\t***************************************\n";
 	cout<< "\t\t* 1-Crear Conjunto Manualmente        *\n";
 	cout<< "\t\t* 2-Crear Conjunto Aleatorio          *\n";
 	cout<< "\t\t* 3-Ordenar Conjunto Ascendente       *\n";
 	cout<< "\t\t* 4-Ordenar Conjunto Descendente      *\n";
 	cout<< "\t\t* 5-Buscar en Conjunto                *\n";
 	cout<< "\t\t* 6-Mostrar Conjunto                  *\n";
 	cout<< "\t\t* 7-Mostrar Union de Conjuntos        *\n";
 	cout<< "\t\t* 8-Mostrar Interseccion de Conjunto  *\n";
 	cout<< "\t\t* 9-Mostrar Diferencia de Conjuntos   *\n";
 	cout<< "\t\t* 0-Salir                             *\n";
 	cout<< "\t\t***************************************\n";
 	
 	cout<< "\t\t***************************************\n";
 	cout<< "\t\t*       Selecione Una Opcion          *\n";
 	cout<< "\t\t***************************************\n";
}

void menuseleccionarvector(){
	cout<< "\t\t****************************************\n";
 	cout<< "\t\t*       [LISTA DE CONJUNTOS]           *\n";
 	cout<< "\t\t****************************************\n";
	cout<< "\t\t*            V- Conjunto -V            *\n";
	cout<< "\t\t*            I- Conjunto -I            *\n";
	cout<< "\t\t*            C- Conjunto -C            *\n";
	cout<< "\t\t*            T- Conjunto -T            *\n";
	cout<< "\t\t*            O- Conjunto -O            *\n";
	cout<< "\t\t*            R- Conjunto -R            *\n";
	cout<< "\t\t*            Y- Conjunto -Y            *\n";
	cout<< "\t\t*            A- Conjunto -A            *\n";
	cout<< "\t\t****************************************\n";
 	cout<< "\t\t*    Selecione Conjunto o Conjuntos    *\n";
 	cout<< "\t\t****************************************\n";
}

int llenamanual(int arreglo[]){
//	cout<< "\t\t* 1-Crear Conjunto Manualmente        *\n";
	cout<<"ingrese 15 numeros "<<endl;
		for(int d=0; d<=14; d++){
		cin>>arreglo[d];
			for(int j=0; j<d; j++){
				if(arreglo[d]==arreglo[j]){
					cout<<"el numero ya esta, ingrese otro numero "<<endl;
					d=d-1;
				}
			}
		}
			return arreglo[15];		
	}

int llenaautomatico(int arreglo[]){
//	cout<< "\t\t* 2-Crear Conjunto Aleatorio          *\n";
	srand(time(0));
		for(int d=0; d<=14; d++){
		arreglo[d]=rand()%98+1;
			for(int j=0; j<d; j++){
				if(arreglo[d]==arreglo[j]){
					d=d-1;
				}
			}
		}	
			return arreglo[15];			
	}
	
int ordenaras(int arreglo[]){
//	cout<< "\t\t* 3-Ordenar Conjunto Ascendente       *\n";
    int i,j, bandera, aux;
    for (int i=0; i<=14; i++){
		bandera = 0;
		for (int j=0; j<14; j++){
			if ( arreglo[j]>arreglo[j+1]){
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
				bandera = 1;
			}
			}if(bandera == 0)
				break;
		}
		 	
}
	
int ordenardes(int arreglo[]){
//	cout<< "\t\t* 4-Ordenar Conjunto Descendente      *\n";
    int i,j, bandera, aux;
    for(i=0; i<=14; i++)
    {bandera=0;  
     for(j=0; j<=14; j++)
         {if(arreglo[j]<arreglo[j+1])
         {aux = arreglo[j];
          arreglo[j]=arreglo[j+1];
          arreglo[j+1]=aux;
          bandera=1; 
         }
         }
         if (bandera==0)
        break; 
         }	
	}	

void mostrararreglo(int arreglo[]){
//	cout<< "\t\t* 6-Mostrar Conjunto                  *\n";
	
	cout<<"{ ";
	for(int i=0; i<=14; i++){			//se muestra los numeros del vector
			if(i>=1){cout<<",";}
			cout<<arreglo[i];}
			cout<<" }"<<endl;
		getch();
}
	
void buscarnumero(int ve[]){
//	cout<< "\t\t* 5-Buscar en Conjunto                *\n";
		int n, c=0;
		int bandera=0;

			cout<<"{ ";
	for(int i=0; i<=14; i++){			//se muestra los numeros del vector
			if(i>=1){cout<<",";}
			cout<<ve[i];}
			cout<<" }"<<endl;
		
		cout<<"ingrese numero"<<endl;
		cin>> n;
		for (int i=0; i<=14;i++){
			if(ve[i]==n){
			bandera=1;  
			cout<<n<< " esta en la posicion: "<< i<< endl;
		}
		}if(bandera==0){cout<<n<<" no se encuentra en el conjunto "<<endl;
		}
		getch();
}


void diferencia(int a[],int b[]){
//	cout<< "\t\t* 9-Mostrar Diferencia de Conjuntos   *\n";
	int c;
	int r=0;
		cout<<"{ ";
	for(int i=0; i<=14; i++){			//se muestra los numeros del primer vector
			if(i>=1){cout<<",";}
			cout<<a[i];}
			cout<<"}"<<endl;
			cout<<"{ ";
		for(int k=0;k<=14;k++){			//se muestra los numeros del segundo vector
			if(k>=1){cout<<",";}
			cout<<b[k];}
			cout<<"}"<<endl;
			cout<<" "<<endl;
	
	cout<<" {";
	for(int i=0; i<=14; i++){
		c=0;
		for(int j=0; j<=14; j++){
			if(a[i] != b[j]){
				c+=1;
			}
		}
		if(c==15){
			r+=1;
			if(r>1){
			cout<<",";
			}
			cout<<a[i];
		}
	}
	cout<<" }"<<endl;
	cout<<" "<<endl;
	getch();
}

void interseccion(int a[],int b[]){ 
//	cout<< "\t\t* 8-Mostrar Interseccion de Conjunto  *\n";
	int c=0;
	cout<<"{ ";
	for(int i=0; i<=14; i++){			//se muestra los numeros del primer vector
			if(i>=1){cout<<",";}
			cout<<a[i];}
			cout<<" }"<<endl;
			cout<<"{ ";
		for(int k=0;k<=14;k++){			//se muestra los numeros del segundo vector
			if(k>=1){cout<<",";}
			cout<<b[k];}
			cout<<" }"<<endl;
			cout<<" "<<endl;
		
	cout<<"{ ";
	for (int j=0; j<=14; j++){
		for (int i=0; i<=14; i++){
		if( a[j]== b[i]){
			c=c+1;
			
			if(c>1){
			cout<<",";	}
			cout<<a[j];}
		}
    }
	cout<<" }"<<endl;
	cout<<" "<<endl;
	getch();		
	}
	
//	se utiliza un vector auxiliar con un tama�o de 30, y se insertan los numeros del primer vector
// y del segundo, despues se va a comparar cada numero de ese vector auxiliar con los demas numeros de ese mismo
// se une el contenido de dos vectores, sin repetir numeros.
void uniondevectores(int a[],int b[]){
//	cout<< "\t\t* 7-Mostrar Union de Conjuntos        *\n";
	int temp=0;
	cout<<"{ ";
	for(int i=0; i<=14; i++){			//se muestra los numeros del primer vector
			if(i>=1){cout<<",";}
			cout<<a[i];}
			cout<<" }"<<endl;
			cout<<"{ ";
		for(int k=0;k<=14;k++){			//se muestra los numeros del segundo vector
			if(k>=1){cout<<",";}
			cout<<b[k];}
			cout<<" }"<<endl;
			cout<<" "<<endl;
	
	int c;
	int auxiliar[30];
	for(int s=0; s<=14; s++){			//se asignan los valores de ambos vectores a vector auxiliar
		auxiliar[s]=a[s];
		auxiliar[s+15]=b[s];
	}
	cout<<"{ ";
	for(int i=0; i<=29; i++){			//se comparan cada campo con todo el vector para ver si se repite el numero
		c=0;
		for(int j=0; j<=29; j++){
			if(auxiliar[i] != auxiliar[j]){
				c+=1;
			}
		}
		if(c==29){						//muestra los numeros combinados sin repetir
			if(temp>=1){cout<<",";}
			cout<<auxiliar[i];
			temp+=1;
		}
	}
		for (int j=0; j<=14; j++){		//busca las uniones entre los vectores
		for (int i=0; i<=14; i++){
		if( a[j]== b[i] ){
			
			cout<<",";
			cout<<a[j];
			}	
		}
    }
	cout<<" }"<<endl;
	cout<<" "<<endl;
	getch();	
}


void ver01(int v[],char letra){
	int c=0;
	cout<<letra<<"="<<"{ ";
	for(int i=0; i<=14; i++){
		c+=1;
		if (c>1){
			cout<<",";}
		cout<<v[i];}
		cout<<" }"<<endl;
}


	
void ver(int v[],int i[],int c[],int t[],int o[],int r[],int y[],int a[]){	

   ver01(v,'V');
   ver01(i,'I');
   ver01(c,'C');
   ver01(t,'T');
   ver01(o,'O');
   ver01(r,'R');
   ver01(y,'Y');
   ver01(a,'A');
}

void procesoprincipal(char opc,int v[],int i[],int c[],int t[],int o[],int r[],int y[],int a[],int ta ){
	char ve;
	system("color f0");		
	do{
		system("cls");
	menuprincipal();
		opc= getch();
	char menuseleccionarvector();
		system("cls");
		switch(opc){	
			case '1':ver(v,i,c,t,o,r,y,a); cout<<""<<endl;
				cout<< "\t\t* 1-Crear Conjunto Manualmente        *\n";
			 menuseleccionarvector();
					ve= getch(); cout<<ve<<endl;
					switch(ve){
						case 'V':; case 'v':  v[ta]= llenamanual(v);      break;
						case 'I':; case 'i':  i[ta]= llenamanual(i);     break;
						case 'C':; case 'c':  c[ta]= llenamanual(c);     break;
						case 'T':; case 't':  t[ta]= llenamanual(t);     break;
						case 'O':; case 'o':  o[ta]= llenamanual(o);     break;
						case 'R':; case 'r':  r[ta]= llenamanual(r);     break;
						case 'Y':; case 'y':  y[ta]= llenamanual(y);     break;
						case 'A':; case 'a':  a[ta]= llenamanual(a);     break;}
				break;
			case '2': ver(v,i,c,t,o,r,y,a); cout<<""<<endl;
				cout<< "\t\t* 2-Crear Conjunto Aleatorio          *\n";
			menuseleccionarvector();
			        ve= getch(); cout<<ve<<endl;
			    	switch(ve){
						case 'V': ; case 'v': v[ta]= llenaautomatico(v);     break;
						case 'I': ; case 'i': i[ta]= llenaautomatico(i);     break;
						case 'C': ; case 'c': c[ta]= llenaautomatico(c);     break;
						case 'T': ; case 't': t[ta]= llenaautomatico(t);     break;
						case 'O': ; case 'o': o[ta]= llenaautomatico(o);     break;
						case 'R': ; case 'r': r[ta]= llenaautomatico(r);     break;
						case 'Y': ; case 'y': y[ta]= llenaautomatico(y);     break;
						case 'A': ; case 'a': a[ta]= llenaautomatico(a);     break;}
				break;
				case '3': ver(v,i,c,t,o,r,y,a); cout<<""<<endl;
					cout<< "\t\t* 3-Ordenar Conjunto Ascendente       *\n";
				 menuseleccionarvector();
				ve= getch(); cout<<ve<<endl;
				switch(ve){
				     	case 'V': ; case 'v': v[ta]=ordenaras(v);   break;
						case 'I': ; case 'i': i[ta]=ordenaras(i);     break;
						case 'C': ; case 'c': c[ta]=ordenaras(c);     break;
						case 'T': ; case 't': t[ta]=ordenaras(t);     break;
						case 'O': ; case 'o': o[ta]=ordenaras(o);     break;
						case 'R': ; case 'r': r[ta]=ordenaras(r);     break;
						case 'Y': ; case 'y': y[ta]=ordenaras(y);     break;
						case 'A': ; case 'a': a[ta]=ordenaras(a);     break;}
				break;
				case '4': ver(v,i,c,t,o,r,y,a); cout<<""<<endl;
					cout<< "\t\t* 4-Ordenar Conjunto Descendente      *\n";
				menuseleccionarvector();
				ve= getch(); cout<<ve<<endl;
				switch(ve){
				     	case 'V': ; case 'v': v[ta]=ordenardes(v);   break;
						case 'I': ; case 'i': i[ta]=ordenardes(i);     break;
						case 'C': ; case 'c': c[ta]=ordenardes(c);     break;
						case 'T': ; case 't': t[ta]=ordenardes(t);     break;
						case 'O': ; case 'o': o[ta]=ordenardes(o);     break;
						case 'R': ; case 'r': r[ta]=ordenardes(r);     break;
						case 'Y': ; case 'y': y[ta]=ordenardes(y);     break;
						case 'A': ; case 'a': a[ta]=ordenardes(a);     break;}
				break;
			 case '5': ver(v,i,c,t,o,r,y,a); cout<<""<<endl;
			 cout<< "\t\t* 5-Buscar en Conjunto                *\n";
	         	menuseleccionarvector();
	         	ve= getch(); cout<<ve<<endl;
	         	switch(ve){
	         		case 'V': ; case 'v': buscarnumero(v);   break;
					case 'I': ; case 'i': buscarnumero(i);     break;
					case 'C': ; case 'c': buscarnumero(c);     break;
					case 'T': ; case 't':buscarnumero(t);     break;
					case 'O': ; case 'o': buscarnumero(o);     break;
					case 'R': ; case 'r': buscarnumero(r);     break;
					case 'Y': ; case 'y':buscarnumero(y);     break;
					case 'A': ; case 'a':buscarnumero(a);     break;}
				break;
			case '6': ver(v,i,c,t,o,r,y,a);	cout<<""<<endl;
			cout<< "\t\t* 6-Mostrar Conjunto                  *\n";
					menuseleccionarvector();
					ve= getch(); cout<<ve<<endl;
					switch(ve){
						case 'V': ; case 'v': mostrararreglo(v);   break;
						case 'I': ; case 'i': mostrararreglo(i);     break;
						case 'C': ; case 'c': mostrararreglo(c);     break;
						case 'T': ; case 't':mostrararreglo(t);     break;
						case 'O': ; case 'o': mostrararreglo(o);     break;
						case 'R': ; case 'r': mostrararreglo(r);     break;
						case 'Y': ; case 'y':mostrararreglo(y);     break;
						case 'A': ; case 'a':mostrararreglo(a);     break;}
				break;
	        case '8': ver(v,i,c,t,o,r,y,a); cout<<""<<endl;
	        cout<< "\t\t* 8-Mostrar Interseccion de Conjunto  *\n";
	        	menuseleccionarvector();
					char v1,v2;
			v1= getch(); cout<<v1<<endl;
			v2=getch();  cout<<v2<<endl;
			if((v1=='V'||v1=='v' )&& (v2=='I' || v2=='i') || (v1=='I' ||v1=='i')&& (v2=='V'|| v2=='v')){ interseccion(v,i);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='C'|| v2=='c') || (v1=='C' ||v1== 'c')&& (v2=='V'||v2=='v')){ interseccion(v,c);
			 }
			if ((v1=='V'||v1=='v' ) && (v2=='T'|| v2=='t') || (v1=='T' ||v1== 't')&& (v2=='V'||v2=='v')){interseccion(v,t);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='O'|| v2=='o') || (v1=='O' ||v1== 'o')&& (v2=='V'||v2=='v')){ interseccion(v,o);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='V'||v2=='v')){ interseccion(v,r);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='V'||v2=='v')){ interseccion(v,y);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='V'||v2=='v')){ interseccion(v,a);
			 }
			 if((v1=='I'||v1=='i' ) && (v2=='C'|| v2=='c') || (v1=='C' ||v1== 'c')&& (v2=='I'||v2=='i')){ interseccion(i,c);
			 }
			if((v1=='I'||v1=='i' ) && (v2=='T'|| v2=='t') || (v1=='T' ||v1== 't')&& (v2=='I'||v2=='i')){interseccion(i,t);
			}
			if((v1=='I'||v1=='i' ) && (v2=='O'|| v2=='o') || (v1=='O' ||v1== 'o')&& (v2=='I'||v2=='i')){ interseccion(i,o);
			 }
			if((v1=='I'||v1=='i' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='I'||v2=='i')){ interseccion(i,r);
			 }
			if((v1=='I'||v1=='i' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='I'||v2=='i')){ interseccion(i,y);
			 }
			if((v1=='I'||v1=='i' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='I'||v2=='i')){ interseccion(i,a);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='T'|| v2=='t') || (v1=='T' ||v1== 't')&& (v2=='C'||v2=='c')){ interseccion(c,t);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='O'|| v2=='o') || (v1=='O' ||v1== 'o')&& (v2=='C'||v2=='c')){ interseccion(c,o);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='C'||v2=='c')){ interseccion(c,r);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='C'||v2=='c')){ interseccion(c,y);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='C'||v2=='c')){ interseccion(c,a);
			}
			
			if((v1=='T'||v1=='t' ) && (v2=='O'|| v2=='o') || (v1=='O' ||v1== 'o')&& (v2=='T'||v2=='t')){ interseccion(t,o);
			 }
			if((v1=='T'||v1=='t' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='T'||v2=='t')){ interseccion(t,r);
			 }
			if((v1=='T'||v1=='t' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='T'||v2=='t')){ interseccion(t,y);
			 }
			if((v1=='T'||v1=='t' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='T'||v2=='t')){ interseccion(t,a);
			
			 }
			if((v1=='O'||v1=='o' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='O'||v2=='o')){ interseccion(o,r);
			 }
			if((v1=='O'||v1=='o' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='O'||v2=='o')){ interseccion(o,y);
			 }
			if((v1=='O'||v1=='o' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='O'||v2=='o')){ interseccion(o,a);
			
			 }
			if((v1=='R'||v1=='r' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='R'||v2=='r')){ interseccion(r,y);
			 }
			if((v1=='R'||v1=='r' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='R'||v2=='r')){ interseccion(r,a);
			
			 }
			if((v1=='Y'||v1=='y' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='Y'||v2=='y')){ interseccion(y,a);
			 }
			 break;
			 case '7': ver(v,i,c,t,o,r,y,a); cout<<""<<endl;
			 cout<< "\t\t* 7-Mostrar Union de Conjuntos        *\n";
			      menuseleccionarvector();
			      v1=getch(); cout<<v1<<endl;
			      v2=getch(); cout<<v2<<endl;
			if((v1=='V'||v1=='v' )&& (v2=='I' || v2=='i') || (v1=='I' ||v1=='i')&& (v2=='V'|| v2=='v')){uniondevectores(v,i);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='C'|| v2=='c') || (v1=='C' ||v1== 'c')&& (v2=='V'||v2=='v')){ uniondevectores(v,c);
			 }
			if ((v1=='V'||v1=='v' ) && (v2=='T'|| v2=='t') || (v1=='T' ||v1== 't')&& (v2=='V'||v2=='v')){uniondevectores(v,t);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='O'|| v2=='o') || (v1=='O' ||v1== 'o')&& (v2=='V'||v2=='v')){ uniondevectores(v,o);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='V'||v2=='v')){ uniondevectores(v,r);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='V'||v2=='v')){ uniondevectores(v,y);
			 }
			if((v1=='V'||v1=='v' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='V'||v2=='v')){ uniondevectores(v,a);
			 }
			 if((v1=='I'||v1=='i' ) && (v2=='C'|| v2=='c') || (v1=='C' ||v1== 'c')&& (v2=='I'||v2=='i')){ uniondevectores(i,c);
			 }
			if((v1=='I'||v1=='i' ) && (v2=='T'|| v2=='t') || (v1=='T' ||v1== 't')&& (v2=='I'||v2=='i')){uniondevectores(i,t);
			}
			if((v1=='I'||v1=='i' ) && (v2=='O'|| v2=='o') || (v1=='O' ||v1== 'o')&& (v2=='I'||v2=='i')){ uniondevectores(i,o);
			 }
			if((v1=='I'||v1=='i' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='I'||v2=='i')){ uniondevectores(i,r);
			 }
			if((v1=='I'||v1=='i' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='I'||v2=='i')){ uniondevectores(i,y);
			 }
			if((v1=='I'||v1=='i' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='I'||v2=='i')){ uniondevectores(i,a);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='T'|| v2=='t') || (v1=='T' ||v1== 't')&& (v2=='C'||v2=='c')){ uniondevectores(c,t);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='O'|| v2=='o') || (v1=='O' ||v1== 'o')&& (v2=='C'||v2=='c')){ uniondevectores(c,o);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='C'||v2=='c')){ uniondevectores(c,r);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='C'||v2=='c')){ uniondevectores(c,y);
			 }
			if((v1=='C'||v1=='c' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='C'||v2=='c')){ uniondevectores(c,a);
			}
			
			if((v1=='T'||v1=='t' ) && (v2=='O'|| v2=='o') || (v1=='O' ||v1== 'o')&& (v2=='T'||v2=='t')){ uniondevectores(t,o);
			 }
			if((v1=='T'||v1=='t' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='T'||v2=='t')){ uniondevectores(t,r);
			 }
			if((v1=='T'||v1=='t' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='T'||v2=='t')){ uniondevectores(t,y);
			 }
			if((v1=='T'||v1=='t' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='T'||v2=='t')){ uniondevectores(t,a);
			
			 }
			if((v1=='O'||v1=='o' ) && (v2=='R'|| v2=='r') || (v1=='R' ||v1== 'r')&& (v2=='O'||v2=='o')){ uniondevectores(o,r);
			 }
			if((v1=='O'||v1=='o' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='O'||v2=='o')){ uniondevectores(o,y);
			 }
			if((v1=='O'||v1=='o' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='O'||v2=='o')){ uniondevectores(o,a);
			
			 }
			if((v1=='R'||v1=='r' ) && (v2=='Y'|| v2=='y') || (v1=='Y' ||v1== 'y')&& (v2=='R'||v2=='r')){ uniondevectores(r,y);
			 }
			if((v1=='R'||v1=='r' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='R'||v2=='r')){ uniondevectores(r,a);
			
			 }
			if((v1=='Y'||v1=='y' ) && (v2=='A'|| v2=='a') || (v1=='A' ||v1== 'a')&& (v2=='Y'||v2=='y')){ uniondevectores(y,a);
			 }
			 break;
			 case '9': ver(v,i,c,t,o,r,y,a); cout<<""<<endl;
			 cout<< "\t\t* 9-Mostrar Diferencia de Conjuntos   *\n";
				menuseleccionarvector();
				v1=getch();  cout<<v1<<endl;
				v2=getch();  cout<<v2<<endl;
				if(v1=='V' && v2=='I' || v1=='v' && v2=='i'){ diferencia(v,i);
				 }
				if(v1=='V' && v2=='C' || v1=='v' && v2=='c'){ diferencia(v,c);
				 }
				if(v1=='V' && v2=='T' || v1=='v' && v2=='t'){ diferencia(v,t);
				 }
				if(v1=='V' && v2=='O' || v1=='v' && v2=='o'){ diferencia(v,o);
				 }
				if(v1=='V' && v2=='R' || v1=='v' && v2=='r'){ diferencia(v,r);
				 }
				if(v1=='V' && v2=='Y' || v1=='v' && v2=='y'){ diferencia(v,y);
				 }
				if(v1=='V' && v2=='A' || v1=='v' && v2=='a'){ diferencia(v,a);
				 }
			 
				if(v1=='I' && v2=='V' || v1=='i' && v2=='v'){ diferencia(i,v);
		   		 }
				if(v1=='I' && v2=='C' || v1=='i' && v2=='c'){ diferencia(i,c);
				 }
				if(v1=='I' && v2=='T' || v1=='i' && v2=='t'){diferencia(i,t);
				}
				if(v1=='I' && v2=='O' || v1=='i' && v2=='o'){ diferencia(i,o);
				 }
				if(v1=='I' && v2=='R' || v1=='i' && v2=='r'){ diferencia(i,r);
				 }
				if(v1=='I' && v2=='Y' || v1=='i' && v2=='y'){ diferencia(i,y);
				 }
				if(v1=='I' && v2=='A' || v1=='i' && v2=='a'){ diferencia(i,a);
				 }
			 
				if(v1=='C' && v2=='V' || v1=='c' && v2=='v'){ diferencia(c,v);
				 }
				if(v1=='C' && v2=='I' || v1=='c' && v2=='i'){ diferencia(c,i);
				 }
				if(v1=='C' && v2=='T' || v1=='c' && v2=='t'){ diferencia(c,t);
				 }
				if(v1=='C' && v2=='O' || v1=='c' && v2=='o'){ diferencia(c,o);
				 }
				if(v1=='C' && v2=='R' || v1=='c' && v2=='r'){ diferencia(c,r);
				 }
				if(v1=='C' && v2=='Y' || v1=='c' && v2=='y'){ diferencia(c,y);
				 }
				if(v1=='C' && v2=='A' || v1=='c' && v2=='a'){ diferencia(c,a);
				}
			
				if(v1=='T' && v2=='V' || v1=='t' && v2=='v'){ diferencia(t,v);
				 }
				if(v1=='T' && v2=='I' || v1=='t' && v2=='i'){ diferencia(t,i);
				 }
				if(v1=='T' && v2=='C' || v1=='t' && v2=='c'){ diferencia(t,c);
				 }
				if(v1=='T' && v2=='O' || v1=='t' && v2=='o'){ diferencia(t,o);
				 }
				if(v1=='T' && v2=='R' || v1=='t' && v2=='r'){ diferencia(t,r);
				 }
				if(v1=='T' && v2=='Y' || v1=='t' && v2=='y'){ diferencia(t,y);
				 }
				if(v1=='T' && v2=='A' || v1=='t' && v2=='a'){ diferencia(t,a);
				}
			
				if(v1=='O' && v2=='V' || v1=='o' && v2=='v'){ diferencia(o,v);
				 }
				if(v1=='O' && v2=='I' || v1=='o' && v2=='i'){ diferencia(o,i);
				 }
				if(v1=='O' && v2=='C' || v1=='o' && v2=='c'){ diferencia(o,c);
				 }
				if(v1=='O' && v2=='T' || v1=='o' && v2=='t'){ diferencia(o,t);
				 }
				if(v1=='O' && v2=='R' || v1=='o' && v2=='r'){ diferencia(o,r);
				 }
				if(v1=='O' && v2=='Y' || v1=='o' && v2=='y'){ diferencia(o,y);
				 }
				if(v1=='O' && v2=='A' || v1=='o' && v2=='a'){ diferencia(o,a);
				 }
			 
				if(v1=='R' && v2=='V' || v1=='r' && v2=='v'){ diferencia(r,v);
				 }
				if(v1=='R' && v2=='I' || v1=='r' && v2=='i'){ diferencia(r,i);
				 }
				if(v1=='R' && v2=='C' || v1=='r' && v2=='c'){ diferencia(r,c);
				 }
				if(v1=='R' && v2=='T' || v1=='r' && v2=='t'){ diferencia(r,t);
				 }
				if(v1=='R' && v2=='O' || v1=='r' && v2=='o'){ diferencia(r,o);
				 }
				if(v1=='R' && v2=='Y' || v1=='r' && v2=='y'){ diferencia(r,y);
				 }
				if(v1=='R' && v2=='A' || v1=='r' && v2=='a'){ diferencia(r,a);
				 }
		
				if(v1=='Y' && v2=='V' || v1=='y' && v2=='v'){ diferencia(y,v);
				 }
				if(v1=='Y' && v2=='I' || v1=='y' && v2=='i'){ diferencia(y,i);
				 }
				if(v1=='Y' && v2=='C' || v1=='y' && v2=='c'){ diferencia(y,c);
				 }
				if(v1=='Y' && v2=='T' || v1=='y' && v2=='t'){ diferencia(y,t);
				 }
				if(v1=='Y' && v2=='O' || v1=='y' && v2=='o'){ diferencia(y,o);
				 }
				if(v1=='Y' && v2=='R' || v1=='y' && v2=='r'){ diferencia(y,r);
				 }
				if(v1=='Y' && v2=='A' || v1=='y' && v2=='a'){ diferencia(y,a);
				 }
			 
				if(v1=='A' && v2=='V' || v1=='a' && v2=='v'){ diferencia(a,v);
				 }
				if(v1=='A' && v2=='I' || v1=='a' && v2=='i'){ diferencia(a,i);
				 }
				if(v1=='A' && v2=='C' || v1=='a' && v2=='c'){ diferencia(a,c);
				 }
				if(v1=='A' && v2=='T' || v1=='a' && v2=='t'){ diferencia(a,t);
				 }
				if(v1=='A' && v2=='O' || v1=='a' && v2=='o'){ diferencia(a,o);
				 }
				if(v1=='A' && v2=='R' || v1=='a' && v2=='r'){ diferencia(a,r);
				 }
				if(v1=='A' && v2=='Y' || v1=='a' && v2=='y'){ diferencia(a,y);
				 }
				break;
			 }
	 
	}while(!(opc=='0'));
}

/*cuerpo del programa*/
 int main(){
 	
 	int v[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int i[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int c[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int t[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int o[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int r[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int y[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int a[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 	char opc;
	procesoprincipal(opc,v,i,c,t,o,r,y,a,15);
for (int i=0; i<=10; i++){
		system("color 7");
		system("cls");
		usleep(200000);
		cout<<endl<<endl<<endl<<endl<<endl;
        cout<< "\t\t*************[ Copyright � ]**************\n";
		cout<< "\t\t*       Francisco        Wilber          *\n";
	    cout<< "\t\t*                                        *\n";
	    cout<< "\t\t*        Jorddy           Jerson         *\n";
	    cout<< "\t\t*                                        *\n";
		cout<< "\t\t***********[ MUCHAS  GRACIAS ]************\n\n\n";
		usleep(200000);
	}
	
}




