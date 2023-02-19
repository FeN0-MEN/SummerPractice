#pragma once
#include "Node.h"
#include <iostream>

using namespace System;
using namespace System::Diagnostics;

generic <typename T>
ref class SinglyLinkedList
{
public:
	void add(T data); // добавление элемента
	bool remove(T data); // удаление элемента 
	bool isEmpty(); // проверка на наличие элементов в списке
	int getSize(); // получение размера списка
	void printList(); // печать списка (метод для теста)
	bool contains(T data);
	void clear();

	// TO DEBUG
	void printListDebug();
	System::Collections::Generic::List<T>^ toBuiltInList(); // преобразование в список List<T>
private:
	Node<T>^ head; // головной элемент
	Node<T>^ tail; // хвостовой элемент
	int count; // количество элементов в списке
};
