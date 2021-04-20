#include <iostream>

using namespace std;



void Menu();
void Escogiendo();
void Aviondecero();
void Reservando();
void Avion();
void Ticket();

int total1;
int Asientos[20];
int Asientos2[20];
int Total[10];
string Viaje [4];


int main(int argc, char** argv) {

    string respuesta;
    char respuestafinal;
    
		Menu();
		Escogiendo();
		
		cout << " \n \n  \n  El total seria  :  " << total1 << "$";	
	    cout << "  \n \n \n Esta conforme con los datos seleccionados ?  ( si     o    no )\n :";
	    cin >> respuesta;
        while(respuesta != "si") {
			system("cls");
			Menu();
			Escogiendo();
			cout << " \n \n  \n  El total seria  :  " << total1 << "$";	
	        cout << "  \n \n \n Esta conforme con los datos seleccionados ?  ( si     o    no )\n :";
	        cin >> respuesta;
	    }
	   
	    Aviondecero();
	    Reservando();
	    
	    do {
		
		    cout << "\n \n    !!! Se han reservado los asientos de manera exitosa !!!          \n \n \n";
		    Avion();
		    cout << " ¿ Que mas desea hacer ? \n \n";
		    cout << " a) Guardar y Salir           b) Escoger mas boletos          c) Volver a Elegir los Asientos        d) Volver al menu           \n : "; 
		    cin >> respuestafinal;
		    
		    switch(respuestafinal){
		    	
		    	case 'a' :
		    		
		    	Ticket();	
		
		    	break;
		    		
		    		
				case 'b' :
		    		
				
		    		system("cls");
		    		Menu();
		            Escogiendo();
		
		            cout << " \n \n  \n  El total seria  :  " << total1 << " $";	
	                cout << "  \n \n \n Esta conforme con los datos seleccionados ?  ( si     o    no )\n :";
	                cin >> respuesta;
                    while(respuesta != "si") {
			            system("cls");
			            Menu();
			            Escogiendo();
	                }
	   
	                Avion();
	                Reservando();
		    		
		    	break;
		    		
		    	
				case 'c' :
		    		
		    		Aviondecero();
	                Reservando();
		    	
		    	break;
		    		
		    	
				case 'd' :
					Total[0]=0;
					string respuesta2;
					system("cls");
					cout << "\n Esta seguro ?,todos los datos anteriores se borraran... (si   o    no ) \n \n";
					cin >> respuesta2;
					if (respuesta2 == "si"){
			    		Menu();
			            Escogiendo();
			
			            cout << " \n \n  \n  El total seria  :  " << total1 << " $";	
		                cout << "  \n \n \n Esta conforme con los datos seleccionados ?  ( si     o    no )\n  :";
		                cin >> respuesta;
	                    while(respuesta != "si") {
				            system("cls");
				            Menu();
				            Escogiendo();
		                }
		   
		                Aviondecero();
		                Reservando();
		            }
		    	
		    	break;
		    	
		    }
		    
	    }while(respuestafinal != 'a' );
	    
	    
	return 0;
}

