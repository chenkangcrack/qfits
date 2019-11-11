// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#ifdef QFITS_EXPORTS
#define QFITS_API __declspec(dllexport)
#else
#define QFITS_API __declspec(dllimport)
#endif

#ifdef WIN32
#define K_DECL	_cdecl
#else
#define K_DECL
#endif

#define KXVER 3
// add headers that you want to pre-compile here
#include "framework.h"
#include "k.h"
#pragma comment(lib,"q.lib")
#pragma comment(lib,"cfitsio.lib")

#ifdef __cplusplus
extern "C" {
#endif
	QFITS_API K K_DECL listHDUs(K x);
	QFITS_API K num_rows(K x, K y);
	QFITS_API K num_cols(K x, K y);
	QFITS_API K cols(K x, K y);
	QFITS_API K getColType(K x, K y, K z);
	QFITS_API K readLongCol(K x, K y, K z,K h);
	QFITS_API K readIntCol(K x, K y, K z, K h);
	QFITS_API K readDoubleCol(K x, K y, K z, K h);
	QFITS_API K readSymCol(K x, K y, K z, K h);
#ifdef __cplusplus
}
#endif


#endif //PCH_H
