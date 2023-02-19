#pragma once
#include "Book.h"
#include "BookLibrary.h"
#include "SinglyLinkedList.h"

using namespace System;

// ViewModel для связи объекта BookLibrary со всеми окнами приложения
ref class ViewModel
{
// Создание класса
public:
	static BookLibrary^ bookLibrary = gcnew BookLibrary();
};

