#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <time.h>
#include <cmath>
#include <math.h>

#include "bode.h"
#include "plotting.h"

using namespace std;

#define pi 3.14159

int main()
{
	ofstream magnitude("magnitude",ios::out);
	ofstream phase("phase",ios::out);

	double sim_freq = 0.01;
	double mag, ph;			// in Hz
	bode mybode;		// object of class bode
	mybode.setupTF();

	while(sim_freq <= 100000){
		mag = mybode.get_magnitude(sim_freq);
		ph = mybode.get_phase(sim_freq);

		magnitude << sim_freq << " " << mag << endl; 		// magnitude
		phase << sim_freq << " " << ph << endl;					// phase in degrees

		if(sim_freq < 1){
			sim_freq = sim_freq + 0.01;
		} else {
			sim_freq++;
		}
	}
	plotting plots;

	return 0;
}