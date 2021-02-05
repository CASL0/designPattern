#pragma once
#include "Builder.h"
#include <memory>

class CDirector{
private:
    std::shared_ptr<IBuilder> m_pBuilder;
public:
    explicit CDirector(std::shared_ptr<IBuilder> pBuilder) : m_pBuilder(pBuilder){};
    void construct();
};
