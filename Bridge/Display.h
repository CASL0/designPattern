#pragma once
#include <memory>
#include "DisplayImpl.h"

class CDisplay
{
private:
    std::shared_ptr<IDisplayImpl> pimpl;
public:
    explicit CDisplay(std::shared_ptr<IDisplayImpl> impl) : pimpl(impl){}
    virtual void open();
    virtual void print();
    virtual void close();
    virtual void display() final;
    virtual ~CDisplay() = default;
};