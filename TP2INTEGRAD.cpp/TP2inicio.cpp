#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>

  FILE*fp;
  
  FILE*fm;
  FILE*ft;
  
void crearUsuario();
void loginUsuario();
void menuPrincipal();
void registrarveterinario();
void registrarmascota();
void registrarTurno();
void listaVetPorfecha();
void listaTurno();
void llamarmascota();

typedef char cadena[50];

struct Fecha{
	
	int dia, mes,anio;
}; 

struct FechadeNac{
	
	int dia,mes,anio;
}; 

struct Usuarios{
	
	cadena usuario, contrasenea;
	char Apellidoynombre[60];
	
};

struct Veterinario{
	
	char ApellidoyNombre[60];
	char domicilio[60];
	int DNIdueneo;
	char localidad[60];
	FechadeNacimiento fecha;
	float peso;
	int Telefono;
	
};

struct Turnos{
	
	int MatriculadeVeterinario;
	Fecha fecha;
	int DNIdueneo;
	char detalledeAtencion[380];
};
main(){
	
	int n;
	while(true)
	{
		system("cls");
		
		printf("\n\n\n\n\n\n\n\n\t\t1-registrarse.\n\t\t\t\t2-login.\n\t\t\t\t3-salir.\n\t\t\t\telija una opcion :");
		scanf("%d",&n);
		_flushall();
		
		switch(n)
		{
			case 1 : crearUsuario();
			    break;
			    
				
		}
	}
}
	
	
};


