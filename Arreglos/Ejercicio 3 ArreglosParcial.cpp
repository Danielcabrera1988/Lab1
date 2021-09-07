#include <stdio.h>
#include <string.h>
struct audioCenter{
	char nombre_Artista[30];
	char titulo[30];
	int genero_Folklore;
	int genero_Rock;
	int genero_Popular;
	int precio;
};


int main(int argc, char *argv[]) {
	
	int i, select, total = 0, acum_F = 0, acum_R = 0, acum_P = 0;
	int genero[3];
	struct audioCenter musica[3];
	

	for(i = 0; i < 3 ; i++){
		printf("Ingrese el nombre del artista: ");
		scanf("%s",&musica[i].nombre_Artista);
		printf("Ingrese el titulo del album: ");
		scanf("%s",&musica[i].titulo);
		printf("Ingrese el precio: ");
		scanf("%d", &musica[i].precio);
		total+=musica[i].precio;			
		
		do{
			printf("Ingrese el genero\n");
			printf("1 ==> Folklore\n2 ==> Rock\n3 ==> Popular\n");
			scanf("%d", &select);
			if(select>0 && select<4){
				if(select == 1){
					musica[i].genero_Folklore = musica[i].genero_Folklore+1;
					acum_F+=musica[i].precio;
					genero[i] = 1;
					break;
				}
				else if(select == 2){
					musica[i].genero_Rock = musica[i].genero_Rock+1;
					acum_R+=musica[i].precio;
					genero[i] = 2;
					break;
				}
				else if(select == 3){
					musica[i].genero_Popular = musica[i].genero_Popular+1;
					acum_P+=musica[i].precio;
					genero[i] = 3;
					break;
				}
			}
			else{
				printf("\n======================\n");
				printf("||Cod Titulo erroneo||\n");
				printf("======================\n");
				printf("    <<<REINTENTE>>>\n\n");
			}				
		}
		while(select>0 || select<4);			
	}
	printf("\t\tINFORMES DE VENTA DEL DIA\n");
	printf("Artista/GM    Titulo    Genero    Precio\n");
	for(i = 0; i < 3; i++){
		printf("%s    ",musica[i].nombre_Artista);
		printf("%s    ",musica[i].titulo);
		if(genero[i] == 1){
			printf("Folklore    \t");
		}
		else if(genero[i] == 2){
			printf("Rock    ");
		}
		else if(genero[i] == 3){
			printf("Popular    ");
		}
		printf("%d\n",musica[i].precio);
	}
	printf("\t\t\t Total Vendido %d",total);
	
	return 0;
}

