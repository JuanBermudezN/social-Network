#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "lista.h"

typedef struct post post_t;

post_t* post_crear(char* texto, size_t id, char* autor);

void post_destruir(post_t* post);

bool post_agregar_like(post_t* post, char* usuario);

void post_destruir(post_t* post);

lista_t* post_obtener_likes(post_t* post);

const char* post_obtener_texto(post_t* post);

const char* post_obtener_autor(post_t* post);

size_t post_obtener_id(post_t* post);

size_t post_cant_likes(post_t* post);