#include "CharDisplay.h"
#include <iostream>

void CCharDisplay::open(){
    std::cout << "<<";
}

void CCharDisplay::print(){
    std::cout << m_ch;
}

void CCharDisplay::close(){
    std::cout << ">>" << std::endl;
}