#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_MAC_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_MAC_H_


#include "IBrand.h"
#include<string>

class MAC: public IBrand
{
    std::string GetBrand()
    {
        return std::string("APPLE");
    }
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_MAC_H_