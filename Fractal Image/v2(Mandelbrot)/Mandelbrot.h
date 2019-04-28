#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace ImageProject
{
	class Mandelbrot
	{
		public:
			static const int MAX_ITERATIONS = 1000;
			
			Mandelbrot();
			virtual ~Mandelbrot();
			static int getIteration(double x, double y);
	};	//Mandlebrot
}	//ImageProject

#endif	//MANDELBROT_H_
