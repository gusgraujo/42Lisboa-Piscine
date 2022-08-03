#include <unistd.h>


void ft_print_reverse_alphabet(void){

    char alphabetic = 'z';

    while(alphabetic >= 'a'){

        write(1,&alphabetic,1);
        alphabetic--;

    }

}
