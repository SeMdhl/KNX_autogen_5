#pragma once
#ifndef mdhl_Knx
#define mdhl_Knx
#include <iostream>
#include <fstream>
#include <windows.h>
#include "mdhl_Knx_Items_v5.h"
#include "mdhl_Tools.h"







void WriteXML_KNX(std::string sPath, bool (&bUsed)[1000], std::string &sGVL, std::string (&sRom)[1000], std::string (&sRomtype)[1000], std::string (&sKommentar)[1000], std::string &sAdresseFormat, int const &iMax)
{
    //Variabel deklarering
    int iZero = 0, iSpan = 0, iMaster = 1, iKnx = 0, iMasterMax = 1, iKnxOutputs = -1, iCfc_id = 0, iCfc_Order = 0, iCfc_y = 3, iCfc_x = 2, iSize = 0, iAntall = 0, iTemp = 0, iLast1 = 0, iLast2 = 0;
    std::string sPreset = "";
    bool xComment = true, xSpace = false;


    sPath = sPath + "AutGenImport.xml";

    //Kopierer XML filens adresse, til utklippstavle
    const char* output = sPath.c_str();
    const size_t len = strlen(output) + 1;
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
    memcpy(GlobalLock(hMem), output, len);
    GlobalUnlock(hMem);
    OpenClipboard(0);
    EmptyClipboard();
    SetClipboardData(CF_TEXT, hMem);
    CloseClipboard();

    //Lager xml filen
    std::ofstream fOutput(sPath);

    if (fOutput.is_open() == false)
    {
        std::cout << "Error: cant open outputfile.\nLine: 908 mdhl.h";
        Sleep(10000);
        abort();
    }
    //Skriver begynnelse av XML filen, slik e!cockpit gjør under export.
    fOutput << "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n";
    fOutput << "<project xmlns=\"http://www.plcopen.org/xml/tc6_0200\">\n\t";
    fOutput << "<fileHeader companyName=\"WAGO\" productName=\"e!COCKPIT\" productVersion=\"e!COCKPIT\" creationDateTime=\"2021-01-18T14:20:23.2110188\" />\n\t";
    fOutput << "<contentHeader name=\"Adressering.ecp\" modificationDateTime=\"2021-01-18T11:51:27.6823754\">\n\t\t";
    fOutput << "<coordinateInfo>\n" + Tabs(3);
    fOutput << "<fbd>\n" + Tabs(4);
    fOutput << "<scaling x=\"1\" y=\"1\" />\n" + Tabs(3);
    fOutput << "</fbd>\n" + Tabs(3);
    fOutput << "<ld>\n" + Tabs(4);
    fOutput << "<scaling x=\"1\" y=\"1\" />\n" + Tabs(3);
    fOutput << "</ld>\n" + Tabs(3);
    fOutput << "<sfc>\n" + Tabs(4);
    fOutput << "<scaling x=\"1\" y=\"1\" />\n" + Tabs(3);
    fOutput << "</sfc>\n\t\t";
    fOutput << "</coordinateInfo>\n\t\t";
    fOutput << "<addData>\n" + Tabs(3);
    fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/projectinformation\" handleUnknown=\"implementation\">\n" + Tabs(4);
    fOutput << "<ProjectInformation />\n" + Tabs(3);
    fOutput << "</data>\n\t\t";
    fOutput << "</addData>\n\t";
    fOutput << "</contentHeader>\n\t";
    fOutput << "<types>\n\t\t";
    fOutput << "<dataTypes>\n\t\t";


    std::string sDatatypes[100];
    bool xUnik = false;

    //initializer array
    for (int i = 0; i < 100; i++)
    {
        sDatatypes[i] = "";
    }


    //Skriver datatyper som er brukt
    for (int i = 0; i < iMax; i++)
    {
        if (bUsed[i])
        {
            xUnik = true;
            for (int j = 0; j < 100; j++)
            {
                if (sRomtype[i] == sDatatypes[j])
                {
                    xUnik = false;
                    break;
                }
            }
            if (xUnik)
            {
                if (fOutput.is_open() == false)
                    fOutput.open(sPath, std::ios::app);

                fOutput << "<dataType name=\"dtRomtype_" << sRomtype[i] << "\">\n" + Tabs(3);
                fOutput << "<baseType>\n" + Tabs(4);
                fOutput << "<struct>\n" + Tabs(5);

                fOutput.close();

                iSize = sRomtype[i].size();

                for (int j = 0; j < iSize; j++)
                {
                    xComment = true;
                    iAntall = (stoi(sRomtype[i].substr(j, 1)));
                    if (j < sRomtype[i].size() && iAntall >= 1)
                    {
                        switch (j)
                        {
                        case 0:
                            Knx_dt_Rb(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 1:
                            Knx_dt_Hvac(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 2:
                            Knx_dt_Rt(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 3:
                            Knx_dt_Ry(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 4:
                            Knx_dt_Lh_OP(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        case 5:
                            Knx_dt_Lh_CMD(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        case 6:
                            Knx_dt_Lc_OP(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        case 7:
                            Knx_dt_Lc_CMD(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        case 8:
                            Knx_dt_Sp(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 9:
                            Knx_dt_Sp_Fb(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 10:
                            Knx_dt_Lu_V(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 11:
                            Knx_dt_Lu_Al(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 12:
                            Knx_dt_Lu_Cmd(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        default:
                            break;
                        }
                    }
                }
                fOutput.open(sPath, std::ios::app);

                fOutput << "</struct>\n" + Tabs(3);
                fOutput << "</baseType>\n" + Tabs(3);
                fOutput << "<addData />\n" + Tabs(2);
                fOutput << "</dataType>\n" + Tabs(1);

                for (int j = 0; j < 100; j++)
                {
                    if (sDatatypes[j] == "")
                    {
                        sDatatypes[j] = sRomtype[i];
                        break;
                    }
                }
            }
        }
        else
            break;
    }








    fOutput << "</dataTypes>\n\t\t";
    fOutput << "<pous>\n\t\t";

    //Finner ut hvor mange knx linjer som trengs
    for (int i = 0; i < iMax; i++)
    {
        if (bUsed[i])
        {
            iTemp = 0;
            iSize = sRomtype[i].size();
            for (int j = 0; j < iSize; j++)
            {
                iAntall = stoi(sRomtype[i].substr(j, 1));
                if (iAntall >= 1)
                    iTemp+= iAntall;
            }
            if ((iKnx + iTemp) == 255)
            {
                iMasterMax++;
                iKnx = 0;
            }
            else if ((iKnx + iTemp) > 255)
            {
                iMasterMax++;
                iKnx = 0;
                i--;
            }
            else
                iKnx += iTemp;
        }
        else
            break;
    }

    //Lager alle KNX linjer brukt
    for (int k = 0; k < iMasterMax; k++)
    {
        iMaster = k + 1;
        iKnx = 0;
        iCfc_id = 0;
        iCfc_Order = 0;
        iCfc_y = 2;
        iCfc_x = 2;
        //Finner max knx verdi for nåværende linje
        for (int i = iZero; i < iMax; i++)
        {
            if (bUsed[i])
            {
                iTemp = 0;
                iSize = sRomtype[i].size();
                for (int j = 0; j < iSize; j++)
                {
                    iAntall = stoi(sRomtype[i].substr(j, 1));
                    if (iAntall >= 1)
                        iTemp += iAntall;
                }
                if ((iKnx + iTemp) == 255)
                {
                    iKnx = 255;
                    iSpan = i + 1;
                    break;
                }
                else if ((iKnx + iTemp) > 255)
                {
                    iSpan = i;
                    break;
                }
                else
                {
                    iKnx += iTemp;
                    iSpan = i+1;
                }
            }
            else
                break;
        }
        iKnx = 1;


        if (fOutput.is_open() == false)
            fOutput.open(sPath, std::ios::app);

        fOutput << "<pou name=\"PRG_563_KNX_" << iMaster << "\" pouType=\"program\">\n" + Tabs(3);
        fOutput << "<interface>\n" + Tabs(4);
        fOutput << "<localVars>\n" + Tabs(5);



        //Local Var

        if (iKnxOutputs >= 0)
        {
            fOutput << "<variable name=\"i\">\n" + Tabs(6);
            fOutput << "<type>\n" + Tabs(7);
            fOutput << "<INT />\n" + Tabs(6);
            fOutput << "</type>\n" + Tabs(6);
            fOutput << "<initialValue>\n" + Tabs(7);
            fOutput << "<simpleValue value=\"0\" />\n" + Tabs(6);
            fOutput << "</initialValue>\n" + Tabs(6);
            fOutput << "<documentation>\n" + Tabs(7);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Felles</xhtml>\n" + Tabs(6);
            fOutput << "</documentation>\n" + Tabs(5);
            fOutput << "</variable>\n" + Tabs(5);

            fOutput << "<variable name=\"Interval\">\n" + Tabs(6);
            fOutput << "<type>\n" + Tabs(7);
            fOutput << "<derived name=\"OSCAT_BASIC.CLK_PRG\" />\n" + Tabs(6);
            fOutput << "</type>\n" + Tabs(5);
            fOutput << "</variable>\n" + Tabs(5);
        }
        //Resetter teller
        iKnxOutputs = -1;

        fOutput << "<variable name=\"typDPT\">\n" + Tabs(6);
        fOutput << "<type>\n" + Tabs(7);
        fOutput << "<derived name=\"typDPT\" />\n" + Tabs(6);
        fOutput << "</type>\n" + Tabs(5);
        fOutput << "</variable>\n" + Tabs(5);

        fOutput << "<variable name=\"KNX_master_" << iMaster << "\">\n" + Tabs(6);
        fOutput << "<type>\n" + Tabs(7);
        fOutput << "<derived name=\"WagoAppKNX.FbKNX_Master\" />\n" + Tabs(6);
        fOutput << "</type>\n" + Tabs(6);
        fOutput << "<documentation>\n" + Tabs(7);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">Master</xhtml>\n" + Tabs(6);
        fOutput << "</documentation>\n" + Tabs(5);
        fOutput << "</variable>\n" + Tabs(5);

        fOutput.close();

        //Skriver lokalvariabler
        for (int i = iZero; i < iSpan; i++)
        {
            if (bUsed[i])
            {
                iSize = sRomtype[i].size();
                xComment = true;
                for (int j = 0; j < iSize; j++)
                {
                    iAntall = stoi(sRomtype[i].substr(j, 1));
                    if (j < sRomtype[i].size() && iAntall >= 1)
                    {
                        switch (j)
                        {
                        case 0:
                            Knx_var_Rb(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 1:
                            Knx_var_Hvac(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 2:
                            Knx_var_Rt(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 3:
                            Knx_var_Ry(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 4:
                            Knx_var_Lh_OP(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        case 5:
                            Knx_var_Lh_CMD(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        case 6:
                            Knx_var_Lc_OP(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        case 7:
                            Knx_var_Lc_CMD(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        case 8:
                            Knx_var_Sp(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 9:
                            Knx_var_Sp_Fb(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 10:
                            Knx_var_Lu_V(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 11:
                            Knx_var_Lu_Al(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            break;

                        case 12:
                            Knx_var_Lu_Cmd(sPath, iMaster, &iKnx, sRom[i], &xComment, iAntall);
                            iKnxOutputs++;
                            break;

                        default:
                            break;
                        }
                    }
                }
            }
            else
                break;
        }

        //Åpner output fil igjen
        fOutput.open(sPath, std::ios::app);

        //Ender lokal variabler, og starter på program
        fOutput << "</localVars>\n" + Tabs(3);
        fOutput << "</interface>\n" + Tabs(3);
        fOutput << "<body>\n" + Tabs(4);
        fOutput << "<ST>\n" << Tabs(5);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\" />\n" << Tabs(5);
        fOutput << "</ST>\n" << Tabs(4);
        fOutput << "<addData>\n" << Tabs(5);
        fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/cfc\" handleUnknown=\"implementation\">\n" << Tabs(4);
        fOutput << "<CFC>\n\t";

        fOutput.close();    //Lukker fil før funksjoner kjøres

        //Skriv CFC kode for KNX ouput interval
        if (iKnxOutputs >= 0)
        {
            Knx_cfc_Interval(sPath, iKnxOutputs);
            iCfc_id = 22;
            iCfc_Order = 7;
        }
        Knx_cfc_Master(sPath, sGVL, sAdresseFormat, iMaster, &iCfc_Order, &iCfc_id);

        //Resetter Knx variabler brukt i lokal variabel deklarering
        iKnx = 1;
        iKnxOutputs = 0;


        for (int i = iZero; i < iSpan; i++)
        {
            if (bUsed[i])
            {
                Knx_cfc_comment_a(sPath, sRom[i], &iCfc_id, iCfc_y);

                iSize = sRomtype[i].size();

                for (int j = 0; j < iSize; j++)
                {
                    iAntall = stoi(sRomtype[i].substr(j, 1));
                    if (j < sRomtype[i].size() && iAntall >= 1)
                    {
                        switch (j)
                        {
                        case 0:
                            Knx_cfc_Rb(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 1:
                            Knx_cfc_Hvac(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 2:
                            Knx_cfc_Rt(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 3:
                            Knx_cfc_Ry(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 4:
                            Knx_cfc_Lh_OP(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, &iKnxOutputs, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 5:
                            Knx_cfc_Lh_CMD(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, &iKnxOutputs, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 6:
                            Knx_cfc_Lc_OP(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, &iKnxOutputs, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 7:
                            Knx_cfc_Lc_CMD(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, &iKnxOutputs, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 8:
                            Knx_cfc_Sp(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 9:
                            Knx_cfc_Sp_Fb(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 10:
                            Knx_cfc_Lu_V(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 11:
                            Knx_cfc_Lu_Al(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        case 12:
                            Knx_cfc_Lu_CMD(sPath, sGVL, sAdresseFormat, sRom[i], iMaster, &iKnx, &iCfc_Order, &iCfc_id, &iCfc_y, &iCfc_x, &xSpace, &iKnxOutputs, iAntall);
                            iLast2 = iLast1;
                            iLast1 = j;
                            break;

                        default:
                            break;
                        }
                    }
                }
                if (xSpace)
                {
                    iCfc_x = 2;
                    iCfc_y += 8;
                }
                else if ((iLast1 < 2 || iLast1 == 5 || iLast1 == 7 || iLast1 < 9) && (iLast2 < 2 || iLast2 == 5 || iLast2 == 7 || iLast1 < 9))
                {
                    iCfc_x = 2;
                    iCfc_y += 26;
                }
                else
                {
                    iCfc_x = 2;
                    iCfc_y += 27;
                }
            }
            else
                break;
        }
        iZero = iSpan;

        fOutput.open(sPath, std::ios::app);

        fOutput << "</CFC>\n" + Tabs(1);
        fOutput << "</data>\n" + Tabs(1);
        fOutput << "</addData>\n" + Tabs(1);
        fOutput << "</body>\n" + Tabs(1);
        fOutput << "<addData />\n" + Tabs(1);
        fOutput << "</pou>\n" + Tabs(1);
    }


    //GVL
    fOutput << "</pous>\n" + Tabs(1);
    fOutput << "</types>\n" + Tabs(1);
    fOutput << "<instances>\n" + Tabs(1);
    fOutput << "<configurations />\n" + Tabs(1);
    fOutput << "</instances>\n" + Tabs(1);
    fOutput << "<addData>\n" + Tabs(1);
    fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/globalvars\" handleUnknown=\"implementation\">\n" + Tabs(2);
    fOutput << "<globalVars name=\"" << sGVL <</*"\" retain=\"true\" persistent=\"true\*/"\">\n" + Tabs(3);

    for (int i = 0; i < iMasterMax; i++)
    {
        iMaster = i + 1;
        fOutput << "<variable name=\"" << sAdresseFormat << "_KNX_Card_" << iMaster << "_Status" << "\">\n" + Tabs(4);
        fOutput << "<type>\n" + Tabs(5);
        fOutput << "<BOOL />\n" + Tabs(4);
        fOutput << "</type>\n" + Tabs(4);
        fOutput << "<documentation>\n" + Tabs(4);
        fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">KNX kort " << iMaster << " status</xhtml>\n" + Tabs(3);
        fOutput << "</documentation>\n" + Tabs(3);
        fOutput << "</variable>\n" + Tabs(3);
    }
                                                        
    for (int i = 0; i < iMax; i++)
    {
        if (bUsed[i])
        {

            fOutput << "<variable name=\"" << sAdresseFormat << "_" << sRom[i] << "\">\n" + Tabs(4);
            fOutput << "<type>\n" + Tabs(5);
            fOutput << "<derived name=\"dtRomtype_" << sRomtype[i] << "\" />\n" + Tabs(4);
            fOutput << "</type>\n" + Tabs(4);
            fOutput << "<documentation>\n" + Tabs(4);
            fOutput << "<xhtml xmlns=\"http://www.w3.org/1999/xhtml\">" << sKommentar[i] << "</xhtml>\n" + Tabs(3);
            fOutput << "</documentation>\n" + Tabs(3);
            fOutput << "</variable>\n" + Tabs(3);
        }
        else
            break;
    }
    fOutput << "<addData>\n" << Tabs(4);

    fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/attributes\" handleUnknown=\"implementation\">\n" + Tabs(5);
    fOutput << "<Attributes>\n" + Tabs(6);
    fOutput << "<Attribute Name=\"qualified_only\" Value=\"\" />\n" + Tabs(5);
    fOutput << "</Attributes>\n" + Tabs(4);
    fOutput << "</data>\n" + Tabs(4);

    fOutput << "<data name=\"http://www.3s-software.com/plcopenxml/buildproperties\" handleUnknown=\"implementation\">\n" + Tabs(5);
    fOutput << "<BuildProperties>\n" + Tabs(6);
    fOutput << "<LinkAlways>true</LinkAlways>\n" + Tabs(5);
    fOutput << "</BuildProperties>\n" + Tabs(4);
    fOutput << "</data>\n" + Tabs(3);
    fOutput << "</addData>\n" + Tabs(2);
    fOutput << "</globalVars>\n" + Tabs(1);
    fOutput << "</data>\n";
    fOutput << "</addData>\n";
    fOutput << "</project>" << std::endl;

    fOutput.close();
}
#endif