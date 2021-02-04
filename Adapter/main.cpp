#include "Print.h"
#include "PrintBanner.h"
#include <memory>

int main(void){
    std::shared_ptr<IPrint> pPrint(std::make_shared<CPrintBanner>("Hello"));
    pPrint->printStrong();
    pPrint->printWeak();

    return 0;
}