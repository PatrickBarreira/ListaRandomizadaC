#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, g, n, rd, p, u, cont,z,j;
    srand((int)time(NULL));
    p = 1; u = 45;
    cont = 0;
    printf("\n");
    n = 45;
    z = 1;
    j = 0;

    int numeros_gerados[45] = {0}; 

    for (i = 1; i <= n; i++) {
        rd = rand();
        g = p + rd % (u - p + 1);
        
        while (numeros_gerados[g - 1] != 0) {
            rd = rand();
            g = p + rd % (u - p + 1);
        }
    	if (cont < 1) {
        printf(" Grupo%6d", z ); 
    }
        numeros_gerados[g - 1] = 1;
        printf("%6d", g);
        cont++;
        if (cont == 3) {
        	z++;
            cont = 0;
            printf("\n");
		}
    }

    return 0;
}
