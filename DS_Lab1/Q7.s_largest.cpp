#include <iostream>

void read_arr(int *arr, int n){
    std::cout << "Enter elements of array " << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
}

void sec_max(int *arr, int n){
    int max = arr[0];
    int sec_max;
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] > sec_max){
            sec_max = arr[i];
        }
    }
    std::cout << sec_max << " is the second largest element from the array" << std::endl;
}

int main()
{
    int *arr;
    int n;
    std::cout << "Enter size of array: ";
    std::cin >> n;
    arr = new int[n];
    read_arr(arr, n);
    sec_max(arr, n);
    return 0;
}

/* Input
 *5
 12
 34
 52
 23
 1
 Output
 Enter the size of array: 5
 Enter elements of array
 12
 34
 51
 23
 1
 34 is the second largest element from the array
 */
