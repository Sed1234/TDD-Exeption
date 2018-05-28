#pragma once
#include <exception>
class StackOverFlow : std::exception
{
public:
	char const* what() const override final
	{
		return "Please contact administrator";
	}
	StackOverFlow();
	~StackOverFlow();
};

