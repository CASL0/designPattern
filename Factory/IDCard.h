#pragma once
#include "Product.h"
#include <memory>
#include <string>
#include <iostream>

class CIDCard : public IProduct{
private:
    std::string m_sOwner;
public:
    ~CIDCard() = default;
    void use() override;
    void setOwner(std::string owner) override;
    static std::shared_ptr<IProduct> Create();
};