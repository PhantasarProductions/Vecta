// Lic:
// ***********************************************************
// Test.c
// This particular file has been released in the public domain
// and is therefore free of any restriction. You are allowed
// to credit me as the original author, but this is not
// required.
// This file was setup/modified in:
// 2022
// If the law of your country does not support the concept
// of a product being released in the public domain, while
// the original author is still alive, or if his death was
// not longer than 70 years ago, you can deem this file
// "(c) Jeroen Broks - licensed under the CC0 License",
// with basically comes down to the same lack of
// restriction the public domain offers. (YAY!)
// ***********************************************************
// Version 22.07.03
// EndLic


#include <stdio.h>
#include "Vecta.h"

int main(int c, char** a) {
	/*
	for (unsigned char v = 0; v <20; v++) for (unsigned int m = 0; m < 1000; m++) {
		TimeEarth r = PhanToEarth(v, m);
		printf("%2d:%03d -> %2d:%02d:%02d\n", v, m,r.Hour,r.Minute,r.Second);
	}
	//*/
	//*
	//for (unsigned char h = 0; h < 24; h++) for (unsigned char m = 0; m < 60; m++) for (unsigned char s = 0; s < 50; s++) {
	for (unsigned char h = 0; h < 12; h++) for (unsigned char m = 0; m < 60; m++) for (unsigned char s = 0; s < 50; s++) {
		TimePhantasar r = EarthToPhan(h, m, s);
		if (s % 5 == 0) printf("\n");
		printf("%2d:%02d:%02d -> %2d:%03d\t", h, m, s, r.Vecta, r.Millo);
	}
	printf("\n");
	//*/
}