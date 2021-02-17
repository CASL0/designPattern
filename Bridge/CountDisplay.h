#pragma once
#include "Display.h"

class CCountDisplay : public CDisplay{
public:
    explicit CCountDisplay(std::shared_ptr<IDisplayImpl> pimpl) : CDisplay(pimpl){}
    void multiDisplay(int times);
};
