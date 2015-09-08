#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif


typedef struct type_graph{
  int cant_conocidos;//basado en una red de conocidos, puede ser la etiqueta que tenga.
  int pasos;//cantidad de pasos que ha tomado hasta llegar al nodo actual.
  char marca;//blanca"B"   gris"G"  negra"N", indicara el color actual.
  
}grafo;


