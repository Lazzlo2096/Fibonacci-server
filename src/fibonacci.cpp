#include <iostream>

int getFibonacci(int n) //Начинаем с 0
{
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else 
		return getFibonacci(n-1)+getFibonacci(n-2);
}

int main()
{
	std::cout << getFibonacci(6) << std::endl;
	
	return 0;
}
