#ifndef _DELL_H
#define _DELL_H
#include "IBrand.h"
#include <string>

class DELL: public IBrand
{
    std::string GetBrand()
    {
        return std::string("DELL");
    }
};
#endif