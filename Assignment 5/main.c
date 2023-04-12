#include <stdio.h>
#include "hash.h"

int main()
{
    int input[] = { 764, 35954, 8683, 41, 11004, 1362, 77, 1, 448, 118, 5507 };
    int M = 11;
    int R = 7;
    int hashTable[11];

    hashInit(hashTable, input, M, R);

    for (int i = 0; i < M; i++)
        printf("hashTable[%d] = %d\n", i, hashTable[i]);

    return 0;
}
