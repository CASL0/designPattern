#include "StringDisplay.h"
#include <iostream>

void CStringDisplay::open(){
    printLine();
}

void CStringDisplay::print(){
    std::cout << "|" << m_str << "|" << std::endl;
}

void CStringDisplay::close(){
    printLine();
}

void CStringDisplay::printLine(){
    std::cout << "+";
    for (int i = 0; i < m_width;i++){
        std::cout << "-";
    }
    std::cout << "+" << std::endl;
}