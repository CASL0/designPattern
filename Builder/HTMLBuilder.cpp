#include "HTMLBuilder.h"

void CHTMLBuilder::makeTitle(const std::string &title){
    m_ssBuffer << "<html><head><title>" << title << "</title></head>" << "\n";
    m_ssBuffer << "<body>" << "\n";
}

void CHTMLBuilder::makeString(const std::string &str){
    m_ssBuffer << "<p>" << str << "</p>" << "\n";
}

void CHTMLBuilder::makeItems(const std::vector<std::string>& items){
    m_ssBuffer << "<ul>" << "\n";

    for(const auto& elem : items){
        m_ssBuffer << "<li>" << elem << "</li>" << "\n";
    }

    m_ssBuffer << "</ul>" << "\n";
}

void CHTMLBuilder::close(){
    m_ssBuffer << "</body></html>" << "\n";
}

std::string CHTMLBuilder::getResult(){
    return m_ssBuffer.str();
}