#pragma once
#include <string>
class IProduct{
public:
    virtual ~IProduct() = default;
    virtual void use() = 0;
    virtual void setOwner(std::string owner) = 0;
};