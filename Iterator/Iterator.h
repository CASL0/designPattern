#pragma once
#include <memory>

class Iterator{
public:
    virtual ~Iterator() = default;
    virtual bool hasNext() = 0;
    virtual std::shared_ptr<void> next() = 0;
};