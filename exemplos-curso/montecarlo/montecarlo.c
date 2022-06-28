#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int raio = 100;
    float pi = 0;
    int nc = 0, nq = 0;

    while(1){
        float x, y;
        x = 2*raio*rand()/(RAND_MAX*1.0) - raio;
        y = 2*raio*rand()/(RAND_MAX*1.0) - raio;
        
        float dist = sqrt(x*x + y*y);
        if (dist<raio){
            nc++;
        }
    
        nq++;
        pi = 4*nc/(nq*1.0);
        printf("%f\n", pi);

    }


    return 0;
}

/*
           
            R
<-----------------------                                CÍRCULO DE RAIO R
                                                        
X X X X X X X X X X*** ### ### ***X X X X X X X X X X   ÁREA DO CIRCULO (Ac) Pi*R^2
X              *##                 ##*              X   ÁREA DO QUADRADO(Aq) 4*R^2
X    o     *##                         ##*     o    X   
X       *##              aaa              ##*       X   Ac / Aq = (Pi*R^2)/(4R^2)
X     *##                                   ##*     X   Ac / Aq = Pi / 4
X   *##                                       ##*   X   Pi = 4 * Ac / Aq
X  *##                            aa           ##*  X   
X *##           aa                              ##* X   
X*##                                             ##*X   Método de montecarlo
X*##        a                                    ##*X   Gerar diversos pontos aleatórios e comparar quais estão
X*##                      a                aaa    ##X   dentro do círculo (a) e quais estão dentro do quadrado (o)
X*##                                              ##X   
X*##                                  a          ##*X   Pi = 4 * a/o
X  *##                                     a     ##*X   Pi = 4 * 18/23
X   *##                           aaaa          ##* X   
X    *##        aa                             ##*  X   Pi = 3,13 (ok)
X      *##                                   ##*    X
X  o     *#                                ##*      X   aumentando o numero de pontos nós 
X    o      *##                         ##*         X   alcançaremos o valor mais próximo de Pi
X               *##                 ##*        o    X
X X X X X X X X X X*** ### ### ***X X X X X X X X X X


circulo feito com a ajuda de https://ascii.co.uk/art/circle

*/