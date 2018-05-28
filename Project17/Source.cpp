#include <exception>
#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <memory>
#include "Stack.h"


void test_push() {
	Stack<int> x;
	x.push(5);
	x.push(5);
	x.push(5);
	x.push(5);
	x.push(5);
	try {
		x.push(5);
	}
	catch (const StackOverFlow & e)
	{
		assert(e.what() == "stackoverflow");
	}
}

void global_testing(void(*tested_function)(void))
{
	tested_function();
}


void main()
{
	Stack<int> h ;
	std::vector<void(*)(void)> tests = { test_push };
	for (auto test : tests)
	{
		global_testing(test);
	}
	/*Stack <int> a(std::initializer_list<int> {10, 21, 1});
	a.push(6);
	a.pop();
	a.peek();
	for (int i = 0; i <= a.count(); i++)
	{
		std::cout << a.data[i] << std::endl;
	}
	std::cout << a.count();
	a.count();
	std::cout << std::endl;
	std::cout << a.CheckStackFull() << std::endl;
	std::cout << a.CheckStackEmpty();*/
	system("pause");
}

//int DivInt(int j, int i)
//{
//	if (i == 0)
//	{
//		throw std::exception("Something go wrong");
//	}
//	else
//	{
//		return j / i;
//	}
//
//}
//
//int StringToInt(std::string s)
//{
//	int number = 0;
//	for (int i = 0; i < s.length(); i++)
//	{
//		number =number+((int)(s[i]-48)*pow(10,(s.length()-1-i)));
//	}
//	if (number> 2147483647 || number <0)
//	{
//		throw std::exception("Out of range");
//	}
//	else
//	{
//		return number;
//	}
//	
//}
//
//void main() {
//	int i=0, j = 5;
//	std::string number = "12361231213";
//	try
//	{
//		std::cout<< StringToInt(number);
//
//	}
//	catch (const std::exception & e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	system("pause");
//}