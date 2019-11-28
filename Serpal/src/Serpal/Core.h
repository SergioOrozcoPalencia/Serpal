#pragma once

#ifdef SP_PLATFORM_WINDOWS
	#ifdef SP_BUILD_DLL
		#define SERPAL_API __declspec(dllexport)
	#else
		#define SERPAL_API __declspec(dllimport)
	#endif
#else
	#error Serpal only supports Windows
#endif