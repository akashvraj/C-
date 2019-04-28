 #include<iostream>
#include<cstdint>
#include "Bitmap.h"
#include "Mandelbrot.h"

using namespace std;
using namespace ImageProject;

int main()
{
	const int WIDTH = 800;
	const int HEIGHT = 600;
	
	Bitmap bitmap(WIDTH,HEIGHT);
	
	double min = 999999;
	double max = -999999;
	
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			double xFractal = (x - WIDTH/2 -200) * 2.0/HEIGHT  ;
			double yFractal = (y - HEIGHT/2) * 2.0/HEIGHT;
			
			int iterations  = Mandelbrot::getIteration(xFractal, yFractal);
			
			uint8_t color = (uint8_t)(256 * (double)iterations/Mandelbrot::MAX_ITERATIONS);
			
//			cout<<"x=" <<x <<" y=" <<y <<" color=" <<(int)color <<"\n";
			
			color = color*color*color;
			
			bitmap.setPixel(x,y,color,0,color);
			
			if(color < min)
				min = color;
			
			if(color > max)
				max = color;
		}
	}
	
	bitmap.write("test.bmp");
	
	cout<<"Finished" <<"\n";
	return 0;
}
