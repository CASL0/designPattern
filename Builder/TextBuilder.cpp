#include "TextBuilder.h"

void CTextBuilder::makeTitle(const std::string &title){
    m_ssBuffer << "=======================\n" 
               << "「" << title << "」" << "\n\n";
}

void CTextBuilder::makeString(const std::string &str){
    m_ssBuffer << "■" << str << "\n\n";
}

void CTextBuilder::makeItems(const std::vector<std::string>& items){
    for(const auto& elem : items){
        m_ssBuffer << "* " << elem << "\n";
    }
}

void CTextBuilder::close(){
    m_ssBuffer << "=======================\n";
}

std::string CTextBuilder::getResult(){
    return m_ssBuffer.str();
}