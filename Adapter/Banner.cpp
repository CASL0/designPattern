#include "Banner.h"
#include <iostream>

void CBanner::showWithParen(){
    std::cout << "(" << m_str << ")" << std::endl;
}

void CBanner::showWithAster(){
    std::cout << "*" << m_str << "*" << std::endl;
}