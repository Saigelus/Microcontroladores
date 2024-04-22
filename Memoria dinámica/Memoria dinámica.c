#include <stdio.h>
#include <stdlib.h>

typedef int Elemento;
struct N
{
    Elemento dato;
    struct N *adelante;
    struct N *atras;
};

typedef struct N Node;

int main()
{
    Node * p = NULL;
    p = (Node*)malloc(sizeof(Node));
    scanf("%d",&(*p).dato);
    (*p).adelante = NULL;
    (*p).atras = NULL;
    printf("%d\n",(*p).dato);
    return 0;
}