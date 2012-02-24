#define _GNU_SOURCE 1
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <dlfcn.h>

char* strsignal(int sig) 
{
	static char* (*strsignal_)(int sig) = NULL;
	static char* fuuuu = "SEGMENTATION   ________\n    F...    __/     /  \\  FFFFFFF\n           /   \\   /__  \\ FFFFFFF\n          /  ___\\  | (|  \\  FFFFFF\n          | |)  |  \\__/   \\  FFFUU\n          | \\ _ / ____     |  UUUU\n          |      / VVV\\_   |  UUUU\n          |     /   ~   \\  |  UUUU\n           \\   /__M_M___/  |  UUUU\n            \\_____________/   UUUU-";

	if( strsignal_ == NULL ) {
		strsignal_ = (char*(*)())(intptr_t)dlsym( RTLD_NEXT, "strsignal" );
	}

	if( sig == 11 ) {
		return fuuuu;
	}

	return strsignal_( sig );
}

