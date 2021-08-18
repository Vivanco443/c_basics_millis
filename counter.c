#include <stdio.h>
#include <sys/time.h>

int main () {
    double sum = 0;
    double add = 1;

    // Start measuring time
    struct timeval begin, end;
    gettimeofday(&begin, 0);
    
    int iterations = 1000*1000*22;
    for (int i=0; i<iterations; i++) {
        sum += add;
        add /= 2.0;
    }
    
    // Stop measuring time and calculate the elapsed time
    gettimeofday(&end, 0);
    // long seconds = end.tv_sec - begin.tv_sec;    // Para contar segundos utilizamos
    long microseconds = end.tv_usec - begin.tv_usec;
    double miliseconds = microseconds * 1e-3;
    //double elapsed = seconds + microseconds*1e-6;     // se suman usegundos y segundos
    
    //printf("Result: %.6f\n", sum);
    
    printf("\nTime measured: %.3f miliseconds.\n\n", miliseconds);
    
    return 0;
}