//-------------------------------------------------------------------------------------------------------------------------------------
void Menu(){

	cout << "              ############################################################################### \n ";
	cout << "              #############  Este programa es un simulador de una aerolinea escolar ####### \n";
	cout << "              ############################################################################### \n \n \n ";
	cout << "                                           !Bienvenido a Aerolina USB ! \n \n \n";
	cout << "Costos por Persona : \n \n";
	cout << "                             Cancun                  Puerto Vallarta                     Acapulco    ";
	cout << "\n ";
	cout << "\n";
	cout << "Vuelo Sencillo                1,900$                      1,350$                          900$       ";
	cout << "\n \n";
	cout << "Vuelo Redondo                 3,800$                      2,700$                         1,800$      ";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "Costos por menor de Edad : \n \n";
	cout << "                             Cancun                  Puerto Vallarta                     Acapulco    ";
	cout << "\n ";
	cout << "\n";
	cout << "Vuelo Sencillo                1,750$                      1,250$                          750$       ";
	cout << "\n \n";
	cout << "Vuelo Redondo                 3,500$                      2,500$                         1,500$      ";
	cout << "\n \n \n";
	cout << "          si se compran mas de 3 boletos se le aplica un descuento de el 5% sobre el total a pagar  ";
	cout << "\n";
	cout << "\n";
	cout << "\n";
}
//-------------------------------------------------------------------------------------------------------------------------------------
void Escogiendo(){
	
	Total[8]=0;
	
	char viaje;
	char tipoviaje;
	int boletos;
	int mayores;
	int menores;
	string respuesta;
	
    cout << "\n \n \n";
	cout << " ###########################     ! Hora de Escoger !    ############################ \n \n \n \n  ";
	cout << "  a) Cancun                       b) Puerto Vallarta                  c) Acapulco   \n \n ";
	cout << "A donde desea viajar ? : ";	
	cin >>viaje;


	switch(viaje) { 
		
		case 'a':
			Viaje[0]="Cancun";
			cout << " \n \n  a) Viaje Redondo    o      b) Viaje Sencillo  \n";
			cout <<" \n Que tipo de viaje desea hacer ? :";
			cin>>tipoviaje;
			
			switch (tipoviaje){
				
				case 'a':
				Viaje[1]="Viaje Redondo";	
			    cout <<"\n \n  \n Cuantos boletos desea comprar a Cancun ? \n : ";
		     	cin >> boletos;
			    cout << "\n \n Cuantos menores de edad viajan con usted ? \n :";
			    cin >>menores;
			    mayores=boletos-menores;
			    total1= (3800*mayores)+(menores * 3500  );
			    Total[6]=Total[6] + (3800*mayores);
                Total[7]=Total[7] + (3500*menores);
			    break;
					
				case 'b' :
				Viaje[1]="Viaje Sencillo";	
			    cout <<"\n \n  \n Cuantos boletos desea comprar a Cancun ? \n : ";
		     	cin >> boletos;
			    cout << "\n \n Cuantos menores de edad viajan con usted ? \n :";
			    cin >>menores;
			    mayores=boletos-menores;
			    total1= (1900*mayores)+(1750*menores);
			    Total[6]=Total[6] + (1900*mayores);
                Total[7]=Total[7] + (1750*menores);
				break;
			   
			}
			break;
			
		
		case 'b':
			Viaje[0]="Puerto Vallarta";
			cout << " \n \n  a) Viaje Redondo    o      b) Viaje Sencillo  \n";
			cout <<" \n Que tipo de viaje desea hacer ? :";
			cin>>tipoviaje;
			
			switch (tipoviaje){
				
				case 'a':
				Viaje[1]="Viaje Redondo";
				cout <<"\n \n  \n Cuantos boletos desea comprar a Puerto Vallarta ? \n : ";
		     	cin >> boletos;
			    cout << "\n \n Cuantos menores de edad viajan con usted ? \n :";
			    cin >>menores;
			    mayores=boletos-menores;
			    total1= (2700*mayores)+(2500*menores);
			    Total[6]=Total[6] + (2700*mayores);
                Total[7]=Total[7] + (2500*menores);
				break;
					
					
				case 'b' :
				Viaje[1]="Viaje Sencillo";	
				cout <<"\n \n  \n Cuantos boletos desea comprar a Puerto Vallarta ? \n : ";
		     	cin >> boletos;
			    cout << "\n \n Cuantos menores de edad viajan con usted ? \n :";
			    cin >>menores;
			    mayores=boletos-menores;
			    total1= (1350*mayores)+(1250*menores);
			    Total[6]=Total[6] + (1350*mayores);
                Total[7]=Total[7] + (1250*menores);
				break;
			   
			}
			break;
		
		
		case 'c':
			
			Viaje[0]="Acapulco";
			cout << " \n \n  a) Viaje Redondo    o      b) Viaje Sencillo  \n";
			cout <<" \n Que tipo de viaje desea hacer ? :";
			cin>>tipoviaje;
			
			switch (tipoviaje){
				
				case 'a':
				Viaje[1]="Viaje Redondo";	
			    cout <<"\n \n  \n Cuantos boletos desea comprar a Acapulco ? \n : ";
		     	cin >> boletos;
			    cout << "\n \n Cuantos menores de edad viajan con usted ? \n :";
			    cin >>menores;
			    mayores=boletos-menores;
			    total1= (1800*mayores)+(1500*menores);
			    Total[6]=Total[6] + (1800*mayores);
                Total[7]=Total[7] + (1500*menores);
				break;
					
					
					
				case 'b' :
				Viaje[1]="Viaje Sencillo";
				cout <<"\n \n  \n Cuantos boletos desea comprar a Acapulco ? \n : ";
		     	cin >> boletos;
			    cout << "\n \n Cuantos menores de edad viajan con usted ? \n :";
			    cin >>menores;
			    mayores=boletos-menores;
			    total1= (900*mayores)+(750*menores);
			    Total[6]=Total[6] + (900*mayores);
                Total[7]=Total[7] + (750*menores);
				break;	
			
			   
			}
			break;
	}

Total[0]=Total[0]+boletos; // NUMERO DE BOLETOS
Total[1]=Total[1]+mayores; // CANTIDAD MAYORES
Total[2]=Total[2]+menores; // CANTIDAD MENORES
Total[3]=Total[3]+total1; //TOTAL SIN IVA
Total[8]=boletos;


	
}
	 
	
	
