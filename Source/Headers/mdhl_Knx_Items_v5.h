#pragma once
#ifndef mdhl_Knx_Items
#define mdhl_Knx_Items
#include <iostream>\n\t";
#include <fstream>\n\t";
#include <windows.h>\n\t";
#include "mdhl_Tools.h"




//Datatyper
void Knx_dt_Rb(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"RB60" << i << "_V\">\n\t";

        fOutput << "<type>\n\t";
        fOutput << "<BOOL />\n\t";
        fOutput << "</type>\n\t";

        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Bevegelse</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);

        fOutput << "</variable>\n\t";
    }
    fOutput.close();
    return;
}


void Knx_dt_Hvac(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"RB60" << i << "_HVAC\">\n\t";

        fOutput << "<type>\n\t";
        fOutput << "<BOOL />\n\t";
        fOutput << "</type>\n\t";

        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">HVAC signal</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";
    }
    fOutput.close();
    return;
}


void Knx_dt_Rt(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        //CT
        fOutput << "<variable name=\"RT60" << i << "_CT\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Rom temperatur</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";

        if (i < 1)
        {
            //SP D
            fOutput << "<variable name=\"RT60" << i << "_SP\">\n\t";
            fOutput << "<type>\n\t";
            fOutput << "<REAL />\n\t";
            fOutput << "</type>\n\t";
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Temperatur SP</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            fOutput << "</variable>\n\t";
        }
    }
    //SP D
    fOutput << "<variable name=\"RT601_SP_D\">\n\t";
    fOutput << "<type>\n\t";
    fOutput << "<REAL />\n\t";
    fOutput << "</type>\n\t";
    fOutput << "<documentation>\n" + Tabs(7);
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Temperatur SP</xhtml>\n" + Tabs(6);
    fOutput << "</documentation>\n" + Tabs(5);
    fOutput << "</variable>\n\t";
    //SP S
    fOutput << "<variable name=\"RT601_SP_S\">\n\t";
    fOutput << "<type>\n\t";
    fOutput << "<REAL />\n\t";
    fOutput << "</type>\n\t";
    fOutput << "<documentation>\n" + Tabs(7);
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Temperatur SP standby</xhtml>\n" + Tabs(6);
    fOutput << "</documentation>\n" + Tabs(5);
    fOutput << "</variable>\n\t";
    //SP N
    fOutput << "<variable name=\"RT601_SP_N\">\n\t";
    fOutput << "<type>\n\t";
    fOutput << "<REAL />\n\t";
    fOutput << "</type>\n\t";
    fOutput << "<documentation>\n" + Tabs(7);
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Temperatur SP nattsenk</xhtml>\n" + Tabs(6);
    fOutput << "</documentation>\n" + Tabs(5);
    fOutput << "</variable>\n\t";
    //SP F
    fOutput << "<variable name=\"RT601_SP_F\">\n\t";
    fOutput << "<type>\n\t";
    fOutput << "<REAL />\n\t";
    fOutput << "</type>\n\t";
    fOutput << "<documentation>\n" + Tabs(7);
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Temperatur SP frostsikring</xhtml>\n" + Tabs(6);
    fOutput << "</documentation>\n" + Tabs(5);
    fOutput << "</variable>\n\t";
    //SP CS
    fOutput << "<variable name=\"RT601_CS\">\n\t";
    fOutput << "<type>\n\t";
    fOutput << "<REAL />\n\t";
    fOutput << "</type>\n\t";
    fOutput << "<documentation>\n" + Tabs(7);
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Aktivt temperatur SP</xhtml>\n" + Tabs(6);
    fOutput << "</documentation>\n" + Tabs(5);
    fOutput << "</variable>\n\t";
    //OPM
    fOutput << "<variable name=\"OPM\">\n\t";
    fOutput << "<type>\n\t";
    fOutput << "<REAL />\n\t";
    fOutput << "</type>\n\t";
    fOutput << "<documentation>\n" + Tabs(7);
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Rom modus</xhtml>\n" + Tabs(6);
    fOutput << "</documentation>\n" + Tabs(5);
    fOutput << "</variable>\n\t";
    //OPM CV
    fOutput << "<variable name=\"OPM_CV\">\n\t";
    fOutput << "<type>\n\t";
    fOutput << "<REAL />\n\t";
    fOutput << "</type>\n\t";
    fOutput << "<documentation>\n" + Tabs(7);
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Rom modus verdi</xhtml>\n" + Tabs(6);
    fOutput << "</documentation>\n" + Tabs(5);
    fOutput << "</variable>\n\t";

    fOutput.close();
    return;
}

void Knx_dt_Ry(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    

    for (int i = 1; i <= iAntall; i++)
    {
        //CV
        fOutput << "<variable name=\"RY60" << i << "_CV\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Co2 Nivaa</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";
        //SP
        fOutput << "<variable name=\"RY60" << i << "_SP\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Co2 SP</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";
        //OP
        fOutput << "<variable name=\"RY60" << i << "_OP\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Co2 paadrag</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";
    }

    fOutput.close();
    return;
}

void Knx_dt_Lh_OP(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        //OP
        fOutput << "<variable name=\"LH60" << i << "_OP\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Varmepaadrag</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";
    }
    //Force
    fOutput << "<variable name=\"SB601_MAN\">\n\t";
    fOutput << "<type>\n\t";
    fOutput << "<REAL />\n\t";
    fOutput << "</type>\n\t";
    fOutput << "<documentation>\n" + Tabs(7);
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Varmepaadrag force</xhtml>\n" + Tabs(6);
    fOutput << "</documentation>\n" + Tabs(5);
    fOutput << "</variable>\n\t";

    fOutput.close();
    return;
}

void Knx_dt_Lh_CMD(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"LH60" << i << "_CMD\">\n\t";

        fOutput << "<type>\n\t";
        fOutput << "<BOOL />\n\t";
        fOutput << "</type>\n\t";


        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LH60" << i << "_CMD</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);

        fOutput << "</variable>\n\t";
    }

    fOutput.close();
    return;
}

