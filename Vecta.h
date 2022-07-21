// Lic:
// Vecta.h
// Vecta (header)
// version: 22.07.03
// Copyright (C) 2022 Jeroen P. Broks
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
// 1. The origin of this software must not be misrepresented; you must not
// claim that you wrote the original software. If you use this software
// in a product, an acknowledgment in the product documentation would be
// appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
// misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
// EndLic

// IMPORTANT NOTE!
// The routine to make it possible to recalculate the time systems is zlib.
// The Phantasar Time system itself is NOT! It's proparty of Jeroen P. Broks
// And its usage in your own work is prohibited, unless you do not plan to 
// release it at all, or will not gain any profit from it in neither, money, nor
// goods, nor services. And Jeroen P. Broks MUST always be credited.

#ifndef INCLUDED_PHANTASARVECTA
#define INCLUDED_PHANTASARVECTA
#ifdef __cplusplus
extern "C" {
#endif


typedef struct TimeEarth {
	unsigned int
		Hour,
		Minute,
		Second;
} TimeEarth;

typedef struct TimePhantsar {
	unsigned int Millo;
	unsigned char Vecta;
} TimePhantasar;

TimeEarth PhanToEarth(unsigned int v, unsigned int m);
TimeEarth PhanToEarth2(TimePhantasar t);

TimePhantasar EarthToPhan(unsigned int h, unsigned int m, unsigned int s);
TimePhantasar EarthToPhan2(TimeEarth t);

#ifdef __cplusplus
}

static TimePhantasar EarthToPhan(TimeEarth t) { EarthToPhan2(t); }
static TimeEarth PhanToEarth(TimePhantasar t) { PhanToEarth(t); }
#endif
#endif