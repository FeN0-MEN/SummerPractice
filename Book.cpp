#include "Book.h"
#include <iostream>

using namespace System;
// Основной объект книги
Book::Book()
{

}

Book::Book(String^ _name, String^ _author,
	String^ _publisher, String^ _libSection,
	String^ _origin, int _rating, bool _exists)
{
	name = _name;
	author = _author;
	publisher = _publisher;
	libSection = _libSection;
	origin = _origin;
	rating = _rating;
	exists = _exists;
}
