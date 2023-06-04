#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_LAPTOP_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_LAPTOP_H_


#include "IComputerType.h"
#include<string>

class Laptop : public IComputerType
{
    std::string GetSystemType()
    {
        return std::string("LAPTOP");
    }
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_LAPTOP_H_