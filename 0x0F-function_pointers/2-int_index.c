#include <stdio.h>

/**
 * int_index - searches for an integer in an array
 * @array: array to search in
 * @size: size of the array
 * @cmp: function to compare values
 *
 * Return: index of the first element for which cmp does not return 0,
 * or -1 if no element is found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array && cmp && size > 0)
    {
        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]))
                return (i);
        }
    }

    return (-1);
}
