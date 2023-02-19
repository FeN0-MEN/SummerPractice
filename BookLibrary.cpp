#include "BookLibrary.h"

using namespace System;
// Добавление
void BookLibrary::addBook(Book^ _book)
{
	books->add(_book);
}
// Удаление
void BookLibrary::deleteBook(Book^ _book)
{
	books->remove(_book);
}
// Для вывода в консоль
System::Collections::Generic::List<Book^>^ BookLibrary::toList()
{
	return books->toBuiltInList();
}

// поиск по заданным параметрам
List<Book^>^ BookLibrary::find(String^ searchName)
{
	List<Book^>^ foundItems = gcnew List<Book^>();

	for (int i = 0; i < books->toBuiltInList()->Count; i++)
	{
		if (books->toBuiltInList()[i]->name == searchName)
		{
			foundItems->Add(books->toBuiltInList()[i]);
		}
	}

	return foundItems;
}
// Поиск
List<Book^>^ BookLibrary::find(String^ searchAuthor, String^ searchPublisher, String^ searchOrigin, String^ selectedParameter)
{
	List<Book^>^ foundItems = gcnew List<Book^>();

	if (selectedParameter == "Автор")
	{
		for (int i = 0; i < books->toBuiltInList()->Count; i++)
		{
			if (books->toBuiltInList()[i]->author == searchAuthor)
			{
				foundItems->Add(books->toBuiltInList()[i]);
			}
		}
	}
	else if (selectedParameter == "Издательство")
	{
		for (int i = 0; i < books->toBuiltInList()->Count; i++)
		{
			if (books->toBuiltInList()[i]->publisher == searchPublisher)
			{
				foundItems->Add(books->toBuiltInList()[i]);
			}
		}
	}
	else if (selectedParameter == "Происхождение")
	{
		for (int i = 0; i < books->toBuiltInList()->Count; i++)
		{
			if (books->toBuiltInList()[i]->origin == searchOrigin)
			{
				foundItems->Add(books->toBuiltInList()[i]);
			}
		}
	}

	return foundItems;
}

List<Book^>^ BookLibrary::find(int searchRating)
{
	List<Book^>^ foundItems = gcnew List<Book^>();

	for (int i = 0; i < books->toBuiltInList()->Count; i++)
	{
		if (books->toBuiltInList()[i]->rating == searchRating)
		{
			foundItems->Add(books->toBuiltInList()[i]);
		}
	}

	return foundItems;
}

List<Book^>^ BookLibrary::find(String^ section, String^ existance, String^ selectedParameter)
{
	List<Book^>^ foundItems = gcnew List<Book^>();

	if (selectedParameter == "Раздел")
	{
		for (int i = 0; i < books->toBuiltInList()->Count; i++)
		{
			if (books->toBuiltInList()[i]->libSection == section)
			{
				foundItems->Add(books->toBuiltInList()[i]);
			}
		}
	}
	else if (selectedParameter == "Наличие")
	{
		if (existance == "да")
		{
			for (int i = 0; i < books->toBuiltInList()->Count; i++)
			{
				if (books->toBuiltInList()[i]->exists == true)
				{
					foundItems->Add(books->toBuiltInList()[i]);
				}
			}
		}
		else if (existance == "нет")
		{
			for (int i = 0; i < books->toBuiltInList()->Count; i++)
			{
				if (books->toBuiltInList()[i]->exists == false)
				{
					foundItems->Add(books->toBuiltInList()[i]);
				}
			}
		}
	}

	return foundItems;
}
// Удаление всех объектов
void BookLibrary::deleteAll()
{
	books->clear();
}

// ENCAPSULATES LINKED LIST DEBUG
void BookLibrary::printLib()
{
	books->printListDebug();
}

