#pragma once

#ifdef CT_PLATFORM_WINDOWS
	#ifdef CT_BUILD_DLL
		#define CHAOTIC_API __declspec(dllexport)
	#else
		#define CHAOTIC_API __declspec(dllimport)
	#endif
#else	
	#error Chaotic only supports windows. 
		
#endif
