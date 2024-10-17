
#include <iostream>
#include <cassert>
#include <vector>
#include <string>
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
    int *n_arr = object.array_shift_left(arr, size, shifts);
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
    int* n_arr2 = object1.array_shift_left(arr, size, shifts2);
    int e_arr2[5] = { 6,2,3,4,5 };
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
    int* n_arr3 = object3.array_shift_left(arr, size, shifts3);
    int e_arr3[5] = { 2,3,4,5,6 };
    int e_size3 = sizeof(e_arr3) / sizeof(e_arr3[0]);

    for (int j = 0; j < e_size3; j++)
    {
        for (int i = 0; i < size; i++)
        {
            assert(n_arr3[i] = e_arr3[j]);
        }

    }
    cout << "\nTest succeeded! with an expected array of {2,3,4,5,6} " << endl;
 

    // Test for rigth shift
    cout << "\n\nTesting the output for a shift of 2 to th right...";
    int* ne = object.array_shift_right(arr, size, shifts);
    int arr2[5] = {5,6,2,3,4};
    int _size = sizeof(arr2) / sizeof(arr2[0]);

    for (int j = 0; j < _size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            assert(ne[i] = arr2[j]);
        }

    }
    cout << "\nTest succeeded! with an expected array of {5,6,2,3,4} ";

  
    cout << "\n\nTest for vector function to shift items to the left...";
    cout << "\nOriginal array: {1,2,3,4}";
    Header object4;
    int _numberShifts = 2;
    vector<int> _numberList = {1,2,3,4};
    vector<int> _listshifted = object4.vector_shift(_numberList, _numberShifts);
    vector <int> compared = { 3,4,1,2 };

    for (int l = 0; l < _listshifted.size(); l++)
    {
        for (int i = 0; i < _listshifted.size(); i++)
        {
            assert(_listshifted[l] = compared[i]);
        }

    }
    cout << "\nTest succeeded! with an expected vector of {3,4,1,2}" << endl;
   

    
    




    delete[] n_arr;
    delete[] n_arr2;
    delete[] n_arr3;
    delete[] ne;
  
    return 0;

}

