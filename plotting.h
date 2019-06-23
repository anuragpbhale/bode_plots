#ifndef PLOTTING_H
#define PLOTTING_H

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <time.h>
#include <cmath>
#include <math.h>


class plotting{
public:
	plotting(){
		Magnitude_Plots();
		Phase_Plots();
	}

private:
	void Magnitude_Plots();
	void Phase_Plots();
};
#endif