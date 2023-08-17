#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
    f(name);
}

void print_name_upper(char *name)
{
    int i;

    for (i = 0; name[i]; i++)
        printf("%c", name[i] >= 'a' && name[i] <= 'z' ? name[i] - 32 : name[i]);
    printf("\n");
}

int main(void)
{
    print_name("Betty", print_name_upper);
    return (0);
}
