#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int nc = 0 , nq = 0;
    int radius = 100;
    float pi = 0;

    while(1){

        
        float x = 2*radius*rand()/RAND_MAX - radius;
        float y = 2*radius*rand()/RAND_MAX - radius;

        float dist = sqrt(x*x + y*y);
        //printf("dist: %d ", dist);

        if (dist<radius){
            nc++;


        }

        nq++;

        pi = 4*nc/(nq*1.0);


        printf("Dentro do quadrado: %d    Dentro do circulo: %d    PI = %f\n", nq,nc,pi);





    }



}