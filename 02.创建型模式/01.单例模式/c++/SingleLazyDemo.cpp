#include <iostream>
#include "SingleLazyObject.h"

using namespace std;
SingleLazyObject* SingleLazyObject::instance = NULL;

int main(void)
{
	SingleLazyObject* object = SingleLazyObject::getInstance();

	//��ʾ��Ϣ
	object->showMessage();

	delete object;
	return 0;
}