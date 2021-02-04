#include <memory>
#include <iostream>
#include "BookShelf.h"

int main(void){
    BookShelf bookShelf = BookShelf();
    bookShelf.appendBook(Book("Arround the World in 80 Days"));
    bookShelf.appendBook(Book("Bible"));
    bookShelf.appendBook(Book("Cinderella"));
    bookShelf.appendBook(Book("Daddy-Long-Legs"));
    auto it = bookShelf.iterator();
    while(it->hasNext()){
        auto pBook = (it->next());
        std::cout << "* " << static_cast<Book*>(pBook.get())->getName() << std::endl;
    }
    return 0;
}