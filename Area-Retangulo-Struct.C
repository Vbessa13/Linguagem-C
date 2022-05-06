#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto{
    int x,y;
};

struct Retangulo{
    struct Ponto inicio, fim;
};


int main(){
    struct Retangulo r;
    int Area;
    printf("Informe o valor do ponto 'X' de inicio: \n");
    scanf("%d",&r.inicio.x);
    printf("Informe o valor do ponto 'Y' de inicio: \n");
    scanf("%d",&r.inicio.y);
    printf("Informe o valor do ponto 'X' de fim: \n");
    scanf("%d",&r.fim.x);
    printf("Informe o valor do ponto 'Y' de fim: \n");
    scanf("%d",&r.fim.y);
    printf("Inicio:(%d,%d) Fim:(%d,%d) \n",r.inicio.x,r.inicio.y,r.fim.x,r.fim.y);

    struct Ponto p3;//pontos extras criados somente para facilitar medição de distancia entre pontos
    struct Ponto p4;

    p3.x = r.inicio.x;
    p3.y = r.fim.y;
    p4.x = r.fim.x;
    p4.y = r.inicio.y;

    //printf("Ponto 3: (%d,%d) Ponto 4: (%d,%d) \n",p3.x,p3.y,p4.x,p4.y);

    int lado, base;//medidas dos lados do retangulo

    lado = sqrt(((p3.x - r.inicio.x)*(p3.x - r.inicio.x)) + ((p3.y - r.inicio.y)*(p3.y - r.inicio.y)));//distancia entre pontos
    base = sqrt(((p4.x - r.inicio.x)*(p4.x - r.inicio.x)) + ((p4.y - r.inicio.y)*(p4.y - r.inicio.y)));
    printf("lado: %d\n",lado);
    printf("base: %d\n",base);

    Area = lado * base;

    printf("A Area do Retangulo eh: %d",Area);

    return 0;
}

