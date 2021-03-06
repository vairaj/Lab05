//Jasmine Vaira
//COSC 2030 FALL 2018
//LAB 5

#include "stdafx.h" //important stuff
#include "Lab5MyStack.h"
#include <iostream> 
#include <string>	//so I can use the string. 
#include <stack> //so I can use stack
#include <vector> //so I can use vector
#include <list> //so I can use list
using namespace std;

string stringReversal1(string input)
{
	cout << input << endl;
	stack<char> n;
	string output = "";

	if (input != "")
	{
		for (string::size_type i = 0; i < input.size(); i++)
		{
			n.push(input[i]);
		}
		while (!n.empty())
		{
			output = output + n.top();
			n.pop();
		}
	}
	return output;
}

string stringReversal2(string input)
{
	cout << input << endl;
	vector<char> n;
	string output = "";

	if (input != "")
	{
		for (string::size_type i = 0; i < input.size(); i++)
		{
			n.push_back(input[i]);
		}
		while (!n.empty())
		{
			output = output + n.back();
			n.pop_back();
		}
	}
	return output;
}

string stringReversal3(string input)
{
	cout << input << endl;
	list<char> n;
	string output = "";

	if (input != "")
	{
		for (string::size_type i = 0; i < input.size(); i++)
		{
			n.push_back(input[i]);
		}
		while (!n.empty())
		{
			output = output + n.back();
			n.pop_back();
		}
	}
	return output;
}

string stringReversal4(string input)
{
	MyStack n;
	cout << input << endl;
	string output = "";
	if (input != "")
	{
		for (string::size_type i = 0; i < input.size(); i++)
		{
			n.push(input[i]);
		}
		while (!n.isEmpty())
		{
			output = output + n.pull();
		}
	}
	return output;
}


int main()
{
	string n = "hey there";

	cout << stringReversal1(n) << endl << endl;
	cout << stringReversal2(n) << endl << endl;
	cout << stringReversal3(n) << endl << endl;
	cout << stringReversal4(n) << endl << endl;

	system("pause"); //don't close until user pushes a key
    return 0;
}