void Knx_dt_Lc_OP(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"LC60" << i << "_OP\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LC60" << i << "_OP</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";
    }
        //Force
        fOutput << "<variable name=\"LC601_MAN\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LC601 Force</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";
    

    fOutput.close();
    return;
}

void Knx_dt_Lc_CMD(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"LC60" << i << "_CMD\">\n\t";

        fOutput << "<type>\n\t";
        fOutput << "<BOOL />\n\t";
        fOutput << "</type>\n\t";

        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LC60" << i << "_CMD</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);

        fOutput << "</variable>\n\t";
    }

    fOutput.close();
    return;
}

void Knx_dt_Sp(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

        fOutput << "<variable name=\"RT601_SP\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Temperatur SP feedback</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";

    fOutput.close();
    return;
}

void Knx_dt_Sp_Fb(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        //SP FB
        fOutput << "<variable name=\"RT60" << i << "_SP_FB\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Temperatur SP</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";
        //SP CS
        fOutput << "<variable name=\"RT60" << i << "_SP_IN\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<REAL />\n\t";
        fOutput << "</type>\n\t";
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Temperatur SP lokalt panel</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n\t";
    }

    fOutput.close();
    return;
}

void Knx_dt_Lu_V(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"LU60" << i << "_V\">\n\t";

        fOutput << "<type>\n\t";
        fOutput << "<BOOL />\n\t";
        fOutput << "</type>\n\t";

        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Befukter status</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);

        fOutput << "</variable>\n\t";
    }
    fOutput.close();
    return;
}

void Knx_dt_Lu_Al(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"LU60" << i << "_AL\">\n\t";

        fOutput << "<type>\n\t";
        fOutput << "<BOOL />\n\t";
        fOutput << "</type>\n\t";

        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Befukter alarm/feil</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);

        fOutput << "</variable>\n\t";
    }
    fOutput.close();
    return;
}

void Knx_dt_Lu_Cmd(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"LU60" << i << "_CMD\">\n\t";

        fOutput << "<type>\n\t";
        fOutput << "<BOOL />\n\t";
        fOutput << "</type>\n\t";

        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Befukter tillat start</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);

        fOutput << "</variable>\n\t";
    }
    fOutput.close();
    return;
}










//Lokal variabler
void Knx_var_Rb(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RB60" << i << "_V\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Switch_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}


void Knx_var_Hvac(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RB60" << i << "_HVAC\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Switch_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}


