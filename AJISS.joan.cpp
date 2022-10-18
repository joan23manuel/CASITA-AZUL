#include<stdio.h>
void notas();
void promedio();
void notaalta();
int validate(int account_numb_temp,int passwd_temp);
int i,x;
int account_numb_temp;
int amount_temp;
int passwd_temp;
int notass;
int nuevo_valor;
struct account_details
{
	int account_no;
	int password;
	int nota1;
	int nota2;
	int nota3;
};
struct account_details s[3]={{10001,1234,0,0,0},{20002,56789,0,0,0},{30003,2000,0,0,0}};	
int main()
{
	while(1)
	
	{
		int opcion;
		printf("\n\t\t\t\t\t\tBIENVENIDO AL PORTAL CASITA AZUL\n");
		printf("___________________________________________________________________________________________________________________\n");
		printf("\nElige una opcion\n");
		printf("\n1. Estudiante\n2. Profesor\n\ningresa la opcion: ");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
			{
				int opc;
				printf("___________________________________________________________________________________________________________________\n");
				printf("\n\nCONSULTE SU INFORMACION\n");
				printf("\n1. notas\n2. promedio\n3. nota alta\n\ningresa la opcion: ");
				scanf("%d",&opc);
				switch(opc)
				{
					
					case 1:
					{
						notas();
						break;	
					}
					case 2:
					{
						promedio();
						break;
					}
					case 3:
					{
						notaalta();
						break;
					}
				
					default:
					printf("\nopcion invalida\n");
				}
				break;		
			}
			case 2:
			{
				int valor1;
				int valor2;
				int valor3;
				printf("___________________________________________________________________________________________________________________\n");
				printf("\nbienvenido profesor\n");
				printf("\ningrese el usuario del estudiante:\t");
				scanf("%d",&account_numb_temp);
				printf("\ningresa la contraseña\t");
				scanf("%d",&passwd_temp);
				x=validate(account_numb_temp,passwd_temp);			
				printf("\ningrese las notas del estudiante:\n");
				printf("NOTA 1:");
				scanf("%d",&valor1);
				s[x].nota1=valor1;
				printf("NOTA 2:");
				scanf("%d",&valor2);
				s[x].nota2=valor2;
				printf("NOTA 3:");
				scanf("%d",&valor3);
				s[x].nota3=valor3;
				printf("las notas del estudiante son:\nNOTA 1:%d\nNOTA 2:%d\nNOTA 3:%d\n",s[x].nota1,s[x].nota2,s[x].nota3);
				break;	
			}
			default:
			printf("opcion invalida\n");
		
		}	
	}		
}
int validate(int account_numb_temp,int passwd_temp)
{
	for(i=0;i<3;i++)
	{
		if(s[i].account_no==account_numb_temp)
		{
			if(s[i].password==passwd_temp)
			{
				return i;
				break;	
			}
			else
			{
				printf("\ncontraseña incorrecta");
						
			}	
		}	
		if(i==2)
		{
			printf("\nnumero de cuenta invalido");
				
		}
	}
}

void notas()
{
	printf("\ningrese su usuario\t");
	scanf("%d",&account_numb_temp);
	printf("\ningresa la contraseña\t");
	scanf("%d",&passwd_temp);
	x=validate(account_numb_temp,passwd_temp);
	printf("\ntus notas son:\n NOTA 1: %d\n NOTA 2: %d\n NOTA 3: %d\n ",s[x].nota1,s[x].nota2,s[x].nota3);
}
void promedio()
{
	printf("\ningrese su usuario\t");
	scanf("%d",&account_numb_temp);
	printf("\ningresa la contraseña\t");
	scanf("%d",&passwd_temp);
	x=validate(account_numb_temp,passwd_temp);
	notass=(s[x].nota1 + s[x].nota2 + s[x].nota3);
	printf("\ntu promedio es: %.2f",(float)notass/3);
}
void notaalta()
{
	printf("\ningrese su usuario\t");
	scanf("%d",&account_numb_temp);
	printf("\ningresa la contraseña\t");
	scanf("%d",&passwd_temp);
	x=validate(account_numb_temp,passwd_temp);
	if(s[x].nota1>s[x].nota2 && s[x].nota1 > s[x].nota3)
	{
		printf("\nla nota mayor es: %d",s[x].nota1);
	}
	else if(s[x].nota2>s[x].nota1 && s[x].nota2 > s[x].nota3)
	{
		printf("\nla nota mayor es:%d",s[x].nota2);
	}
	else if(s[x].nota3>s[x].nota1 && s[x].nota3 > s[x].nota2)
	{
		printf("\nla nota mayor es:%d",s[x].nota3);
	}
	else
	{
		printf("\nNo se an ingresado notas");
	}
}
