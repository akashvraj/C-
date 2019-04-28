#include<complex>
#include "Mandelbrot.h"

using namespace std;

namespace ImageProject
{
	Mandelbrot::Mandelbrot()
	{}
	
	Mandelbrot::~Mandelbrot()
	{}
	
	int Mandelbrot::getIteration(double x, double y)	//Mandelbrot algorithm
	{
		complex<double> z = 0;
		complex<double> c(x,y);
		
		int iterations = 0;
		
		while(iterations < MAX_ITERATIONS)
		{
			z = z*z + c;
			
			if(abs(z) > 2)
				break;
			
			iterations++;
		}
		
		return iterations;
	}
}	//ImageProject
