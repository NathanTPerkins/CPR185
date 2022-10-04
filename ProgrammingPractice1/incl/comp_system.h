#ifndef COMP_SYSTEM_H
#define COMP_SYSTEM_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//Obtained the macro information from -> https://iq.opengenus.org/detect-operating-system-in-c/
//Unistd documentation -> https://pubs.opengroup.org/onlinepubs/7908799/xsh/unistd.h.html
#if _WIN32
int clear_screen(){return system("cls");}
#else
int clear_screen(){return system("clear");}

#endif


#endif