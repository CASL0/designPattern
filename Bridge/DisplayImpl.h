#pragma once
class IDisplayImpl{
public:
    virtual void rawOpen() = 0;
    virtual void rawPrint() = 0;
    virtual void rawClose() = 0;
    virtual ~IDisplayImpl() = default;
};