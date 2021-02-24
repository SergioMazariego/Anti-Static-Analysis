// Anti-Static-Analysis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <windows.h>
#include <iostream>
#include <stdio.h> 

//Handle de la libreria.
HMODULE LibraryHandle = ::LoadLibrary(TEXT("ntdll.dll"));
// Direccion de memoria de la libreria
FARPROC function = GetProcAddress(LibraryHandle, "NtUnmapViewOfSection");

int main()
{
   
   printf("Handle de ntdll.dll: %p\n", LibraryHandle);
   printf("Direccion de la funcion NtUnampViewOfSection de ntdll.dll: %p", function);
}


/* 1. Conseguir el nombre de la libreria donde está la función de interes.
   2. Conseguir el nombre de la funcion de la libreria por medio del handle de esta última.
   3. Obtener direccion de memoria de la funcion a importar.
*/ 
