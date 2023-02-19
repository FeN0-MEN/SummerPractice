#include "Node.h"
#include <iostream>

using namespace System;
/// <summary>
/// 
/// </summary>
/// <typeparam name="T"></typeparam>
generic <class T>
Node<T>::Node() { }

generic <class T>
Node<T>::Node(T _data)
{
	data = _data;
}