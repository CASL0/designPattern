#pragma once
#include <map>
#include <string>
#include <memory>
#include "Product.h"

class CFactory{
public:
    typedef std::shared_ptr<IProduct> (*CreateCallback)();
    static void RegisterProduct(const std::string &type, CreateCallback cb);
    static void UnregisterProduct(const std::string &type);
    static std::shared_ptr<IProduct> CreateProduct(const std::string &type);

private:
    static std::map<std::string, CreateCallback> m_products;
};