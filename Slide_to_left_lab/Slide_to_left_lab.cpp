
#include <iostream>
#include <cassert>
#include "Header.h"

using namespace std;


int main()
{
    

    int arr[5] = {2,3,4,5,6};
    int size = sizeof(arr)/ sizeof(int);
    int shifts = 2;

   
    cout << "\nThis is the original array: {2,3,4,5,6} ";

    Header object;
    cout << "\n\nTesting the output after 2 shifts to the left... ";
    int *n_arr = object.array_shift(arr, size, shifts);
    int e_arr[5] = {4,5,6,2,3};
    int e_size = sizeof(e_arr) / sizeof(e_arr[0]);

    for (int j = 0; j < e_size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            assert(n_arr[i] = e_arr[j]);
        }

    }
    cout << "\nTest succeeded! with an expected array of {4,5,6,2,3} ";


    Header object1;
    cout << "\n\nTesting the output for a shift of 4... ";
    int shifts2 = 4;
    int* n_arr2 = object1.array_shift(arr, size, shifts2);
    int e_arr2[5] = {6,2,3,4,5};
    int e_size2 = sizeof(e_arr2) / sizeof(e_arr2[0]);

    for (int j = 0; j < e_size2; j++)
    {
        for (int i = 0; i < size; i++)
        {
            assert(n_arr2[i] = e_arr2[j]);
        }

    }
    cout << "\nTest succeeded! with an expected array of {6,2,3,4,5} " << endl;

    Header object3;
    cout << "\n\nTesting the output for a shift of 5... ";
    int shifts3 = 5;
    int* n_arr3 = object1.array_shift(arr, size, shifts3);
    int e_arr3[5] = {2,3,4,5,6};
    int e_size3 = sizeof(e_arr3) / sizeof(e_arr3[0]);

    for (int j = 0; j < e_size3; j++)
    {
        for (int i = 0; i < size; i++)
        {
            assert(n_arr3[i] = e_arr3[j]);
        }

    }
    cout << "\nTest succeeded! with an expected array of {2,3,4,5,6} " << endl;

    Header object4;
    cout << "\n\nFor the last test, This is the original array: {20,30,40} ";
    cout << "\nTesting the output for a shift of 3... ";
    int shifts4 = 2;
    int arr4[3] = {20,30,40};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int* n_arr4 = object1.array_shift(arr4, size4, shifts4);
    int e_arr4[3] = {40,20,30};
    int e_size4 = sizeof(e_arr4) / sizeof(e_arr2[0]);

    for (int j = 0; j < e_size4; j++)
    {
        for (int i = 0; i < size4; i++)
        {
            assert(n_arr4[i] = e_arr4[j]);
        }

    }
    cout << "\nTest succeeded! with an expected array of {40,20,30}" << endl;






    delete[] n_arr;
    delete[] n_arr2;
    delete[] n_arr3;
    delete[] n_arr4;
    return 0;

}

