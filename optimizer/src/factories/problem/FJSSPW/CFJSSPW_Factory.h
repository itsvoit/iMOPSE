#include "../../../problem/problems/FJSSPW/CFJSSPW.h"

class CFJSSPWFactory
{

public:
    static CFJSSPW *CreateFJSSPW(const char *problemDefinitionPath);
    static void DeleteObjects();
};