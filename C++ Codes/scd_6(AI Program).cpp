#include "stdafx.h"

#include "Form1.h"

 

using namespace Tutorialnumber3IntroductiontoAI;

 

[STAThreadAttribute]

int main(array<System::String ^> ^args)
10
{
11
    // Enabling Windows XP visual effects before any controls are created
12
    Application::EnableVisualStyles();
13
    Application::SetCompatibleTextRenderingDefault(false);
14
 
15
    // Create the main window and run it
16
    Application::Run(gcnew Form1());
17
    return 0;
18
}



