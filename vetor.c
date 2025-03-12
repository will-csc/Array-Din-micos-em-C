#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *items; // Para trocar o tipo, basta mudar "int"
    size_t count;
    size_t capacity;
} Vector;

Vector new_Vector(){
    Vector arr;
    arr.items = (int *) malloc(sizeof(int) * 1);
    arr.count = 0;
    arr.capacity = 1;
    return arr;
}

void increase_capacity(Vector *arr){
    if(arr->count >= arr->capacity){
        arr->capacity *= 2;
        arr->items = realloc(arr->items, arr->capacity * sizeof(*arr->items));
    }
}

void push(Vector *arr, int element){
    increase_capacity(arr);
    arr->items[arr->count++] = element;
}

void print_array(Vector *arr){
    printf("[");
    for(int i = 0; i < arr->count; i++){
        if(i == arr->count - 1){
            printf("%d",arr->items[i]);
            break;
        }
        printf("%d,",arr->items[i]);
    }
    printf("]");
}

int main(void){
    Vector arr = new_Vector();

    push(&arr,10);
    push(&arr,20);
    push(&arr,30);
    push(&arr,40);

    print_array(&arr);
}
