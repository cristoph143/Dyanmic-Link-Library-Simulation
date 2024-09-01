// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DYANMICLINKLIBRARYSIMULATION_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DYANMICLINKLIBRARYSIMULATION_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DYANMICLINKLIBRARYSIMULATION_EXPORTS
#define DYANMICLINKLIBRARYSIMULATION_API __declspec(dllexport)
#else
#define DYANMICLINKLIBRARYSIMULATION_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DYANMICLINKLIBRARYSIMULATION_API CDyanmicLinkLibrarySimulation {
public:
	CDyanmicLinkLibrarySimulation(void);
	// TODO: add your methods here.
};

extern DYANMICLINKLIBRARYSIMULATION_API int nDyanmicLinkLibrarySimulation;

DYANMICLINKLIBRARYSIMULATION_API int fnDyanmicLinkLibrarySimulation(void);
