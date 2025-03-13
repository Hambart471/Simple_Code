// Reviewed

#include <iostream>
#include <string>
using namespace std;

class Image
{
public:
	class Pixel
	{
	public:
		Pixel(int r, int g, int b);
		string get_info();
	private:
		int r;
		int g;
		int b;
	};

	void get_image_info();

private:
	static const int LENGTH = 5;

	Pixel pixels[LENGTH]
	{
		Pixel(0,1,2),
		Pixel(3,4,5),
		Pixel(6,7,8),
		Pixel(9,10,11),
		Pixel(12,13,14)
	};
};

Image::Pixel::Pixel(int r, int g, int b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}

string Image::Pixel::get_info()
{
	return "Pixel: r = " + to_string(r) + ", g = " + to_string(g) + ", b = " + to_string(b);
}

void Image::get_image_info()
{
	for (int i = 0; i < LENGTH; ++i)
	{
		cout << pixels[i].get_info() << endl;
	}
}

class Image2
{
public:
	class Pixel
	{
	public:
		Pixel(int r, int g, int b);
		string get_info();
	private:
		int r;
		int g;
		int b;
	};

	void get_image_info();

private:
	static const int LENGTH = 5;

	Pixel pixels[LENGTH]
	{
		Pixel(0,1,2),
		Pixel(3,4,5),
		Pixel(6,7,8),
		Pixel(9,10,11),
		Pixel(12,13,14)
	};
};

Image2::Pixel::Pixel(int r, int g, int b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}

string Image2::Pixel::get_info()
{
	return "Pixel: r = " + to_string(r) + ", g = " + to_string(g) + ", b = " + to_string(b);
}

void Image2::get_image_info()
{
	for (int i = 0; i < LENGTH; ++i)
	{
		cout << pixels[i].get_info() << endl;
	}
}

int main()
{
	Image image;
	image.get_image_info();
	cout << endl;

	Image::Pixel pixel(0, 1, 2);
	cout << pixel.get_info() << endl;
	cout << endl;

	Image2 image2;
	image2.get_image_info();
	cout << endl;

	// The class Pixel has the same name in both Image and Image2, but they belong to different scopes.
	// Their implementations can differ independently.

	Image2::Pixel pixel2(0, 1, 2);
	cout << pixel2.get_info() << endl;
}