#ifndef BITMAPINFOHEADER_H_
#define BITMAPINFOHEADER_H_

#include<cstdint>	// int32_t

using namespace std;

#pragma pack(2)	//No extra padding

namespace ImageProject
{

struct BitmapInfoHeader
{
	int32_t headerSize{40};		//Total size of struct
	int32_t width;
	int32_t height;
	int16_t planes{1};
	int16_t bitsPerPixel{24};	// r-8 bits  g-8 bits  b-6 bits = 24
	int32_t compression{0};
	int32_t dataSize{0};
	int32_t horizontalResolution{2400};
	int32_t verticalResolution{2400};
	int32_t colors{0};
	int32_t importantColors{0};
};

}	//ImageProject
#endif	/*BITMAPINFOHEADER_H_*/
