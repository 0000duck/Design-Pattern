#include "Image.h"
#include <string>
#include <iostream>
#include "RealImage.h"
#include "ProxyImage.h"
using namespace std;

int main(void)
{
	Image* image = new ProxyImage("test_10mb.jpg");

	//ͼ�񽫴Ӵ��̼���
	image->display();
	cout << endl;
	//ͼ�񽫲���Ӵ��̼���
	image->display();

	delete image;

	return 0;
}