//-----------------------------------------------------------------------------------------------------------------------------------------------

void Aviondecero(){
	
	
	
	  //fila 1
	Asientos[0]=0;
	Asientos[1]=0;
	Asientos[2]=0;
	Asientos[3]=0;
	Asientos[4]=1;
	Asientos[5]=1;
	Asientos[6]=1;
	Asientos[7]=0;
	Asientos[8]=0;
	Asientos[9]=1;
	Asientos[10]=0;
	Asientos[11]=0;
	Asientos[12]=1;
	Asientos[13]=0;
	Asientos[14]=0;
	Asientos[15]=0;
	Asientos[16]=0;
	Asientos[17]=1;
	Asientos[18]=1;
	Asientos[19]=1;
	Asientos[20]=1;
	
	//fila 2
	Asientos2[0]=0;
	Asientos2[1]=1;
	Asientos2[2]=0;
	Asientos2[3]=1;
	Asientos2[4]=1;
	Asientos2[5]=1;
	Asientos2[6]=0;
	Asientos2[7]=0;
	Asientos2[8]=1;
	Asientos2[9]=1;
	Asientos2[10]=0;
	Asientos2[11]=0;
	Asientos2[12]=1;
	Asientos2[13]=0;
	Asientos2[14]=0;
	Asientos2[15]=0;
	Asientos2[16]=0;
	Asientos2[17]=0;
	Asientos2[18]=0;
	Asientos2[19]=0;
	Asientos2[20]=1;
	
	
}
	
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------


