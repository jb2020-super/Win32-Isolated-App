// ATLSimpleObject.cpp : Implementation of CATLSimpleObject

#include "pch.h"
#include "ATLSimpleObject.h"


// CATLSimpleObject

HRESULT CATLSimpleObject::Print()
{
    printf("Hello, this is a simple ATL object!\n");
    return S_OK;
}
