#include "hash.h"

#include <stdio.h>

int h1(int k, int M)
{
    return k % M;
}

int h2(int k, int R)
{
    return R - (k % R);
}

void hashInit(int* hashTable, int* input, int M, int R)
{
    int i, j, k, idx;

    for (i = 0; i < M; i++)
        hashTable[i] = -1;

    for (j = 0; j < M; j++)
    {
        k = input[j];
        idx = h1(k, M);

        if (hashTable[idx] == -1)
            hashTable[idx] = k;
        else
        {
            for (i = 1; i <= M; i++)
            {
                idx = (h1(k, M) + i * h2(k, R)) % M;

                if (hashTable[idx] == -1)
                {
                    hashTable[idx] = k;
                    break;
                }
            }
        }
    }
}

