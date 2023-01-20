#pragma once

#ifdef DM_PLATFORM_WINDOWS
	#ifdef DM_BUILD_DLL
		#define DEMON_API __declspec(dllexport)
	#else 
		#define DEMON_API __declspec(dllimport)
	#endif
#else 
	#error Demon only supports Windows!
#endif