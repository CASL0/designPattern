#include "Factory.h"

std::map<std::string, CFactory::CreateCallback> CFactory::m_products;

void CFactory::RegisterProduct(const std::string &type, CreateCallback cb){
    if (m_products.count(type) == 0){
        m_products[type] = cb;
    }
}

void CFactory::UnregisterProduct(const std::string &type){
    m_products.erase(type);
}

std::shared_ptr<IProduct> CFactory::CreateProduct(const std::string &type){
    auto it = m_products.find(type);
    if (it != m_products.end()){
        return (it->second)();
    }
    return nullptr;
}