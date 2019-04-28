#ifndef BITMAP_H_
#define BITMAP_H_
#include<string>
#include<cstdint>	//uint8_t
#include<memory>	//unique_ptr

using namespace std;

namespace ImageProject
{
	
	class Bitmap
	{
		private:
			int m_width{0};
			int m_height{0};
			unique_ptr<uint8_t[]> m_pPixels{nullptr};	//BItmap memory
			
		public:
			Bitmap(int width, int height);
			virtual ~Bitmap();
			
			bool write(std::string filename);	//true successful write else false
			void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	};
	
}	//ImageProject
#endif	//BITMAP_H_
