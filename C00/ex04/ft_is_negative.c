#include <unistd.h>
#include <stdio.h>

void ft_is_negative(int n){

    char answer;

    

    if(n < 0){
        answer = 'N';
        write(1,&answer,1);
    }else if((n >=0)|| NULL ){
        answer= 'P';
        write(1,&answer,1);
    }


}


