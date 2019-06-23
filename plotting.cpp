#include "plotting.h"
#include "gnuplot.h"

void plotting::Magnitude_Plots(){

	gnuplot p;
	p("set term pdfcairo size 29.7cm,21cm");
	p("set output \'Magnitude_Plots.pdf\'");

	// xlabel remains unchanged for most quantities
	p("set xlabel \'frequency (in Hz)\' ");
	p("set title \'Magnitude Plot \' ");

	p("set ylabel \'Magnitude (in dB) \'");
	p("set logscale x 10");
	p("show grid");
	p("plot \"magnitude\" using 1:2 with lines title \"Magnitude\" ");

}


void plotting::Phase_Plots(){
	gnuplot p;
	p("set term pdfcairo size 29.7cm,21cm");
	p("set output \'Phase_Plots.pdf\'");

	// xlabel remains unchanged for most quantities
	p("set xlabel \'frequency (in Hz)\' ");
	p("set title \'Phase Angle Plot \' ");

	p("set ylabel \'Angle (in degree) \'");
	p("set logscale x 10");

	p("show grid");
	p("plot \"phase\" using 1:2 with lines title \"Phase Angle\" ");

}


