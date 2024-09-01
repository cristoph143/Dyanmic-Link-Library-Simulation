// Dyanmic-Link-Library-Simulation.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Dyanmic-Link-Library-Simulation.h"


// This is an example of an exported variable
DYANMICLINKLIBRARYSIMULATION_API int nDyanmicLinkLibrarySimulation=0;

// This is an example of an exported function.
DYANMICLINKLIBRARYSIMULATION_API int fnDyanmicLinkLibrarySimulation(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDyanmicLinkLibrarySimulation::CDyanmicLinkLibrarySimulation()
{
    return;
}
