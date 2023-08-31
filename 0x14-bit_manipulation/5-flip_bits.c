#include <stdio.h>

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int diff = n ^ m;
    unsigned int count = 0;

    while (diff)
    {
        count += diff & 1;
        diff >>= 1;
    }

    return count;
}

int main(void)
{
    printf("%u\n", flip_bits(0b11010, 0b01101)); // 5
    printf("%u\n", flip_bits(0b10101, 0b01010)); // 5
    printf("%u\n", flip_bits(0b00000, 0b11111)); // 5
    printf("%u\n", flip_bits(0b11111, 0b11111)); // 0

    return 0;
}