void Reservando(){

	system ("cls");	
	
	int contador,fila,asiento ;
	contador=1;
	
	system("cls");

	cout <<"      #######################       ESCOGIENDO LOS ASIENTOS      #################           \n  \n";
	
	cout <<"\n";	
	cout <<"                               .--------, \n";
	cout <<"                               =|        | \n";
	cout <<"                                 |        | \n";
	cout <<"      .---.                      =|        | \n";
	cout <<"      |   |                        |        | \n";
	cout <<"      | C~ |                       =|        | \n";
	cout <<"      |     `-----------------------'---------'------------------------------------ .\n";
	cout <<"      |                                             |                          |      \\_\n";
	cout <<"    ---       "<<Asientos[20]<<"  "<<Asientos[19]<<"  "<<Asientos[18]<<"  "<<Asientos[17]<<"  "<<Asientos[16]<<"  "<<Asientos[15]<<"  "<<Asientos[14]<<"  "<<Asientos[13]<<"  "<<Asientos[12]<<"  "<<Asientos[11]<<"  "<<Asientos[10]<<"  "<<Asientos[9]<<"  "<<Asientos[8]<<" | "<<Asientos[7]<<"  "<<Asientos[6]<<"  "<<Asientos[5]<<"  "<<Asientos[4]<<"  "<<Asientos[3]<<"  "<<Asientos[2]<<"  "<<Asientos[1]<<"      |____    ).\n";
	cout <<"     |  |                                                                               ).\n";
	cout <<"      .'      "<<Asientos2[20]<<"  "<<Asientos2[19]<<"  "<<Asientos2[18]<<"  "<<Asientos2[17]<<"  "<<Asientos2[16]<<"  "<<Asientos2[15]<<"  "<<Asientos2[14]<<"  "<<Asientos2[13]<<"  "<<Asientos2[12]<<"  "<<Asientos2[11]<<"  "<<Asientos2[10]<<"  "<<Asientos2[9]<<"  "<<Asientos2[8]<<" | "<<Asientos2[7]<<"  "<<Asientos2[6]<<"  "<<Asientos2[5]<<"  "<<Asientos2[4]<<"  "<<Asientos2[3]<<"  "<<Asientos2[2]<<"  "<<Asientos2[1]<<"             /\n";           
	cout <<"      | _/.____|_|____________________.--------,____|_____________________|_|________/\n";
	cout <<"                                     /        /\n";
	cout <<"                                   =/        /\n";
	cout <<"                                   /        /\n";
	cout <<"                                 =/        /\n";
	cout <<"                                 /        /\n";
	cout <<"                               =/        /\n";
	cout <<"                               /        /\n";
	cout <<"                              /_______,'\n";
	
	
	cout <<"                                                                                                                        \n";
	cout <<"                                            FILA  1                                                                     \n";
	cout <<"                                                                                                                        \n";
	cout <<"                                                                                                                        \n";
	cout <<"                                            FILA  2                                                                     \n";
	cout <<"                                                                                                                        \n";
	
	cout <<"    20 <----------------------------------------------------------------------------------------- 1      \n";
	cout << "                                       NUMERO DE ASIENTO                                                  ";
	cout << "\n \n";
	
	
	while(contador < Total[8]+1){
		cout << "En que fila desea comprar su  " << contador << "  boleto ?  :  ";
		cin >>fila;
		
		if (fila == 1){
				cout << "Que asiento escoge de la fila 1 ?  :  ";
				cin >> asiento;
				Asientos[asiento]=Asientos[asiento]+1;
				
				if ((Asientos[asiento]) > 1){
				    cout << "\n \n      !!!Asiento ya ocupado !!!        \n \n";
					Asientos[asiento]=Asientos[asiento]-1;
					contador =contador-1;	
				}
	
	        }
		
		    if (fila == 2){
				cout << "Que asiento escoge de la fila 2 ?  :  ";
				cin >> asiento;	
				Asientos2[asiento]=Asientos2[asiento]+1;
				
				if ((Asientos[asiento]) > 1){
				    cout << "\n \n      !!!Asiento ya ocupado !!!        \n \n ";
					Asientos[asiento]=Asientos[asiento]-1;	
					contador =contador-1;
				}
		    }
	    
	    contador =contador +1;
   }
	
}

//----------------------------------------------------------------------------------------------------------------------------------------------------

