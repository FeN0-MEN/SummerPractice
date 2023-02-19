#pragma once
#include "Book.h"
#include "SinglyLinkedList.h"

using namespace System;
using namespace System::Collections::Generic;

ref class BookLibrary
{
public:
	BookLibrary() { }
	void addBook(Book^ _book); // добавление книги в связный список
	void deleteBook(Book^ _book); // удаление книги из связного списка
	void printLib(); // вывод книги в консоль (на первых этапах, чтобы быстрее)
	void deleteAll(); // удаление объектов
	System::Collections::Generic::List<Book^>^ toList();
	List<Book^>^ find(String^ searchName); // поиск по имени
	List<Book^>^ find(String^ searchAuthor, String^ searchPublisher, String^ searchOrigin, String^ selectedParameter); // поиск по автору, или издательству, или происхождению
	List<Book^>^ find(int searchRating); // поиск по оценке
	List<Book^>^ find(String^ section, String^ existance, String^ selectedParameter); // поиск по разделу или наличию
	SinglyLinkedList<Book^>^ books = gcnew SinglyLinkedList<Book^>; // односвязный список, содержащий объекты книги
};
