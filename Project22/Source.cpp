#include <iostream>
#include "Abonent.h"
#include "List.h"
#include "Func.h"
using namespace std;

int main()
{
	Contact obj1("Nikita", 123);
	Contact obj2("Mohseni", 2321);
	Contact obj3("Sofiani", 34234);
	List<Contact>c_list;
	c_list.Add(obj1);
	c_list.Add(obj2);
	c_list.Add(obj3);
	c_list.Save();
	search_by_num(2321);
}