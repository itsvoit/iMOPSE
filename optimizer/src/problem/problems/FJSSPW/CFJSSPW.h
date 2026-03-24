
#include "../../AProblem.h"

class CFJSSPW : public AProblem
{
    SProblemEncoding m_Encoding;

public:
    virtual ~CFJSSPW() = default;

    SProblemEncoding &GetProblemEncoding() override;
    void Evaluate(AIndividual& individual) override;
    void LogSolution(AIndividual& individual) override;
    void LogAdditionalData() override;

private:
    void CreateEncoding();
};