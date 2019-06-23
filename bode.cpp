#include "bode.h"

void bode::setupTF(){
	noOfPoles = 1;
	noOfZeroes = 0;
	num_K = 1.0;
	freq_corner_1 = 50;		// in Hz
}

double bode::get_magnitude(double & f){
	magnitude = num_K*2*pi*f/((1 + pow(f/50, 2)));
	magnitude = 20*log10(magnitude);
	return magnitude;
}

double bode::get_phase(double & f){
	phase = (pi/2) - 2*atan(f/50);
	phase = phase*180/pi;
	return phase;
}