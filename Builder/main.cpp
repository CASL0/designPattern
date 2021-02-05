#include "Builder.h"
#include "TextBuilder.h"
#include "HTMLBuilder.h"
#include "Director.h"
#include <iostream>

int main(void){
    std::cout << "テキストビルダー start" << std::endl;
    std::shared_ptr<CTextBuilder> pTextBuilder(std::make_shared<CTextBuilder>());
    CDirector director(pTextBuilder);
    director.construct();
    std::string sResult = pTextBuilder->getResult();
    std::cout << sResult << std::endl;
    std::cout << "テキストビルダー end" << std::endl;

    std::cout << "HTMLビルダー start" << std::endl;
    std::shared_ptr<CHTMLBuilder> pHTMLBuilder(std::make_shared<CHTMLBuilder>());
    CDirector otherDirector(pHTMLBuilder);
    otherDirector.construct();
    sResult = pHTMLBuilder->getResult();
    std::cout << sResult << std::endl;
    return 0;
}