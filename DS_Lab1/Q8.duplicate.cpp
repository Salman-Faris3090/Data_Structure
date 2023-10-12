#include <iostream>
#include <set>

void read_arr(char *arr, int n){
    int count = 0;
    std::cout << "Enter the array Elements " << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
}

void dupe_count(char *arr, int n){
    int count = 0;
    std::set <char> frequency;
    for (int i = 0; i < n; i++){
        if (frequency.count(arr[i])) count++;
        else frequency.insert(arr[i]);
    }
    std::cout << count << " Duplicate letters found in array " << std::endl;
}
    
int main()
{
    char *arr;
    int n;
    std::cout << "Enter size of array: ";
    std::cin >> n;
    arr = new char[n];
    read_arr(arr, n);
    dupe_count(arr, n);
    return 0;
}

/* Input
 * 5
 * f
 * a
 * r
 * i
 * s
 * Output
 * Enter size of array: 5
 * Enter the array Elements
 * f
 * a
 * r
 * i
 * s
 * 0 duplicate letters found in array
 * */
