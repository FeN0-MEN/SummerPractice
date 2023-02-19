#pragma once
#include <iostream>

using namespace System;

generic <typename T>
ref class Node
{
public:
	T data; // ссылка на данные
	Node<T>^ next; // ссылка на следующий узел

	// конструкторы
	Node();
	Node(T _data);
};
