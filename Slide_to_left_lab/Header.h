#pragma once

class Header {

public:

    int* array_shift(int arr[], int size, int shifts)
    {

        int* n_arr = new int[size];

        for (int j = 0; j < size; j++)
        {

            n_arr[j] = arr[(j + shifts) % size];

        }

        return n_arr;

    }





};
