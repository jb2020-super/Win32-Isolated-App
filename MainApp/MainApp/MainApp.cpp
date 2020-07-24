// MainApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h>
#include <atlbase.h>
#include <iostream>
#include <initguid.h>

#include "../Dependency/Dependency_i.h"

DEFINE_GUID(CLSID_ATLSimpleObject, 0x623d3c49, 0x7ef6, 0x4c2f, 0x9e, 0x31, 0xe8, 0xb8, 0x7a, 0xa1, 0xae, 0x91);

int main()
{
    CoInitialize(NULL);
    CComPtr<IATLSimpleObject> pATLSimpleObject;
    HRESULT hr = pATLSimpleObject.CoCreateInstance(CLSID_ATLSimpleObject);
    if (SUCCEEDED(hr)) {
        hr = pATLSimpleObject->Print();
    }
    else
    {
        printf("Error of CoCreateInstance!\n");
    }
    pATLSimpleObject.Release();
    CoUninitialize();
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
