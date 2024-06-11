#include <iostream>
#include <map>

int* obtenerModa(int arr[], int size)
{
    std::map<int, int> frequencyMap;

    for (int i = 0; i < size; i++)
    {
        frequencyMap[arr[i]]++;
    }

    int moda = 0;
    int maxFrequency = 0;
    for (auto pair : frequencyMap)
    {
        if (pair.second > maxFrequency)
        {
            moda = pair.first;
            maxFrequency = pair.second;
        }
    }

    int* result;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == moda)
            result = &arr[i];
    }
    return(result);
}

int main()
{
    int* result;
    int arr1[5] = {1, 2, 2, 2, 3};
    int arr2[7] = {1, 2, 2, 2, 3, 3 ,3};
    int arr3[1] = {3};
    int arr4[10] = {1, 2, 2, 2, 3, 4, 5, 5, 5, 5};
    int arr5[10] = {1, 1, 2, 2, 3, 3, 4, 4, 4, 4};
    int arr6[10] = {};

    result = obtenerModa(arr6, 10);
    std::cout << "Resultado: " << *result << std::endl;
}