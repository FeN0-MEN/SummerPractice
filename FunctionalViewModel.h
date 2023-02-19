#pragma once
#include "Book.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace Newtonsoft::Json;
using namespace System::IO;

ref class FunctionalViewModel
{
public:
	// добавление
	static void addEntity(String^ _name, String^ _author, 
		String^ _publisher, String^ _libSection, 
		String^ _origin, int _rating, bool _existance);
	// редактирование
	static void updateEntity(Book^ _item, String^ _bookName,
		String^ _authorName, String^ _publisherName, String^ _librarySection,
		String^ _bookOrigin, int _bookRating, bool _bookExistance);
	// удаление
	static void deleteEntity(Book^ item);
	// сохранение в JSON файл
	static void saveToJsonFile(String^ _filename);
	// десерализация из JSON
	static List<Book^>^ deserializeFromJson(String^ _filename);
	// получение десериализованных данных
	static void addDeserializedData(List<Book^>^ _books);
};

