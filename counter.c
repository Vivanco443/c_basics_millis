# include <stdio.h>

unsigned long tiempo = 0;

int main(){
    int i;
    
    while (i < 200){
        i++;
    }
    tiempo = millis();
    printf(tiempo);
}