#include<iostream>
void convert(int n){
    if (n>0)
    {
        convert(n/2);
	std::cout<<n%2;
    }
}

int main(){
    int n;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    std::cout<<" Corresponding binary number of "<<n<<" is ";
    if (n == 0) {
        std::cout << "0";
    } else {
        convert(n);
	std::cout<<std::endl;
    }
    return 0;
}
/* Input
 * 123
 * Output
 * Enter a number : 123
 * Corresponding binary number of 123 is 1111011
 * */
