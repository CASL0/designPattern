#include "StringDisplayImpl.h"
#include <iostream>

void CStringDisplayImpl::printLine(){
    std::cout << "+";
    for (int i = 0; i < m_width;i++){
        std::cout << "-";
    }
    std::cout << "+" << std::endl;
}

void CStringDisplayImpl::rawOpen(){
    printLine();
}

void CStringDisplayImpl::rawPrint(){
    std::cout << "|" << m_str << "|" << std::endl;
}

void CStringDisplayImpl::rawClose(){
    printLine();
}