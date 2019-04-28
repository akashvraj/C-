#include "Bitmap.h"
#include<iostream>

using namespace std;
using namespace ImageProject;

int main()
{
	const int WIDTH = 800;
	const int HEIGHT = 600;
	
	Bitmap bitmap(WIDTH,HEIGHT);
	
//	bitmap.setPixel(WIDTH/2, HEIGHT/2, 255,255,255);
for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			bitmap.setPixel(x, y, 150, 100 ,80);
		}
	}
	
	bitmap.write("test.bmp");
	
	cout<<"Finished" <<"\n";
	return 0;
}
