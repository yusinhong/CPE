// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int n, m;
char line[100][101];
int ans[100][100];
int field = 0;

void input()
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		
		for (j = 0; j < m; j++)
		{
			cin >> line[i][j];
			ans[i][j]=0;
		}
	}
}

void add(int i, int j)
{
	int ii, jj;
	for (ii = i - 1; ii <= i + 1; ii++)
	{
		for (jj = j - 1; jj <= j + 1; jj++)
		{
			if (ii < 0 || ii >= n || jj < 0 || jj >= m)
			{
				continue;
			}
			ans[ii][jj]++;
		}
	}
}

void output()
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (line[i][j] == '*')
			{
				add(i, j);
			}
		}
	}
	if (field > 1)
	{
		cout << endl;
	}
	cout << "Field #" << field << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (line[i][j] == '*')
			{
				cout << '*';
			}
			else
			{
				cout << ans[i][j];
			}
		}
		cout << endl;
	}
}

int main(void)
{
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}
		input();
		field++;
		output();
	}
	return 0;
}
