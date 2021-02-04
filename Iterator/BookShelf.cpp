#include "BookShelf.h"
#include "BookShelfIterator.h"

Book BookShelf::getBookAt(int index){
    return m_vecBooks.at(index);
}

void BookShelf::appendBook(const Book &book){
    m_vecBooks.push_back(book);
    last++;
}

int BookShelf::getLength(){
    return last;
}

std::shared_ptr<Iterator> BookShelf::iterator(){
    return std::make_shared<BookShelfIterator>(*this);
}