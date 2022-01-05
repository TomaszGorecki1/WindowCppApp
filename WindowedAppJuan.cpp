//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <windows.h>
#include <shellapi.h>
#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <locale>
#pragma comment(lib,"ws2_32.lib")

#include "WindowedAppJuan.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TWindow1 *Window1;
//---------------------------------------------------------------------------
__fastcall TWindow1::TWindow1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TWindow1::Pr1Click(TObject *Sender)
{
        ShellExecute(NULL, "open", "https://github.com/TomaszGorecki1", NULL, NULL, SW_SHOWNORMAL); // By clicking on button it redirect you to my github page
}
//---------------------------------------------------------------------------
