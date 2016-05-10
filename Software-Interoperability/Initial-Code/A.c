/*
    Author : Alexandru Razvan CACIULESCU
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NR_TROOPS   8
#define MAGIC_SEED  42

const char *bands[] = {
    "AC/DC", "Black Sabbath", "Judas Priest", "Pink Floyd"
    "Deep Purple", "Led Zeppelin", "Phoenix", "Cargo"
};

int main(void)
{
    int i, c;
    int choice;

    srand(MAGIC_SEED);

    printf("Here lies the biggest rock band database\n" \
        "Press L to list random bands from the databse\n" \
        "Press Q to quit\n");

    do{
        c = getchar();
        if(c == 'l')
            for (i = 0; i < 10; i++) {
                choice = rand() % NR_TROOPS;
                printf("%s\n", bands[choice]);
            }
    } while(c != 'q');

    return 0;
}
