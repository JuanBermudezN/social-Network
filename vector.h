#include <stdbool.h>

typedef struct vector vector_t;
typedef void (*destruir_dato_t)(void*);

vector_t* vector_crear();

bool vector_redimensionar(vector_t* vector, size_t tam_nuevo);

bool vector_guardar(vector_t* vector, void* dato);

size_t vector_cantidad(vector_t* vector);

void* vector_obtener(vector_t* vector, size_t pos);

void* vector_borrar(vector_t* vector, size_t pos);

size_t vector_tam(vector_t* vector);

void vector_destruir(vector_t* vector, destruir_dato_t destruir);