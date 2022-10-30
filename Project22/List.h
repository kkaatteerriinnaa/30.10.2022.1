#pragma once
#include <iostream>
#include "Abonent.h"
#include <fstream>
using namespace std;

template<class T>
struct Element
{
    T data;
    Element<T>* Next;
};

template<class T>
class List
{
    Element<T>* Head;
    Element<T>* Tail;
    int Count;

public:
    List();
    ~List();
    void Add(T data);
    void Del();
    void DelAll();
    void Print();
    void Save();
};

template<class T>
List<T>::List()
{
    Head = Tail = NULL;
    Count = 0;
}

template<class T>
List<T>::~List()
{
    DelAll();
}

template<class T>
void List<T>::Add(T data)
{
    Element<T>* temp = new Element<T>;

    temp->data = data;
    temp->Next = NULL;
    if (Head != NULL) {
        Tail->Next = temp;
        Tail = temp;
    }
    else {
        Head = Tail = temp;
    }
    Count++;
}

template<class T>
void List<T>::Del()
{
    Element<T>* temp = Head;
    Head = Head->Next;
    delete temp;
}

template<class T>
void List<T>::DelAll()
{
    while (Head != 0)
        Del();
}

template<class T>
void List<T>::Print()
{
    for (auto temp = Head; temp != 0; temp = temp->Next)
    {
        temp->data.Print();
        cout << endl;
    }
}

template<class T>
void List<T>::Save()
{
    for (auto temp = Head; temp != 0; temp = temp->Next)
    {
        temp->data.Save();
    }
}
