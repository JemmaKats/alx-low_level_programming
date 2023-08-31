#include <stdio.h>

int get_endianness(void)
{
    union {
        int i;
        char c;
    } u;

    u.i = 1;

    return (u.c == 1);
}

int main(void)
{
    if (get_endianness())
        printf("Little endian\n");
    else
        printf("Big endian\n");

    return 0;
}
