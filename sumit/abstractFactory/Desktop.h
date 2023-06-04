#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_DESKTOP_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_DESKTOP_H_

#include "IComputerType.h"
#include<string>

class Desktop : public IComputerType
{
    std::string GetSystemType()
    {
        return std::string("Desktop");
    }
};

#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_DESKTOP_H_