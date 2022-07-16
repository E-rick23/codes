#include <stdio.h>
#include <time.h>
//This code starts counting as soon as it's initiated, and when the user types "0" it shows the time it spent running.
int main () {
    time_t seconds;
    
    printf("The counter has started!\n");
    printf("Enter the number 0 to stop it!: ");
    seconds = time(NULL);
    int t = 12, segundos;
    do{
       scanf("%d", &t);
       if(t == 0){
           segundos = time(NULL);
           segundos = seconds-segundos;
           segundos = segundos*-1;
       }
    }while(t != 0);
    int horas, minutos;
    minutos = segundos/60;
    horas = minutos/60;
    segundos = segundos - (60*minutos);
    if (horas < 10 && minutos < 10 && segundos < 10){
        printf("Time since this code was running: 0%d:0%d:0%d ", horas, minutos, segundos);
    }
    if (horas < 10 && minutos < 10 && segundos > 10){
        printf("Time since this code was running: 0%d:0%d:%d ", horas, minutos, segundos);
    }
    if (horas < 10 && minutos > 10 && segundos > 10){
        printf("Time since this code was running: 0%d:%d:%d ", horas, minutos, segundos);
    }
    if (horas > 10 && minutos > 10 && segundos > 10){
        printf("Time since this code was running: %d:%d:%d ", horas, minutos, segundos);
    }
    return(0);
}