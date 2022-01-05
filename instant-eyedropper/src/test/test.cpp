#include <iostream>
#include <Windows.h>
#include <tchar.h>

#include "test.h"


/*
just for testing some code to debug!
*/
void CodeTest()
{
	HMODULE hmodcomctl = LoadLibrary(_T("comctl32.dll"));
	std::cout << "hmodcomctl: "<< hmodcomctl<< std::endl;
}