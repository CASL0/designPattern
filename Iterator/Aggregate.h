#pragma once
#include "Iterator.h"
#include <memory>

class Aggregate{
public:
    virtual ~Aggregate() = default;
    virtual std::shared_ptr<Iterator> iterator() = 0;
};