#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_ICOMPUTERTYPE_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_ICOMPUTERTYPE_H_


#include<string>


class IComputerType
{
    public:
    virtual std::string GetSystemType() = 0;

};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_ICOMPUTERTYPE_H_