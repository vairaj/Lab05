//Jasmine Vaira
//COSC 2030 FALL 2018
// LAB 5
#pragma once
#include "stdafx.h"
#include <vector>
#include <list>
using namespace std;

class MyStack
{
	//vector<char> data;
	list<char> data;
public:
	bool isEmpty() const;
	void push(char& c);
	char pull();
};
