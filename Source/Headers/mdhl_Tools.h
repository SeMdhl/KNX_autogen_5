#pragma once
#ifndef mdhl_mdhl
#define mdhl_mdhl
#include <iostream>
#include <fstream>
#include <windows.h>




std::string Tabs(int num)
{
    std::string Out;
    for (int i = 0; i < num; i++)
    {
        Out += "\t";
    }
    return Out;
}




std::string Returns(int num)
{
    std::string Out;
    for (int i = 0; i < num; i++)
    {
        Out += "\n";
    }
    return Out;
}




std::string Knx_Preset(int iKnx)
{
    std::string sPreset = "";
    if (iKnx < 10)
    {
        sPreset = "00";
    }
    else if (iKnx < 100)
    {
        sPreset = "0";
    }
    else if (iKnx < 1000)
    {
        sPreset = "";
    }
    else
    {
        std::cout << "\n\nError: line 990 mdhl.h\n\n";
        abort();
    }
    return sPreset;
}

void Knx_Master(int *iMaster, int *iKnx)
{
    if (*iKnx == 243)
    {
        (*iMaster)++;
        *iKnx = 1;
    }
    else if (*iKnx > 243)
    {
        std::cout << "Error, KNX_Master failed";
        Sleep(10000);
        abort;
    }
    else
        return;
}

#endif