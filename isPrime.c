/*
 ============================================================================
 Name        : isPrime.c
 Author      : 
 Version     :
 Copyright   : Lee Jian Sheng @ 2018
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    int num, p[argc], np[argc];
    int p_count = 0, np_count = 0, x = 0, y = 0;

    for(int i = 1; i < argc; i++){

        num = atoi(argv[i]);

        for(int j = 2; j <= num / 2; i++){
            if(num%j == 0 || num == 1){
                np_count++;
                np[y] = num;
                y++;
                break;

            }else{
                p_count++;
                p[x] = num;
                x++;
                break;

            }
        }
    }
    printf("\nPrime numbers: ");
    for(int i = 0; i < p_count; i++){
        printf("%d ", p[i]);

    }
    printf("\nNon-prime Numbers: ");
    for(int i = 0; i < np_count; i++){
        printf("%d ", np[i]);

    }

    return EXIT_SUCCESS;
}
