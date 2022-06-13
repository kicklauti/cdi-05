#include <stdio.h>
#include "pico/stdlib.h"

int main(void){

    stdio_init_all();

    gpio_init_mask(0x3ff);
    gpio_set_dir_masked(0x3ff,0x7f);
        char NUM=0;

while(1){


        char RESET=gpio_get(7);
        char MAS=gpio_get(8);
        char MENOS=gpio_get(9);

    
        if(MAS==1){

            NUM++;

        }

        if(MENOS==1){
        
        NUM--;

        }

        if(RESET==1){

            NUM=0;

        }


        if(NUM==1){

            gpio_put_masked(0x7f,0x30);

        }

        if(NUM==2){

            gpio_put_masked(0x7f,0x6d);

        }

        if(NUM==3){

            gpio_put_masked(0x7f,0x79);

        } 

        if(NUM==4){

            gpio_put_masked(0x7f,0x33);

        } 

        if(NUM==5){

            gpio_put_masked(0x7f,0x5b);

        }

        if(NUM==6){

            gpio_put_masked(0x7f,0x5f);

        }

        if(NUM==7){

            gpio_put_masked(0x7f,0x70);

        }

        if(NUM==8){

            gpio_put_masked(0x7f,0x7f);

        }

        if(NUM==9){

            gpio_put_masked(0x7f,0x73);

        }

        if(NUM==0){

            gpio_put_masked(0x7f,0x7e);

        }

                if(MAS==1 && NUM<9){

                    NUM++;

                }

                if(MENOS==1 && NUM>0){

                    NUM--;


                }


sleep_ms(250);

}
}