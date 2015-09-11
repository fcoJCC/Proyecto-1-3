#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif


typedef struct type_graph{
  int vecinos;//basado en un conjunto de empresas de conocidos, puede ser la etiqueta que tenga.
  int distacia;//cantidad de pasos que ha tomado hasta llegar al nodo actual.
  char color;//blanca"B"   gris"G"  negra"N", indicara el color actual.
  
}grafo;

//cargar matriz de un archivo
int crear_matriz(){
  int matriz_adj[tam][tam]={  //     Q R S T U V W X
                              //     0 1 2 3 4 5 6 7
                            /*Q 0*/ {0,1,0,0,0,0,0,0}
                            /*R 1*/ {1,0,1,0,0,0,0,0}
                            /*S 2*/ {0,1,0,1,0,0,0,0}
                            /*T 3*/ {0,0,1,0,1,1,0,0}
                            /*U 4*/ {0,0,0,1,0,1,1,1}
                            /*V 5*/ {0,0,0,1,1,0,1,0}
                            /*W 6*/ {0,0,0,0,1,1,0,1}
                            /*X 7*/ {0,0,0,0,1,0,1,0}
                      }
  
  return 0;
}

int imprimir_matriz(int matriz[tam][tam]){
  int i,j;
  for (j=0;j<=7;j++){
    for(i=0;i<=7;i++){
      if(matriz[j][i]==0){
        printf("-");
      }
      else 
        printf("O");
    }
    printf("\n");
  }
  return 0;
}


