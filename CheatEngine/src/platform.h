#ifndef PLATFORM_H
#define PLATFORM_H

#ifdef _WIN32
  #include "Windows.h"
	typedef HANDLE process_id;
#endif

#endif