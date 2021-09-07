#include <stdio.h>
#include <ctype.h>  // contiene funcion tolower()
#define PAUSA fflush(stdin); getchar()
#define ELEGIR(x) fflush(stdin); x = tolower(getchar());

/** ---------------------- Declaraciones ----------------------*/

const static unsigned N = 250;   //Tamaño de la cadena
static unsigned 
    i = 0,  //Indice de l cadena
    total_oraciones = 0,
    total_parrafos = 0;
/* Solicita una oración y la guarda en cadena*/
void pedir_linea(char* cadena);
/* Solicita oraciones y las guarda en cadena, coloca un '.' al final*/
void pedir_oraciones(char* cadena);
/* Solicita párrafos y los guarda en cadena, coloca un ';' al final*/
void pedir_parrafos(char* cadena);

/** ---------------------- Programa ----------------------*/

int main(){
    char cadena[N];
    printf("\t == CADENAS == \n"); 
    pedir_parrafos(cadena);
//iniciar contadores
    unsigned oraciones_por_parrafo[total_parrafos]; //Contador de oraciones, uno por cada parrafo
    unsigned p = 0;
    oraciones_por_parrafo[p] = 0;
    i = 0;

    /* Mostrar por pantalla cada párrafo separado por una línea en blanco. */
    printf("\n => Oraciones:\n");
    while(cadena[i] != '\0' && i < N){
        switch(cadena[i]){
            case '.': 
                printf(" ");  
                oraciones_por_parrafo[p]++; // Contar oraciones en parrafo actual
                break;
            case ';': 
                printf("\n\n");
                p++;                            //incrementar contador de parrafos
                oraciones_por_parrafo[p] = 0;   //iniciar contador de oraciones
                break;
            default: printf("%c", cadena[i]);
        }
        i++;
    }

    /* Indicar cuantas oraciones tiene cada párrafo, total de párrafos y total de oraciones. */
    printf(" => Total de oraciones: %u\n", total_oraciones);
    for(p = 0; p < total_parrafos; p++){
        printf("\t Parrafo %d: %d oraciones.\n", p+1, oraciones_por_parrafo[p]);
    }

    /* Mostrar por pantalla la primera oración de cada párrafo indicando a que párrafo pertenece. */
    i = 0;
    for(p = 0; p < total_parrafos; p++){
        printf("\n => Primera oracion del parrafo %d: ", p+1);
    //Escribir oración hasta llegar al final '.'
        while(cadena[i] != '.'){
            printf("%c", cadena[i]); i++;   //imprimir e incrementar
        }
    // Avanzar hasta el siguiente párrafo
        while(cadena[i++] != ';');
    }

    /* Indicar cuál es el párrafo que tiene más oraciones y mostrarlo por pantalla. 
       Cada oracione debe aparecer una debajo de la otra.*/
    int mayor = 0;
    i = 0;
//Buscar indice de mayor cantidad de oraciones
    for(p = 0; p < total_parrafos; p++){
        if(oraciones_por_parrafo[mayor] < oraciones_por_parrafo[p])
            mayor = p;
    }
//Mostrar párrafo con más oraciones
    printf("\n => El parrafo %d tiene mas oraciones (%d oraciones):\n\t", mayor+1, oraciones_por_parrafo[mayor]);
//Buscar el indice del párrafo
    while(mayor != 0){
        while(cadena[i++] != ';');
        mayor--;
    }
//imprimir oraciones
    while(cadena[i] != '\0' && cadena[i] != ';'){
        if(cadena[i] == '.')
            printf("\n\t");
        else
            printf("%c", cadena[i]); 
        i++;
    }

    printf("\nFin del programa, presione Enter para salir...");
    PAUSA;

    return 0;
}

/** ---------------------- Programa ----------------------*/

void pedir_linea(char* cadena){
    printf("\t- Escriba la oracion, finalizar con Enter...\n\t");
        fflush(stdin);
        gets(&cadena[i]);
        while (cadena[i] != '\0') i++;      //Actualizar índice
    return;
}

void pedir_oraciones(char* cadena){
    int opcion = 's';
    while(opcion == 's' || opcion != 'n'){
        printf("\t- Desea agregar una oracion? [s/n]? ");
        ELEGIR(opcion);
        if(opcion == 's'){
            pedir_linea(cadena);
            cadena[i] = '.'; i++;   // Cerrar oración; Actualizar indice
            total_oraciones++;
        }
    }
    return;
}

void pedir_parrafos(char* cadena){
    char opcion = 's';
    while(opcion == 's' || opcion != 'n'){
        printf("Desea agregar un parrafo? [s/n]? ");
        ELEGIR(opcion);
        if(opcion == 's') {
            pedir_oraciones(cadena);
            cadena[i] = ';'; i++;   // Cerrar parrafo; Actualizar indice
            total_parrafos++;
        }
    }
    cadena[i] = '\0';
}