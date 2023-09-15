#include "mbed.h"

DigitalOut mybuzzer(PC_4);
PwmOut mypwmR(PB_5);
PwmOut mypwmG(PB_3);
PwmOut mypwmB(PA_10);
BusOut motor(PB_13, PB_14, PB_15, PB_1);
DigitalOut myled[4] = { PC_9, PB_2, PC_2, PC_3};
DigitalIn mysw[4] = {PC_10,PC_11, PC_12, PA_4 };
int main() {
   int i;
    while(1) {
        /*
        for (i= 0; i< 4 ;i++)
        {
            myled[i] = 1; // LED is ON
           mybuzzer = 1;
             wait(0.5); // 200 ms
             myled[i] = 0; // LED is OFF
           mybuzzer = 0;
            wait(0.5); // 1 sec
        }
        */
        for( i = 0; i < 4 ; i++)
        {
            if(!(mysw[i]))
            {
                 myled[i] = 1;
                 wait(0.05);
            }
            else myled[i] = 0;
       } 
    }
}
