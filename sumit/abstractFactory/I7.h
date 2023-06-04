#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_I7_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_I7_H_


#include "IProcessor.h"
#include<string>

class I7 : public IProcessor
{
    std::string GetProcessor()
    {
        return std::string("I7");
    }
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_I7_H_