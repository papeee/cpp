// mcpath.cpp : Defines the exported functions for the DLL application.

#include "stdafx.h"
#include <iostream>
#include <windows.system.h>
#define DLL extern "C" __declspec(dllexport)

DLL void __stdcall Directory() {
	char lpBuffer[100];
	int m = GetCurrentDirectoryA(100, lpBuffer);
	std::cout << "\nIn dll function, path query" << std::endl;
	std::cout << "Lenght of current path: " << m << "\nCurrent path: " << lpBuffer << std::endl;
	lpBuffer[100] = NULL;
	
}