void Avion(){


cout <<"\n \n \n          ################       LOS ASIENTOS QUE SELECCIONASTE FUERON ...      ##########################           \n  \n";
cout <<"\n";	
	cout <<"                               .--------, \n";
	cout <<"                               =|        | \n";
	cout <<"                                 |        | \n";
	cout <<"      .---.                      =|        | \n";
	cout <<"      |   |                        |        | \n";
	cout <<"      | C~ |                       =|        | \n";
	cout <<"      |     `-----------------------'---------'------------------------------------ .\n";
	cout <<"      |                                             |                          |      \\_\n";
	cout <<"    ---       "<<Asientos[20]<<"  "<<Asientos[19]<<"  "<<Asientos[18]<<"  "<<Asientos[17]<<"  "<<Asientos[16]<<"  "<<Asientos[15]<<"  "<<Asientos[14]<<"  "<<Asientos[13]<<"  "<<Asientos[12]<<"  "<<Asientos[11]<<"  "<<Asientos[10]<<"  "<<Asientos[9]<<"  "<<Asientos[8]<<" | "<<Asientos[7]<<"  "<<Asientos[6]<<"  "<<Asientos[5]<<"  "<<Asientos[4]<<"  "<<Asientos[3]<<"  "<<Asientos[2]<<"  "<<Asientos[1]<<"      |____    ).\n";
	cout <<"     |  |                                                                               ).\n";
	cout <<"      .'      "<<Asientos2[20]<<"  "<<Asientos2[19]<<"  "<<Asientos2[18]<<"  "<<Asientos2[17]<<"  "<<Asientos2[16]<<"  "<<Asientos2[15]<<"  "<<Asientos2[14]<<"  "<<Asientos2[13]<<"  "<<Asientos2[12]<<"  "<<Asientos2[11]<<"  "<<Asientos2[10]<<"  "<<Asientos2[9]<<"  "<<Asientos2[8]<<" | "<<Asientos2[7]<<"  "<<Asientos2[6]<<"  "<<Asientos2[5]<<"  "<<Asientos2[4]<<"  "<<Asientos2[3]<<"  "<<Asientos2[2]<<"  "<<Asientos2[1]<<"             /\n";           
	cout <<"      | _/.____|_|____________________.--------,____|_____________________|_|________/\n";
	cout <<"                                     /        /\n";
	cout <<"                                   =/        /\n";
	cout <<"                                   /        /\n";
	cout <<"                                 =/        /\n";
	cout <<"                                 /        /\n";
	cout <<"                               =/        /\n";
	cout <<"                               /        /\n";
	cout <<"                              /_______,'\n";
	
	
	cout <<"                                                                                                                        \n";
	cout <<"                                            FILA  1                                                                     \n";
	cout <<"                                                                                                                        \n";
	cout <<"                                                                                                                        \n";
	cout <<"                                            FILA  2                                                                     \n";
	cout <<"                                                                                                                        \n";
	
	cout <<"    20 <----------------------------------------------------------------------------------------- 1      \n";
	cout << "                                       NUMERO DE ASIENTO                                                  ";
	cout << "\n \n";
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

void Ticket(){

Total[4]=Total[3]*0.16; //IVA
Total[5]=Total[4]+Total[3];  //TOTAL TODO
// Total[6] // PRECIO MAYORES
// Total[7] // PRECIO MENORES
/*
Total[0]=boletos; // NUMERO DE BOLETOS
Total[1]=mayores; // CANTIDAD MAYORES
Total[2]=menores; // CANTIDAD MENORES
Total[3]=total1; //TOTAL SIN IVA
Total[4]=Total[3]*0.16; //IVA
Total[5]=Total[4]+Total[3];  //TOTAL TODO
Total[6] // PRECIO MAYORES
Total[7] // PRECIO MENORES
Viaje[0]= Acapulco,Puerto Vallarta o Cancun
Viaje[1]= Viaje Redondo o Sencillo
 */

if (Total[0] > 3){
	Total[9]=(Total[5]*0.05); // IVA
	Total[5]=Total[4]+Total[3]-Total[9]; // TOTAL TODO
}

cout <<"       ____________________________________________________                        \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |  ######### Simulador de Aerolinea Escolar #######  |                       \n";	
cout <<"      |  ################################################  |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |     Dia : 30/02/2019         Hora : 13:02 pm       |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |  "<< Total[1] <<"  Adulto  "<<Viaje[1]<<" a "<< Viaje[0]<<" :       "<< Total[6]  <<" $ |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |  "<< Total[2] <<"  Menor "<<Viaje[1]<<" a "<< Viaje[0]<<" :         "<< Total[7] <<" $ |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                                                    |                       \n";
cout <<"      |                          Total  :          "<<Total[3] <<" $ |                       \n";	
cout <<"      |                                                    |                       \n";
cout <<"      |                          + IVA  :           "<<Total[4] <<" $ |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                 + 5$ Descuento  :           "<<Total[9] <<" $ |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |----------------------------------------------------|                       \n";		
cout <<"      |                  Total a pagar  :         "<<Total[5] <<" $  |                       \n";	
cout <<"      |____________________________________________________|                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |      !!! Gracias por escoger Aerolinea USB !!!     |                       \n";	
cout <<"      |                                                    |                       \n";	
cout <<"      |####################################################|                       \n";
cout <<"      |#################  Regrese Pronto  #################|                       \n";	
cout <<"      |####################################################|                       \n";	
cout <<"      |____________________________________________________|                       \n";	
cout <<"                                                                                 \n";	
cout <<"                                                                                 ";	                                
	
}
	
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------


