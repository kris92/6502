#include "mbed.h"

DigitalOut myled(LED1);
Timer t;

int main() {
    while(1) {
        myled = 1;
        wait(2.2);
        myled = 0;
        wait(2.2);
        printf("Tick 1!\r\n");
        //t.start();
        printf("Tick 2 !\r\n");
        wait(0.1);
        //t.stop();
        //printf("The time taken was %f seconds\r\n", t.read_us());
    }
}
