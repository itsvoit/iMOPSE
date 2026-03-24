#include "CFJSSPW_Factory.h"

CFJSSPW *CFJSSPWFactory::CreateFJSSPW(const char *problemDefinitionPath){
    return new CFJSSPW();
}

void CFJSSPWFactory::DeleteObjects()
{
}