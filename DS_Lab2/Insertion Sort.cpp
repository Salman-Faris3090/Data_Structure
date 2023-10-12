#include <iostream>

void insertionSort(unsigned int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        while (j >= 0 && array[j] < array[j + 1])
        {
            std::swap(array[j], array[j + 1]);
            j--;
        }
    }
}

void printArray(unsigned int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void getArray(unsigned int array[], int n)
{
    std::cout << "Enter elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}
int main()
{
    int n;
    std::cout << "Enter size of array: ";
    std::cin >> n;
    unsigned int array[n];
    getArray(array, n);
    insertionSort(array, n);
    printArray(array, n);
    return 0;
}