// Lic:
// Vecta.c
// Vecta
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


#include "Vecta.h"
#include <math.h>

static const unsigned int Earth_Etmaal = 86400;
static const unsigned int Phantasar_Etmaal = 20000;


TimeEarth PhanToEarth(unsigned int v, unsigned int m) {
	TimeEarth ret;
	unsigned int TotalMillo = (v * 1000) + m;
	unsigned int TotalSecond = (int)(floor(((float)TotalMillo / (float)Phantasar_Etmaal) * (float)Earth_Etmaal));
	int TotalMinute = (int)floor((double)TotalSecond / 60.0);
	ret.Second = TotalSecond % 60;	
	ret.Minute = TotalMinute % 60;
	ret.Hour = (unsigned char)floor(((float)TotalMinute / 60.0));	
	return ret;
}

TimeEarth PhanToEarth2(TimePhantasar t) {
	return PhanToEarth(t.Vecta, t.Millo);
}

TimePhantasar EarthToPhan(unsigned int h, unsigned int m, unsigned int s) {
	TimePhantasar ret;
	unsigned int TotalSeconds = s + (m * 60) + (h * 60 * 60);
	unsigned int TotalMillo = (int)(floor(((float)TotalSeconds / (float)Earth_Etmaal) * (float)Phantasar_Etmaal));
	ret.Vecta = (unsigned char)floor(TotalMillo / 1000);
	ret.Millo = TotalMillo % 1000;
	return ret;
}

TimePhantasar EarthToPhan2(TimeEarth t) {
	return EarthToPhan(t.Hour,t.Minute,t.Second);
}