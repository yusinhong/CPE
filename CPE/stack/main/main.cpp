#include "stdafx.h"
#include"Stack.h"
#include<iostream>
int main()
{
	int i;
	CStack<int>stack;
	for (i = 0; i < 50; i++)
	{
		stack.PushBack(i);
	}
	for (i = 0; i < 50; i++)
	{
		std::cout << stack.PopBack() << "\t";
	}
	return 0;
}

