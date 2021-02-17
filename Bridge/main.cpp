#include "Display.h"
#include "CountDisplay.h"
#include "DisplayImpl.h"
#include "StringDisplayImpl.h"

int main(){
   //td::shared_ptr<IDisplayImpl> strImpl(new CStringDisplayImpl("Hello, Japan"));;
   auto d1 = std::make_shared<CDisplay>(std::make_shared<CStringDisplayImpl>("Hello, Japan"));
   auto d2 = std::make_shared<CCountDisplay>(std::make_shared<CStringDisplayImpl>("Hello, World"));

   d1->display();
   d2->multiDisplay(5);
   return 0;
}