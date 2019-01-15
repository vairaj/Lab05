//Jasmine Vaira
//COSC 2030 FALL 2018
//LAB 5

#include "stdafx.h"
#include "Lab5MyStack.h"

bool MyStack::isEmpty() const
{
	if (MyStack::data.empty() == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void MyStack::push(char& c)
{
	MyStack::data.push_back(c);
}

char MyStack::pull()
{
	char x = MyStack::data.back();
	MyStack::data.pop_back();
	return x;
}