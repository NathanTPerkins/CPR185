#ifndef COLORS_H
#define COLORS_H

#include <stdio.h>

/*
 * Color Codes -> https://www.theurbanpenguin.com/4184-2/
 */

void set_black(){printf("\033[0;30m");}
void set_red(){printf("\033[0;31m");}
void set_green(){printf("\033[0;32m");}
void set_yellow(){printf("\033[0;33m");}
void set_blue(){printf("\033[0;34m");}
void set_purple(){printf("\033[0;35m");}
void set_cyan(){printf("\033[0;36m");}
void set_white(){printf("\033[0;37m");}
void reset_color(){printf("\033[0m");}

#endif