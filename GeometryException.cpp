#include "GeometryException.h"
#include "Figure.h"

GeometryException::GeometryException(const string& msg) : domain_error(msg) {}