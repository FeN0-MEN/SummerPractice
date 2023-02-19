#include "FunctionalViewModel.h"
#include "ViewModel.h"

void FunctionalViewModel::addEntity(String^ _name, String^ _author,
    String^ _publisher, String^ _libSection,
    String^ _origin, int _rating, bool _existance)
{
    // создание объекта класса Book
    Book^ book = gcnew Book(_name, _author, _publisher,
        _libSection, _origin, _rating, _existance);

    // добавление объекта класса Book в объект класса BookLibrary
    ViewModel::bookLibrary->addBook(book);
}
// изменение объектов
void FunctionalViewModel::updateEntity(Book^ _item, String^ _bookName, 
    String^ _authorName, String^ _publisherName, String^ _librarySection,
    String^ _bookOrigin, int _bookRating, bool _bookExistance)
{
    _item->name = _bookName;
    _item->author = _authorName;
    _item->publisher = _publisherName;
    _item->libSection = _librarySection;
    _item->origin = _bookOrigin;
    _item->rating = _bookRating;
    _item->exists = _bookExistance;
}
// Удаление объектов
void FunctionalViewModel::deleteEntity(Book^ _item)
{
    ViewModel::bookLibrary->deleteBook(_item);
}
// Сохранить в файл
void FunctionalViewModel::saveToJsonFile(String^ _filename)
{
    File::WriteAllText(_filename, 
        JsonConvert::SerializeObject(ViewModel::bookLibrary->toList(), Formatting::Indented));
}
// дессириализация данных в файл
List<Book^>^ FunctionalViewModel::deserializeFromJson(String^ _filename)
{
    List<Book^>^ books = ViewModel::bookLibrary->toList();
    ViewModel::bookLibrary->deleteAll();
    books = JsonConvert::DeserializeObject<List<Book^>^>(File::ReadAllText(_filename));

    return books;
}
// дессириализация
void FunctionalViewModel::addDeserializedData(List<Book^>^ _books)
{
    for (int i = 0; i < _books->Count; i++)
    {
        ViewModel::bookLibrary->addBook(_books[i]);
    }
}
