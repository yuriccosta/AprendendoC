#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{   


    double pi;
    unsigned long int seed;
    seed = time(NULL);
    srand(seed);

    int qt = 10000, qc = 0;
    //printf("Quantos pontos deseja utilizar? ");
    //scanf("%d", &qt);
    for(int i = 0; i < qt; i++)
    {   
        
        srand(seed);
        double x, y;
        x = -1 + ((double)rand()/RAND_MAX)* 2;
        x = -1 + (double) rand() / RAND_MAX * 2;
        y = -1 + (2.0*rand()/RAND_MAX);
        if(x*x + y*y <= 1 )
            qc++;
    }
    pi = 4.0*qc/qt;
    printf("O valor estimado de Pi é %.10f\n", pi);
    return 0;
}