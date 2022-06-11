#pragma once

#define MACRO_NAME      0
#define _MACRO_NAME     1
#define __MACRO_NAME    2
#define ___MACRO_NAME   3
#define ____MACRO_NAME  4
#define _____MACRO_NAME 5

#if true
#	if false
#		define A
#	else
#		define B
#	endif
#else
#	define C
#endif