void Knx_var_Rt(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RT60" << i << "_CT\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Value_Temp_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Ry(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RY60" << i << "_CV\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Value_AirQuality_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Lh_OP(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LH60" << i << "_OP\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Scaling_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Lh_CMD(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LH60" << i << "_CMD\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Switch_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Lc_OP(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LC60" << i << "_OP\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Scaling_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Lc_CMD(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LC60" << i << "_CMD\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Switch_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Sp(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RT60" << i << "_SP\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Value_Temp_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Sp_Fb(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RT60" << i << "_SP_FB\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Value_Temp_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Lu_V(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LU60" << i << "_V\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Switch_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Lu_Al(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LU60" << i << "_AL\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Switch_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}

void Knx_var_Lu_Cmd(std::string& sPath, int& iMaster, int* iKnx, std::string& sRom, bool* xComment, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<variable name=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LU60" << i << "_CMD\">\n\t";
        fOutput << "<type>\n\t";
        fOutput << "<derived name=\"fbDPT_Switch_pro\" />\n\t";
        fOutput << "</type>\n\t";

        if (*xComment)
        {
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sRom << "</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            *xComment = false;
        }

        fOutput << "</variable>\n\t";
        (*iKnx)++;
    }

    fOutput.close();
    return;
}










//----------------------------------------------------------------------------------------------------------------------------------------
//CFC koder










void Knx_cfc_comment_a(std::string& sPath, std::string& sRom, int* iCfc_Id, int& iCfc_y)
{
    std::ofstream fOutput(sPath, std::ios::app);
    fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
    fOutput << "<position x=\"23\" y=\"" << (21 + iCfc_y) << "\" />\n\t";
    fOutput << "<content>\n\t";
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Rom " << sRom << "</xhtml>\n\t";
    fOutput << "</content>\n\t";
    fOutput << "</comment>\n\t";

    (*iCfc_Id)++;
}

void Knx_cfc_comment_b(std::string& sPath, std::string& sRom, int* iCfc_Id, int& iCfc_y)
{
    std::ofstream fOutput(sPath, std::ios::app);
    fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
    fOutput << "<position x=\"65\" y=\"" << (21 + iCfc_y) << "\" />\n\t";
    fOutput << "<content>\n\t";
    fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Rom " << sRom << "</xhtml>\n\t";
    fOutput << "</content>\n\t";
    fOutput << "</comment>\n\t";

    (*iCfc_Id)++;
}










void Knx_cfc_Master(std::string& sPath, std::string& sGvl, std::string& sAdresseFormat, int& iMaster, int* iCfc_Order, int* iCfc_Id)
{
    std::ofstream fOutput(sPath, std::ios::app);


    //Kommentar
    fOutput << "<comment localId = \"" << (1 + *iCfc_Id) << "\" height = \"0\" width = \"0\">\n\t";
    fOutput << "<position x = \"65\" y = \"3\"/>\n\t";
    fOutput << "<content>\n\t";
    fOutput << "<xhtml xmlns = \"http://www.w3.org/1999/xhtml\"> KNX Master</xhtml>\n\t";
    fOutput << "</content>\n\t";
    fOutput << "</comment>\n\t";

    //KNX kort
    fOutput << "<inVariable localId = \"" << (2 + *iCfc_Id) << "\">\n\t";
    fOutput << "<position x = \"46\" y = \"7\"/>\n\t";
    fOutput << "<connectionPointOut>\n\t";
    fOutput << "<expression/>\n\t";
    fOutput << "</connectionPointOut>\n\t";

    if (iMaster == 1)
        fOutput << "<expression>IoConfig_Globals.KNX_EIB_TP1_Interface</expression>\n\t";
    else
        fOutput << "<expression>IoConfig_Globals.KNX_EIB_TP1_Interface_" << (iMaster - 1) << "</expression>\n\t";

    fOutput << "</inVariable>\n\t";

    fOutput << "<connector localId = \"" << (3 + *iCfc_Id) << "\" name = \"\">\n\t";
    fOutput << "<position x = \"13\" y = \"7\"/>\n\t";
    fOutput << "<connectionPointIn>\n\t";

    if (iMaster == 1)
        fOutput << "<connection refLocalId = \"" << (2 + *iCfc_Id) << "\" formalParameter = \"IoConfig_Globals.KNX_EIB_TP1_Interface\"/>\n\t";
    else
        fOutput << "<connection refLocalId = \"" << (2 + *iCfc_Id) << "\" formalParameter = \"IoConfig_Globals.KNX_EIB_TP1_Interface_" << (iMaster - 1) << "\"/>\n\t";


    fOutput << "</connectionPointIn>\n\t";
    fOutput << "</connector>\n\t";

    //Linje
    fOutput << "<inVariable localId = \"" << (4 + *iCfc_Id) << "\">\n\t";
    fOutput << "<position x = \"60\" y = \"8\"/>\n\t";
    fOutput << "<connectionPointOut>\n\t";
    fOutput << "<expression/>\n\t";
    fOutput << "</connectionPointOut>\n\t";
    fOutput << "<expression>" << iMaster << "</expression>\n\t";
    fOutput << "</inVariable>\n\t";

    fOutput << "<connector localId = \"" << (5 + *iCfc_Id) << "\" name = \"\">\n\t";
    fOutput << "<position x = \"-8\" y = \"-2\"/>\n\t";
    fOutput << "<connectionPointIn>\n\t";
    fOutput << "<connection refLocalId = \"" << (4 + *iCfc_Id) << "\" formalParameter = \"" << iMaster << "\"/>\n\t";
    fOutput << "</connectionPointIn>\n\t";
    fOutput << "</connector>\n\t";

    //Master blokk
    fOutput << "<block localId = \"" << (6 + *iCfc_Id) << "\" executionOrderId = \"" << (1 + *iCfc_Order) << "\" typeName = \"WagoAppKNX.FbKNX_Master\" instanceName = \"KNX_master_" << iMaster << "\">\n\t";
    fOutput << "<position x = \"65\" y = \"5\"/>\n\t";

    //Inputs
    fOutput << "<inputVariables>\n\t";
    fOutput << "<variable formalParameter = \"I_Port\">\n\t";
    fOutput << "<connectionPointIn>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"0\"/>\n\t";
    fOutput << "<connection refLocalId = \"" << (3 + *iCfc_Id) << "\"/>\n\t";
    fOutput << "</connectionPointIn>\n\t";
    fOutput << "</variable>\n\t";

    fOutput << "<variable formalParameter = \"bPortKNX\">\n\t";
    fOutput << "<connectionPointIn>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"1\"/>\n\t";
    fOutput << "<connection refLocalId = \"" << (5 + *iCfc_Id) << "\"/>\n\t";
    fOutput << "</connectionPointIn>\n\t";
    fOutput << "</variable>\n\t";

    fOutput << "</inputVariables>\n\t";

    fOutput << "<inOutVariables/>\n\t";

    fOutput << "<outputVariables>\n\t";

    //Outputs
    fOutput << "<variable formalParameter = \"oStatus\">\n\t";
    fOutput << "<connectionPointOut>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"0\"/>\n\t";
    fOutput << "<expression/>\n\t";
    fOutput << "</connectionPointOut>\n\t";
    fOutput << "</variable>\n\t";

    fOutput << "<variable formalParameter = \"sStatus\">\n\t";
    fOutput << "<connectionPointOut>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"1\"/>\n\t";
    fOutput << "<expression/>\n\t";
    fOutput << "</connectionPointOut>\n\t";
    fOutput << "</variable>\n\t";

    fOutput << "<variable formalParameter = \"xProgMode\">\n\t";
    fOutput << "<connectionPointOut>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"2\"/>\n\t";
    fOutput << "<expression/>\n\t";
    fOutput << "</connectionPointOut>\n\t";
    fOutput << "</variable>\n\t";

    fOutput << "<variable formalParameter = \"wCountFbDPT\">\n\t";
    fOutput << "<connectionPointOut>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"3\"/>\n\t";
    fOutput << "<expression/>\n\t";
    fOutput << "</connectionPointOut>\n\t";
    fOutput << "</variable>\n\t";
    fOutput << "</outputVariables>\n\t";

    fOutput << "<addData>\n\t";
    fOutput << "<data name = \"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown = \"implementation\">\n\t";
    fOutput << "<CallType xmlns = \"\">functionblock</CallType>\n\t";
    fOutput << "</data>\n\t";
    fOutput << "</addData>\n\t";
    fOutput << "</block>\n\t";

    //connectors og var til eq blokk
    fOutput << "<connector localId = \"" << (7 + *iCfc_Id) << "\" name = \"\">\n\t";
    fOutput << "<position x = \"-9\" y = \"-3\"/>\n\t";
    fOutput << "<connectionPointIn>\n\t";
    fOutput << "<connection refLocalId = \"" << (6 + *iCfc_Id) << "\" formalParameter = \"sStatus\"/>\n\t";
    fOutput << "</connectionPointIn>\n\t";
    fOutput << "</connector>\n\t";

    fOutput << "<inVariable localId = \"" << (8 + *iCfc_Id) << "\">\n\t";
    fOutput << "<position x = \"80\" y = \"9\"/>\n\t";
    fOutput << "<connectionPointOut>\n\t";
    fOutput << "<expression/>\n\t";
    fOutput << "</connectionPointOut>\n\t";
    fOutput << "<expression>'OK'</expression>\n\t";
    fOutput << "</inVariable>\n\t";

    fOutput << "<connector localId = \"" << (9 + *iCfc_Id) << "\" name = \"\">\n\t";
    fOutput << "<position x = \"-55\" y = \"-9\"/>\n\t";
    fOutput << "<connectionPointIn>\n\t";
    fOutput << "<connection refLocalId = \"" << (8 + *iCfc_Id) << "\" formalParameter = \"'OK'\"/>\n\t";
    fOutput << "</connectionPointIn>\n\t";
    fOutput << "</connector>\n\t";

    //EQ blokk
    fOutput << "<block localId = \"" << (10 + *iCfc_Id) << "\" executionOrderId = \"" << (2 + *iCfc_Order) << "\" typeName = \"EQ\">\n\t";
    fOutput << "<position x = \"85\" y = \"6\"/>\n\t";

    fOutput << "<inputVariables>\n\t";

    fOutput << "<variable formalParameter = \"In1\">\n\t";
    fOutput << "<connectionPointIn>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"0\"/>\n\t";
    fOutput << "<connection refLocalId = \"" << (7 + *iCfc_Id) << "\"/>\n\t";
    fOutput << "</connectionPointIn>\n\t";
    fOutput << "</variable>\n\t";

    fOutput << "<variable formalParameter = \"In2\">\n\t";
    fOutput << "<connectionPointIn>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"1\"/>\n\t";
    fOutput << "<connection refLocalId = \"" << (9 + *iCfc_Id) << "\"/>\n\t";
    fOutput << "</connectionPointIn>\n\t";
    fOutput << "</variable>\n\t";

    fOutput << "</inputVariables>\n\t";

    fOutput << "<inOutVariables/>\n\t";

    fOutput << "<outputVariables>\n\t";

    fOutput << "<variable formalParameter = \"Out1\">\n\t";
    fOutput << "<connectionPointOut>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"0\"/>\n\t";
    fOutput << "<expression/>\n\t";
    fOutput << "</connectionPointOut>\n\t";
    fOutput << "</variable>\n\t";
    fOutput << "</outputVariables>\n\t";

    fOutput << "<addData>\n\t";
    fOutput << "<data name = \"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown = \"implementation\">\n\t";
    fOutput << "<CallType xmlns = \"\">operator</CallType>\n\t";
    fOutput << "</data>\n\t";
    fOutput << "</addData>\n\t";
    fOutput << "</block>\n\t";

    fOutput << "<connector localId = \"" << (11 + *iCfc_Id) << "\" name = \"\">\n\t";
    fOutput << "<position x = \"-55\" y = \"-9\"/>\n\t";
    fOutput << "<connectionPointIn>\n\t";
    fOutput << "<connection refLocalId = \"" << (10 + *iCfc_Id) << "\" formalParameter = \"\"/>\n\t";
    fOutput << "</connectionPointIn>\n\t";
    fOutput << "</connector>\n\t";

    fOutput << "<outVariable localId = \"" << (12 + *iCfc_Id) << "\" executionOrderId = \"" << (3 + *iCfc_Order) << "\">\n\t";
    fOutput << "<position x = \"90\" y = \"8\"/>\n\t";
    fOutput << "<connectionPointIn>\n\t";
    fOutput << "<relPosition x = \"0\" y = \"0\"/>\n\t";
    fOutput << "<connection refLocalId = \"" << (11 + *iCfc_Id) << "\"/>\n\t";
    fOutput << "</connectionPointIn>\n\t";
    fOutput << "<expression>" << sGvl << "." << sAdresseFormat << "_KNX_Card_" << iMaster << "_Status</expression>\n\t";
    fOutput << "</outVariable>\n\t";


    (*iCfc_Id) += 13;
    (*iCfc_Order) += 4;
    fOutput.close();
    return;
}










void Knx_cfc_Interval(std::string& sPath, int& iKnxOutputs)
{
    std::ofstream fOutput(sPath, std::ios::app);

        fOutput <<"<comment localId=\"0\" height=\"0\" width=\"0\">\n\t";
        fOutput <<"<position x=\"7\" y=\"3\" />\n\t";
        fOutput <<"<content>\n\t";
        fOutput <<"<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">KNX Sending interval</xhtml>\n\t";

        fOutput <<"</content>\n\t";
        fOutput <<"</comment>\n\t";
        fOutput <<"<inVariable localId=\"1\">\n\t";
        fOutput <<"<position x=\"2\" y=\"7\" />\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";
        fOutput <<"<expression>t#2M</expression>\n\t";

        fOutput <<"</inVariable>\n\t";
        fOutput <<"<connector localId=\"2\" name=\"\">\n\t";
        fOutput <<"<position x=\"1\" y=\"150\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"1\" formalParameter=\"t#2M\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";
        fOutput <<"<block localId=\"3\" executionOrderId=\"0\" typeName=\"OSCAT_BASIC.CLK_PRG\" instanceName=\"Interval\">\n\t";
        fOutput <<"<position x=\"7\" y=\"5\" />\n\t";
        fOutput <<"<inputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"PT\">\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<connection refLocalId=\"2\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"</inputVariables>\n\t";
        fOutput <<"<inOutVariables />\n\t";
        fOutput <<"<outputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"Q\">\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"</outputVariables>\n\t";
        fOutput <<"<addData>\n\t";
        fOutput <<"<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput <<"<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput <<"</data>\n\t";
        fOutput <<"</addData>\n\t";
        fOutput <<"</block>\n\t";
        fOutput <<"<connector localId=\"4\" name=\"\">\n\t";
        fOutput <<"<position x=\"11\" y=\"184\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"3\" formalParameter=\"Q\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";
        fOutput <<"<block localId=\"5\" executionOrderId=\"1\" typeName=\"BOOL_TO_INT\">\n\t";
        fOutput <<"<position x=\"20\" y=\"5\" />\n\t";
        fOutput <<"<inputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"In1\">\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<connection refLocalId=\"4\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"</inputVariables>\n\t";
        fOutput <<"<inOutVariables />\n\t";
        fOutput <<"<outputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"Out1\">\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"</outputVariables>\n\t";
        fOutput <<"<addData>\n\t";
        fOutput <<"<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput <<"<CallType xmlns=\"\">operator</CallType>\n\t";
        fOutput <<"</data>\n\t";
        fOutput <<"</addData>\n\t";
        fOutput <<"</block>\n\t";
        fOutput <<"<connector localId=\"6\" name=\"\">\n\t";
        fOutput <<"<position x=\"11\" y=\"184\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"5\" formalParameter=\"\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";
        fOutput <<"<inVariable localId=\"7\">\n\t";
        fOutput <<"<position x=\"25\" y=\"9\" />\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";
        fOutput <<"<expression>i</expression>\n\t";
        fOutput <<"</inVariable>\n\t";
        fOutput <<"<connector localId=\"8\" name=\"\">\n\t";
        fOutput <<"<position x=\"11\" y=\"184\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"7\" formalParameter=\"i\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";
        fOutput <<"<block localId=\"9\" executionOrderId=\"2\" typeName=\"ADD\">\n\t";
        fOutput <<"<position x=\"31\" y=\"5\" />\n\t";
        fOutput <<"<inputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"In1\">\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<connection refLocalId=\"6\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"<variable formalParameter=\"In2\">\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"1\" />\n\t";
        fOutput <<"<connection refLocalId=\"8\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"</inputVariables>\n\t";
        fOutput <<"<inOutVariables />\n\t";
        fOutput <<"<outputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"Out1\">\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"</outputVariables>\n\t";
        fOutput <<"<addData>\n\t";
        fOutput <<"<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput <<"<CallType xmlns=\"\">operator</CallType>\n\t";
        fOutput <<"</data>\n\t";
        fOutput <<"</addData>\n\t";
        fOutput <<"</block>\n\t";
        fOutput <<"<connector localId=\"10\" name=\"\">\n\t";
        fOutput <<"<position x=\"11\" y=\"184\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"9\" formalParameter=\"\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";
        fOutput <<"<outVariable localId=\"11\" executionOrderId=\"3\">\n\t";
        fOutput <<"<position x=\"36\" y=\"7\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<connection refLocalId=\"10\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"<expression>i</expression>\n\t";
        fOutput <<"</outVariable>\n\t";
        fOutput <<"<connector localId=\"12\" name=\"\">\n\t";
        fOutput <<"<position x=\"11\" y=\"184\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"7\" formalParameter=\"i\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";
        fOutput <<"<inVariable localId=\"13\">\n\t";
        fOutput <<"<position x=\"25\" y=\"12\" />\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";

        fOutput <<"<expression>" <<iKnxOutputs <<"</expression>\n\t";

        fOutput <<"</inVariable>\n\t";
        fOutput <<"<connector localId=\"14\" name=\"\">\n\t";
        fOutput <<"<position x=\"11\" y=\"184\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"13\" formalParameter=\""<< iKnxOutputs <<"\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";

        fOutput <<"<block localId=\"15\" executionOrderId=\"4\" typeName=\"GT\">\n\t";
        fOutput <<"<position x=\"31\" y=\"9\" />\n\t";
        fOutput <<"<inputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"In1\">\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<connection refLocalId=\"12\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"<variable formalParameter=\"In2\">\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"1\" />\n\t";
        fOutput <<"<connection refLocalId=\"14\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"</inputVariables>\n\t";
        fOutput <<"<inOutVariables />\n\t";
        fOutput <<"<outputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"Out1\">\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"</outputVariables>\n\t";
        fOutput <<"<addData>\n\t";
        fOutput <<"<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput <<"<CallType xmlns=\"\">operator</CallType>\n\t";
        fOutput <<"</data>\n\t";
        fOutput <<"</addData>\n\t";
        fOutput <<"</block>\n\t";
        fOutput <<"<connector localId=\"16\" name=\"\">\n\t";
        fOutput <<"<position x=\"11\" y=\"184\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"15\" formalParameter=\"\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";

        fOutput <<"<inVariable localId=\"17\">\n\t";
        fOutput <<"<position x=\"36\" y=\"12\" />\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";
        fOutput <<"<expression>0</expression>\n\t";
        fOutput <<"</inVariable>\n\t";
        fOutput <<"<connector localId=\"18\" name=\"\">\n\t";
        fOutput <<"<position x=\"11\" y=\"184\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"17\" formalParameter=\"0\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";

        fOutput <<"<block localId=\"19\" executionOrderId=\"5\" typeName=\"MOVE\">\n\t";
        fOutput <<"<position x=\"41\" y=\"9\" />\n\t";
        fOutput <<"<inputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"EN\">\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<connection refLocalId=\"16\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</variable>\n\t";

        fOutput <<"<variable formalParameter=\"In2\">\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"1\" />\n\t";
        fOutput <<"<connection refLocalId=\"18\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</variable>\n\t";

        fOutput <<"</inputVariables>\n\t";
        fOutput <<"<inOutVariables />\n\t";
        fOutput <<"<outputVariables>\n\t";
        fOutput <<"<variable formalParameter=\"ENO\">\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"<variable formalParameter=\"Out2\">\n\t";
        fOutput <<"<connectionPointOut>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"1\" />\n\t";
        fOutput <<"<expression />\n\t";
        fOutput <<"</connectionPointOut>\n\t";
        fOutput <<"</variable>\n\t";
        fOutput <<"</outputVariables>\n\t";
        fOutput <<"<addData>\n\t";
        fOutput <<"<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput <<"<CallType xmlns=\"\">operator</CallType>\n\t";
        fOutput <<"</data>\n\t";
        fOutput <<"</addData>\n\t";
        fOutput <<"</block>\n\t";
        fOutput <<"<connector localId=\"20\" name=\"\">\n\t";
        fOutput <<"<position x=\"11\" y=\"19\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<connection refLocalId=\"19\" formalParameter=\"\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"</connector>\n\t";
        fOutput <<"<outVariable localId=\"21\" executionOrderId=\"6\">\n\t";
        fOutput <<"<position x=\"48\" y=\"12\" />\n\t";
        fOutput <<"<connectionPointIn>\n\t";
        fOutput <<"<relPosition x=\"0\" y=\"0\" />\n\t";
        fOutput <<"<connection refLocalId=\"20\" />\n\t";
        fOutput <<"</connectionPointIn>\n\t";
        fOutput <<"<expression>i</expression>\n\t";
        fOutput <<"</outVariable>\n\t";
        fOutput.close();
        return;
}









void Knx_cfc_Rb(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (1 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">RB60" << i << "_V</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (2 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (1 + 29 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (3 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 454 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (4 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (1 + 30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (5 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 454 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (6 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (1 + 35 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (7 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 454 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (8 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"fbDPT_Switch_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RB60" << i << "_V\">\n\t";

        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (1 + 27 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 3 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 6 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (9 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 288 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" formalParameter=\"xSwitch_OUT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<outVariable localId=\"" << (10 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\">\n\t";
        fOutput << "<position x=\"" << (37 + *iCfc_x) << "\" y=\"" << (1 + 29 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (9 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";

        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RB60" << i << "_V</expression>\n\t";

        fOutput << "</outVariable>\n\t";

        (*iCfc_Id) += 11;
        (*iCfc_Order) += 2;
        (*iKnx)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 18;
            *xSpace= true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}







void Knx_cfc_Hvac(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">RB60" << i << "_HVAC</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";
        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";

        fOutput << "<expression>" << iMaster << "</expression >\n\t";

        fOutput << "</inVariable>\n\t";
        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (455 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";
        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (31 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";

        fOutput << "<expression>" << *iKnx << "</expression >\n\t";

        fOutput << "</inVariable>\n\t";
        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (455 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";
        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (36 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";
        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (455 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (7 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"fbDPT_Switch_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RB60" << i << "_HVAC\">\n\t";

        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (28 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 3 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 6 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";
        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (289 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"xSwitch_OUT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";
        fOutput << "<outVariable localId=\"" << (9 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\">\n\t";
        fOutput << "<position x=\"" << (37 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";

        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RB60" << i << "_HVAC</expression>\n\t";

        fOutput << "</outVariable>\n\t";


        (*iCfc_Id) += 10;
        (*iCfc_Order) += 2;
        (*iKnx)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 18;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}









void Knx_cfc_Rt(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">RT60" << i << "_CT</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";

        fOutput << "<expression>" << iMaster << "</expression>\n\t";

        fOutput << "</inVariable>\n\t";
        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";
        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (31 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";

        fOutput << "<expression>" << *iKnx << "</expression>\n\t";

        fOutput << "</inVariable>\n\t";
        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";
        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (37 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";

        fOutput << "<expression>typDPT</expression>\n\t";

        fOutput << "</inVariable>\n\t";
        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";
        fOutput << "<block localId=\"" << (7 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"fbDPT_Value_Temp_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RT60" << i << "_CT\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (28 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rValue_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (3 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rSendOnDelta\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (6 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (7 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"rValue_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";

        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";

        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";
        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"rValue_OUT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";
        fOutput << "<outVariable localId=\"" << (9 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\">\n\t";
        fOutput << "<position x=\"" << (37 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RT60" << i << "_CT</expression>\n\t";
        fOutput << "</outVariable>\n\t";

        (*iCfc_Order) += 2;
        (*iCfc_Id) += 10;
        (*iKnx)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 19;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}







void Knx_cfc_Ry(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">RY60" << i << "_CV</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";
        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";

        fOutput << "<expression>" << iMaster << "</expression >\n\t";

        fOutput << "</inVariable>\n\t";
        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";
        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (31 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";

        fOutput << "<expression>" << *iKnx << "</expression >\n\t";

        fOutput << "</inVariable>\n\t";
        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (37 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (7 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"fbDPT_Value_AirQuality_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RY60" << i << "_CV\">\n\t";

        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (28 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rValue_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 3 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";

        fOutput << "<variable formalParameter=\"rSendOnDelta\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 6 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";

        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 6 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";

        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"rValue_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";

        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"rValue_OUT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<outVariable localId=\"" << (9 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\">\n\t";
        fOutput << "<position x=\"" << (37 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (18 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";

        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RY60" << i << "_CV</expression>\n\t";

        fOutput << "</outVariable>\n\t";

        (*iCfc_Order) += 2;
        (*iCfc_Id) += 10;
        (*iKnx)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 19;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}










///
void Knx_cfc_Lh_OP(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int* iKnxOutputs, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LH60" << i << "_OP</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (31 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (32 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LH60" << i << "_OP</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LH60" << i << "_OP\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (7 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (11 + *iCfc_x) << "\" y=\"" << (35 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>i</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"i\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (9 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (11 + *iCfc_x) << "\" y=\"" << (36 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnxOutputs << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (10 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (9 + *iCfc_Id) << "\" formalParameter=\"" << *iKnxOutputs << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (11 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"EQ\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (33 + *iCfc_y) << "\" />\n\t";

        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"In1\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";

        fOutput << "<variable formalParameter=\"In2\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (10 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";

        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables />\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"Out1\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">operator</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (12 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (11 + *iCfc_Id) << "\" formalParameter=\"\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (13 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (37 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (14 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (13 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (15 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\" typeName=\"fbDPT_Scaling_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LH60" << i << "_OP\">\n\t";

        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (28 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rValue_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (3 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (12 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rSendOnDelta\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (6 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (7 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (14 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"rValue_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        (*iCfc_Order) += 2;
        (*iCfc_Id) += 16;
        (*iKnx)++;
        (*iKnxOutputs)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 19;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}











void Knx_cfc_Lh_CMD(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int* iKnxOutputs, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LH60" << i << "_CMD</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (31 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (32 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LH60" << i << "_CMD</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LH60" << i << "_CMD\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (7 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (6 + *iCfc_x) << "\" y=\"" << (35 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>i</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"i\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (9 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (6 + *iCfc_x) << "\" y=\"" << (36 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnxOutputs << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (10 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (9 + *iCfc_Id) << "\" formalParameter=\"" << *iKnxOutputs << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (11 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"EQ\">\n\t";
        fOutput << "<position x=\"" << (11 + *iCfc_x) << "\" y=\"" << (33 + *iCfc_y) << "\" />\n\t";

        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"In1\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";

        fOutput << "<variable formalParameter=\"In2\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (10 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";

        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables />\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"Out1\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">operator</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (12 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (11 + *iCfc_Id) << "\" formalParameter=\"\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (13 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (36 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (14 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (13 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (15 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\" typeName=\"fbDPT_Switch_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LH60" << i << "_CMD\">\n\t";

        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (28 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (3 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (12 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (7 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (14 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        (*iCfc_Order) += 2;
        (*iCfc_Id) += 16;
        (*iKnx)++;
        (*iKnxOutputs)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 19;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}





void Knx_cfc_Lc_OP(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int* iKnxOutputs, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LC60" << i << "_OP</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (31 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (32 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LC60" << i << "_OP</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LC60" << i << "_OP\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (7 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (11 + *iCfc_x) << "\" y=\"" << (35 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>i</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"i\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (9 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (11 + *iCfc_x) << "\" y=\"" << (36 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnxOutputs << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (10 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (9 + *iCfc_Id) << "\" formalParameter=\"" << *iKnxOutputs << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (11 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"EQ\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (33 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"In1\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"In2\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (10 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables />\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"Out1\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">operator</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (12 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (11 + *iCfc_Id) << "\" formalParameter=\"\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (13 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (37 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (14 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (13 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (15 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\" typeName=\"fbDPT_Scaling_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LC60" << i << "_OP\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (28 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rValue_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 3 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (12 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rSendOnDelta\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 6 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 7 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (14 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"rValue_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        (*iCfc_Order) += 2;
        (*iCfc_Id) += 16;
        (*iKnx)++;
        (*iKnxOutputs)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 19;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}





void Knx_cfc_Lc_CMD(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int* iKnxOutputs, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LC60" << i << "_CMD</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (31 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (32 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LC60" << i << "_CMD</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LC60" << i << "_CMD\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (7 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (6 + *iCfc_x) << "\" y=\"" << (35 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>i</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"i\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (9 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (6 + *iCfc_x) << "\" y=\"" << (36 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnxOutputs << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (10 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (9 + *iCfc_Id) << "\" formalParameter=\"" << *iKnxOutputs << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (11 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"EQ\">\n\t";
        fOutput << "<position x=\"" << (11 + *iCfc_x) << "\" y=\"" << (33 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"In1\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"In2\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (10 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables />\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"Out1\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">operator</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (12 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (11 + *iCfc_Id) << "\" formalParameter=\"\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (13 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (36 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (14 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (13 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (15 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\" typeName=\"fbDPT_Switch_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LC60" << i << "_CMD\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (28 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 3 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (12 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 7 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (14 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        (*iCfc_Order) += 2;
        (*iCfc_Id) += 16;
        (*iKnx)++;
        (*iKnxOutputs)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 19;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}












void Knx_cfc_Sp(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 25) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">RT60" << i << "_SP</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 30) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 275) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 31) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 275) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (1 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 32) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";

        if (i == 1)
            fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RT60" << i << "_SP_D</expression>\n\t";
        else
            fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RT60" << i << "_SP</expression>\n\t";

        fOutput << "</inVariable>\n\t";


        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (1 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 275) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";

        if (i == 1)
            fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RT60" << i << "_SP_D\" />\n\t";
        else
            fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RT60" << i << "_SP\" />\n\t";

        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";


        fOutput << "<inVariable localId=\"" << (7 + *iCfc_Id) << "\" negated=\"true\">\n\t";
        fOutput << "<position x=\"" << (1 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 33) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RB601_HVAC</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (1 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 275) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RB601_HVAC\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (9 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 37) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (10 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 275) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (9 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (11 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"fbDPT_Value_Temp_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RT60" << i << "_SP\">\n\t";

        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (*iCfc_y + 28) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 0) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 1) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rValue_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 2) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 3) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 4) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 5) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rSendOnDelta\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 6) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 7) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (10 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"rValue_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 0) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 1) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 1) << "\" y=\"" << (*iCfc_y + 2) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";


        (*iCfc_Order) += 1;
        (*iCfc_Id) += 12;
        (*iKnx)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 19;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}






void Knx_cfc_Sp_Fb(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">RT60" << i << "_SP Feedback</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (7 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (31 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (7 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (37 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (7 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (7 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"fbDPT_Value_Temp_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_RT60" << i << "_SP_FB\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (28 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rValue_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (2 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (3 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"rSendOnDelta\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (6 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (7 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"rValue_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (0 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"rValue_OUT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<outVariable localId=\"" << (9 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\">\n\t";
        fOutput << "<position x=\"" << (37 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 - 2) << "\" y=\"" << (0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".RT60" << i << "_SP_IN</expression>\n\t";
        fOutput << "</outVariable>\n\t";


        (*iCfc_Order) += 2;
        (*iCfc_Id) += 10;
        (*iKnx)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 19;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }
    fOutput.close();
    return;
}









void Knx_cfc_Lu_V(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (1 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LU60" << i << "_V</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (2 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (1 + 29 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (3 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 454 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (4 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (1 + 30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (5 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 454 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (6 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (1 + 35 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (7 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 454 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (8 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"fbDPT_Switch_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LU60" << i << "_V\">\n\t";

        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (1 + 27 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 3 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 6 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (9 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 288 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" formalParameter=\"xSwitch_OUT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<outVariable localId=\"" << (10 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\">\n\t";
        fOutput << "<position x=\"" << (37 + *iCfc_x) << "\" y=\"" << (1 + 29 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (9 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";

        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LU60" << i << "_V</expression>\n\t";

        fOutput << "</outVariable>\n\t";

        (*iCfc_Id) += 11;
        (*iCfc_Order) += 2;
        (*iKnx)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 18;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}









void Knx_cfc_Lu_Al(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (1 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LU60" << i << "_AL</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (2 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (1 + 29 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (3 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 454 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (4 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (1 + 30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (5 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 454 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (6 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (1 + 35 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (7 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 454 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (8 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"fbDPT_Switch_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LU60" << i << "_AL\">\n\t";

        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (1 + 27 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 3 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 6 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (9 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (05 + *iCfc_x) << "\" y=\"" << (1 + 288 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" formalParameter=\"xSwitch_OUT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<outVariable localId=\"" << (10 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\">\n\t";
        fOutput << "<position x=\"" << (37 + *iCfc_x) << "\" y=\"" << (1 + 29 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (1 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (9 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LU60" << i << "_AL</expression>\n\t";
        fOutput << "</outVariable>\n\t";

        (*iCfc_Id) += 11;
        (*iCfc_Order) += 2;
        (*iKnx)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 18;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}





void Knx_cfc_Lu_CMD(std::string& sPath, std::string& sGVL, std::string& sAdresseFormat, std::string& sRom, int& iMaster, int* iKnx, int* iCfc_Order, int* iCfc_Id, int* iCfc_y, int* iCfc_x, bool* xSpace, int* iKnxOutputs, int& iAntall)
{
    std::ofstream fOutput(sPath, std::ios::app);
    std::string sPreset = Knx_Preset(*iKnx);

    for (int i = 1; i <= iAntall; i++)
    {
        fOutput << "<comment localId=\"" << (0 + *iCfc_Id) << "\" height=\"0\" width=\"0\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (25 + *iCfc_y) << "\" />\n\t";
        fOutput << "<content>\n\t";
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">LU60" << i << "_CMD</xhtml>\n\t";
        fOutput << "</content>\n\t";
        fOutput << "</comment>\n\t";

        fOutput << "<inVariable localId=\"" << (1 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (30 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << iMaster << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (2 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (1 + *iCfc_Id) << "\" formalParameter=\"" << iMaster << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (3 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (18 + *iCfc_x) << "\" y=\"" << (31 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnx << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (4 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (3 + *iCfc_Id) << "\" formalParameter=\"" << *iKnx << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (5 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (32 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LU60" << i << "_CMD</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (6 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (2 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (5 + *iCfc_Id) << "\" formalParameter=\"" << sGVL << "." << sAdresseFormat << "_" << sRom << ".LU60" << i << "_CMD\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (7 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (6 + *iCfc_x) << "\" y=\"" << (35 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>i</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (8 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (7 + *iCfc_Id) << "\" formalParameter=\"i\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (9 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (6 + *iCfc_x) << "\" y=\"" << (36 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>" << *iKnxOutputs << "</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (10 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (9 + *iCfc_Id) << "\" formalParameter=\"" << *iKnxOutputs << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (11 + *iCfc_Id) << "\" executionOrderId=\"" << (0 + *iCfc_Order) << "\" typeName=\"EQ\">\n\t";
        fOutput << "<position x=\"" << (11 + *iCfc_x) << "\" y=\"" << (33 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"In1\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (8 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"In2\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (10 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables />\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"Out1\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">operator</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        fOutput << "<connector localId=\"" << (12 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (5 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (11 + *iCfc_Id) << "\" formalParameter=\"\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<inVariable localId=\"" << (13 + *iCfc_Id) << "\">\n\t";
        fOutput << "<position x=\"" << (16 + *iCfc_x) << "\" y=\"" << (36 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "<expression>typDPT</expression>\n\t";
        fOutput << "</inVariable>\n\t";

        fOutput << "<connector localId=\"" << (14 + *iCfc_Id) << "\" name=\"\">\n\t";
        fOutput << "<position x=\"" << (9 + *iCfc_x) << "\" y=\"" << (275 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<connection refLocalId=\"" << (13 + *iCfc_Id) << "\" formalParameter=\"typDPT\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</connector>\n\t";

        fOutput << "<block localId=\"" << (15 + *iCfc_Id) << "\" executionOrderId=\"" << (1 + *iCfc_Order) << "\" typeName=\"fbDPT_Switch_pro\" instanceName=\"M" << iMaster << "_" << sPreset << *iKnx << "_" << sRom << "_LU60" << i << "_CMD\">\n\t";
        fOutput << "<position x=\"" << (23 + *iCfc_x) << "\" y=\"" << (28 + *iCfc_y) << "\" />\n\t";
        fOutput << "<inputVariables>\n\t";
        fOutput << "<variable formalParameter=\"bPortKNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (2 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"dwIndex_DPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (4 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_IN\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (6 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 3 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (12 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xRead_KNX\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 4 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"tMinSendTime\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 5 + *iCfc_y) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inputVariables>\n\t";
        fOutput << "<inOutVariables>\n\t";
        fOutput << "<variable formalParameter=\"typDPT\">\n\t";
        fOutput << "<connectionPointIn>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 7 + *iCfc_y) << "\" />\n\t";
        fOutput << "<connection refLocalId=\"" << (14 + *iCfc_Id) << "\" />\n\t";
        fOutput << "</connectionPointIn>\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</inOutVariables>\n\t";
        fOutput << "<outputVariables>\n\t";
        fOutput << "<variable formalParameter=\"xSwitch_OUT\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 0 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xUpdate_PLC\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 1 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "<variable formalParameter=\"xTimeOut\">\n\t";
        fOutput << "<connectionPointOut>\n\t";
        fOutput << "<relPosition x=\"" << (0 + *iCfc_x) << "\" y=\"" << (16 + 2 + *iCfc_y) << "\" />\n\t";
        fOutput << "<expression />\n\t";
        fOutput << "</connectionPointOut>\n\t";
        fOutput << "</variable>\n\t";
        fOutput << "</outputVariables>\n\t";
        fOutput << "<addData>\n\t";
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfccalltype\" handleUnknown=\"implementation\">\n\t";
        fOutput << "<CallType xmlns=\"\">functionblock</CallType>\n\t";
        fOutput << "</data>\n\t";
        fOutput << "</addData>\n\t";
        fOutput << "</block>\n\t";

        (*iCfc_Order) += 2;
        (*iCfc_Id) += 16;
        (*iKnx)++;
        (*iKnxOutputs)++;

        if (*iCfc_x >= 40)
        {
            (*iCfc_x) = 2;
            (*iCfc_y) += 19;
            *xSpace = true;
        }
        else
        {
            *iCfc_x += 42;
            *xSpace = false;
        }
    }

    fOutput.close();
    return;
}
#endif