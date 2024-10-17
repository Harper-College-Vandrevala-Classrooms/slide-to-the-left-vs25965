#pragma once
#include <vector>
#include <string>

using namespace std;

class Header {

public:

 vector<int> vector_shift(vector<int> _vectorlist, int _numberShifts) {
        vector<int> _listshifted = _vectorlist ;
        int _size = _vectorlist.size();
        int limitshift = _numberShifts % _size;

   for (int n = 0; n < _size; n++)
        {
           _listshifted[n] = _vectorlist[(n + limitshift) % _size];
        }
       

        return _listshifted;

    }
    

    int* array_shift_left(int arr[], int size, int shifts)
    {

        int* n_arr = new int[size];

        for (int j = 0; j < size; j++)
        {

            n_arr[j] = arr[(j + shifts) % size];

        }

        return n_arr;

    }


    int* array_shift_right(int arr[], int size, int shifts)
    {

        int* n_arr = new int[size];

        for (int j = 0; j < size; j++)
        {

            n_arr[j] = arr[(j - shifts) % size];

        }

        return n_arr;

    }






};
