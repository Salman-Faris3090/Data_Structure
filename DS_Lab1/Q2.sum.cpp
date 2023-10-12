#include<iostream>
int sum(int n)
{
	if (n>=10)
		return (n%10) + sum(n/10);
	else
		return n;
}
int main()
{
	int n;
	std::cout<<"Enter the number to find it's sum: ";
	std::cin>>n;
	std::cout<<"The sum of digits of the number is: "<<sum(n)<<std::endl;
	return 0;
}

/* Input
 * 12345
 * Output
 * Enter the number to find it's sum: 12345
 * The sum of digits of the number is: 15
 * */
