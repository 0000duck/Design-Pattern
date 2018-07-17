#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "ShapeFactory.h"
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ShapeFactory* shapeFactory = new ShapeFactory();

	//��ȡ Circle �Ķ��󣬲��������� draw ����
	Shape* shape1 = shapeFactory->getShape("CIRCLE");

	//���� Circle �� draw ����
	shape1->draw();

	//��ȡ Rectangle �Ķ��󣬲��������� draw ����
	Shape* shape2 = shapeFactory->getShape("RECTANGLE");

	//���� Rectangle �� draw ����
	shape2->draw();

	//��ȡ Square �Ķ��󣬲��������� draw ����
	Shape* shape3 = shapeFactory->getShape("SQUARE");

	//���� Square �� draw ����
	shape3->draw();

	delete shapeFactory;
	delete shape1;
	delete shape2;
	delete shape3;

	return 0;
}