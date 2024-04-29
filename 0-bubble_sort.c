#include "sort.h"

void swap_ints(int *a, int *b)
{
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}



void bubble_sort(int *array, size_t size) {

    if (size < 2 || array == NULL)
            return;

    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap_ints(array + j, array + j + 1);
                print_array(array, size);
            }
        }
    }
}
