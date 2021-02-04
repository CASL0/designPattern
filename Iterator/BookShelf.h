#pragma once
#include <vector>
#include "Book.h"
#include "Aggregate.h"

class BookShelf : public Aggregate{
private:
    std::vector<Book> m_vecBooks;
    int last;
public:
    ~BookShelf() = default;
    BookShelf() : m_vecBooks(std::vector<Book>()), last(0){};
    explicit BookShelf(int maxSize) : m_vecBooks(std::vector<Book>(maxSize)), last(0){};
    Book getBookAt(int index);
    void appendBook(const Book &book);
    int getLength();
    std::shared_ptr<Iterator> iterator() override;
};