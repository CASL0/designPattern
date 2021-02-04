#include "BookShelfIterator.h"

bool BookShelfIterator::hasNext(){
    return m_index < m_bookShelf.getLength() ? true : false;
}

std::shared_ptr<void> BookShelfIterator::next()
{
    Book currentBook = m_bookShelf.getBookAt(m_index);
    m_index++;
    return std::shared_ptr<void>(new Book(currentBook));
}