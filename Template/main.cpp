#include "AbstractDisplay.h"
#include "CharDisplay.h"
#include "StringDisplay.h"
#include <memory>

int main(void){
    std::shared_ptr<AbstractDisplay> pDisplay1(std::make_shared<CCharDisplay>('H'));
    std::shared_ptr<AbstractDisplay> pDisplay2(std::make_shared<CStringDisplay>("Hello, world"));
    pDisplay1->display();
    pDisplay2->display();
    return 0;
}