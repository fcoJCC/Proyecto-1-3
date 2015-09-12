#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef GRAFO_H
#include "grafo.h"
#define GRAFO_H
#endif

typedef struct tipo_cola{
    int direccion_y,direccion_x;
    struct tipo_cola *sig, *pri, *ult;
}Cola;
//funcion que crea e inicializa una cola
Cola *inicializar_cola(){
    Cola *aux_cola=(Cola *)malloc(sizeof(struct tipo_cola));

    direccion_y=0;
    direccion_x=0;
    aux_cola->primero=NULL;
    aux_cola->sgte=NULL;
    aux_cola->ultimo=NULL;

    return aux_cola;
}
//funcion que verifica si la cola esta vacia
int vacia_cola(Cola *cola){
  
  if(aux_cola->primero==NULL){
    return 1;//esta vacia 
  }
   return 0; 
}

int encolar(Cola *new_cola){
    Cola *aux=(new_Cola*)malloc(sizeof(struct tipo_cola));
    aux->sig=NULL;

    if(unaCola->primero==NULL){
        unaCola->primero=unaCola->ult=aux;
        unaCola->sgte=NULL;
        
    }else{
        new_cola *ventana=new_cola->ult;
        new_cola->ult->sig=casilla;
        new_cola->ult=casilla;

    }
    return 0;
}




