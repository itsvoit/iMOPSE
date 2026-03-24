#include "CFJSSPW.h"

void CFJSSPW::CreateEncoding()
{
    m_Encoding.m_objectivesNumber = 1;
}

SProblemEncoding &CFJSSPW::GetProblemEncoding()
{
    return m_Encoding;
}

void CFJSSPW::Evaluate(AIndividual& individual)
{

}

void CFJSSPW::LogSolution(AIndividual& individual)
{

}

void CFJSSPW::LogAdditionalData()
{

}

