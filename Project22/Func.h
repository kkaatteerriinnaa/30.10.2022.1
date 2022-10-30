#pragma once
#include <iostream>
#include "Abonent.h"
#include "List.h"
using namespace std;

void Load()
{
	fstream obj;
	obj.open("Phones.txt");
	const int size = 300;
	char buf[size] = {};
	do
	{
		obj.getline(buf, size);
		cout << buf << endl;
	} while (obj);
	obj.close();
}

void search_by_name(const char* a)
{
	fstream in;
	in.open("Phones.txt");
	cout << "Here's what we found:\n";
	const int size = 300;
	char buf[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Name:";
		if (strstr(buf, check))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf << endl;
				in.getline(buf, size);
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void search_by_num(int a)
{
	fstream in;
	in.open("Phones.txt");
	cout << "Here's what we found:\n";
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	char buf_num[size] = {};
	sprintf(buf_num, "%d", a);
	do
	{
		in.getline(buf, size);
		const char check[] = "Name:";
		const char check2[] = "Number:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, buf_num))
			{
				cout << "\n";
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}
