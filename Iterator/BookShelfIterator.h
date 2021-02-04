#pragma once
#include "Iterator.h"
#include "BookShelf.h"

class BookShelfIterator : public Iterator{
private:
    BookShelf m_bookShelf;
    int m_index;
public:
    ~BookShelfIterator() = default;
    explicit BookShelfIterator(const BookShelf &bookShelf) : m_bookShelf(bookShelf), m_index(0){};
    bool hasNext() override;
    std::shared_ptr<void> next() override;
};