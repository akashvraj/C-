#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include<cstdint>	// int32_t

using namespace std;

#pragma pack(2)	//No extra padding

namespace ImageProject
{

struct BitmapFileHeader
{
	char header[2] = {'B','M'};		//Tells its a bitmap file
	int32_t fileSize;
	int32_t reserved{0};	//Not used
	int32_t dataOffset;		//How long into the file actual data begins
};

}	//ImageProject
#endif	/*BITMAPFILEHEADER_H_*/
