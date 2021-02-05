#include "IDCard.h"

void CIDCard::use(){
    std::cout << m_sOwner << "のカードを使います" << std::endl;
}

void CIDCard::setOwner(std::string owner){
    m_sOwner = owner;
}

std::shared_ptr<IProduct> CIDCard::Create()
{
    return std::make_shared<CIDCard>();
}