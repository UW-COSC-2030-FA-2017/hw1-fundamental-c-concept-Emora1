//Evan Mora


#include <Collection.h>
#include <iostream>
#include <stdio.h>
#include <cstdlib>
template<class T>
using namespace std;

//Is empty function

bool Collection<T> :: isEmpty() const
{
	for (int i = 0; i < 256; i++)
	{
		if (collection[i] != null)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}