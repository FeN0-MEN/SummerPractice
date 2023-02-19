#pragma once
#include <iostream>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

ref class Book
{
public:
	// конструкторы
	Book(String^ _name, String^ _author,
		String^ _publisher, String^ libSection,
		String^ _origin, int _rating, bool _exists);
	Book();
	// переопределение метода System::ToString() для отображения данных объекта
	virtual String^ ToString() override
	{
		return "Название: " + this->name
			+ " Автор: " + this->author
			+ " Издательство: " + this->publisher
			+ " Раздел библиотеки: " + this->libSection
			+ " Происхождение: " + this->origin
			+ " Оценка: " + this->rating
			+ " Наличие: " + this->exists;
	}
	// поля класса
	String^ name; // название книги
	String^ author; // автор книги
	String^ publisher; // издательство
	String^ libSection; // раздел библиотеки
	String^ origin; // происхождение книги
	int rating; // субъективная оценка книги
	bool exists; // маркер о наличии/отсутствии книги
};

