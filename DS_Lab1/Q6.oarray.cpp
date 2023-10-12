#include <iostream>

void create_ary(int *ary, int n);
void print_ary(int *ary, int n);
void search_ary(int *ary, int n, int elem);
void get_max(int *ary, int n);
void get_min(int *ary, int n);

int main(){
    int *ary;
    int n;
    int choice;
    std::cout<<"\n###***** Available Array Operations *****###"<<std::endl;
    std::cout<<"\n1. Enter size and elements of array"<<std::endl;
    std::cout<<"2. Print elements of array"<<std::endl;
    std::cout<<"3. Search an element in array"<<std::endl;
    std::cout<<"4. Print largest and smallest element of array"<<std::endl;
    std::cout<<"5. Exit"<<std::endl;
    do{
        std::cout<<"\nEnter choice: ";
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            std::cout<<"Enter size of array: ";
            std::cin>>n;
            ary=new int[n];
            create_ary(ary, n);
            break;
        
        case 2:
            std::cout<<"Elements of array"<<std::endl;
            print_ary(ary, n);
            break;
        case 3:
            int element;
            std::cout<<"Enter element to search: ";
            std::cin>>element;
            search_ary(ary, n, element);
            break; 
        case 4:
            get_max(ary, n);
            get_min(ary, n);
            break;
        case 5:
            std::cout<<"Exited!"<<std::endl;
            break;
        default:
            std::cout<<"Wrong choice entered"<<std::endl;
            break;
        }
    }while(choice != 5);
    return 0;
}

void create_ary(int *ary, int n)
{
    std::cout<<"Enter elements of array "<<std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cin>>ary[i];
    }
    std::cout<<"Array of size "<<n<<" is created"<<std::endl;
}

void print_ary(int *ary, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<ary[i] << " ";
    }
    std::cout<<std::endl;
}

void search_ary(int *ary, int n, int element)
{
    bool found=0;
    for (int i = 0; i < n; i++)
    {
        if (ary[i]= element)
	{
            found = 1;
            std::cout<<"Element Found."<<std::endl;
            break;
        }
    }
    if (found == 0) std::cout<<"Element Not Found."<<std::endl;
}

void get_max(int *ary, int n)
{
    int max = ary[0];
    for (int i = 1; i < n; i++)
    {
        if (ary[i] > max)
	{
            max = ary[i];
        }
    }
    std::cout<<max<<" is the largest element of the array."<<std::endl;
}

void get_min(int *ary, int n)
{
    int min = ary[0];
    for (int i = 1; i < n; i++)
    {
        if (ary[i] < min)
	{
            min=ary[i];
        }
    }
    std::cout<<min<<" is the smallest element of the array."<<std::endl;
}
/* Input and Output
 * ###***** Available Array operations *****###
 *
 * 1. Enter size and elements of array
 * 2. Print elements of array
 * 3. Search an element in array
 * 4. Print largest ang smallest element of array
 * 5. Exit
 *
 * Enter choice: 1
 * Enter size of array: 5
 * Enter elements of array
 * 1
 * 2
 * 3
 * 4
 * 5
 * Array of size 5 is created
 *
 * Enter choice: 2
 * Elements of array
 * 1 2 3 4 5
 *
 * Enter choice: 3
 * Enter element to search: 1
 * Element Found.
 *
 * Enter choice: 4
 * 5 is the largest element of the array.
 * 1 is the smallest of the array.
 *
 * Enter choice: 5
 * Exited!
 * */
