#include <unistd.h>
#include <stdio.h>



void ft_validate(char first, char second, char third){
    
    char comma = ',';
    char space = ' ';

    write(1, &first, 1);
    write(1, &second, 1);
    write(1, &third, 1);

    if(first != '7' || second != '8' || third != '9'){
        write(1, &comma, 1);
        write(1,&space,1);
    }


}


void ft_print_comb(void){

    char first = '0';
    char second;
    char third;



    while (first <= '7')
    {
        second = first +1;
        while(second <= '8')
        {
            third = second + 1;
            while (third <= '9')
            {
                ft_validate(first,second,third);
                third++;
            }
            second++;
            
        }
        first++;

        
    }
    

}
