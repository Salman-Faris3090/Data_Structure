#include<iostream>                                                                                
int factorial (int n)
{
	if(n>1)
		return n*factorial(n-1);
	else
		return 1;
}
int main()
{
	int n;
	std::cout << "Enter the number to find Factorial: ";
	std::cin >> n;
	std::cout << "Factorial of "<< n << " = " << factorial(n) << std::endl;
	return 0;
}
  /* Input
    5
   *Output 
   Enter the number to find Factorial: 5
   Factorial of 5 = 120
   */
