#pragma once
#include <iostream>

using namespace std;

class GeometryException : public domain_error
{
public:
	GeometryException(const string& msg);
};