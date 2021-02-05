#include "Product.h"
#include "Factory.h"
#include "IDCard.h"

int main(void){
    CFactory::RegisterProduct("idcard", CIDCard::Create);
    std::shared_ptr<IProduct> product = CFactory::CreateProduct("idcard");
    product->setOwner("hoge");
    product->use();
    return 0;
}