#ifndef BODE_H
#define BODE_H

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <time.h>
#include <cmath>
#include <math.h>


#define pi 3.14159

class bode{
public:
	void setupTF();
	double get_magnitude(double & sim_freq);
	double get_phase(double & sim_freq);

private:
	int noOfPoles;
	int noOfZeroes;
	double num_K;
	double freq_corner_1;
	double magnitude, phase;

};
#endif