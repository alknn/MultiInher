#pragma once

#ifndef _Multiple_Inheritance_H
#define _Multiple_Inheritance_H
#include <iostream>

class A
{
public:
	void operator()(int)
	{
		std::cout << "A int " << std::endl;
	}


};

class B
{
public:
	void operator()(double)
	{
		std::cout << "B double " << std::endl;
	}


};

class C
{
public:
	void operator()(float)
	{
		std::cout << "C float" << std::endl;
	}


};

template < typename ...Tm>
struct OverloadClass : Tm...
{
	using Tm::operator()...;
};


#endif // _Multiple_Inheritance_H