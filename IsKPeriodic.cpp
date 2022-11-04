#include "IsKPeriodic.h"

bool IsKPeriodic (const std::string &str, size_t multiple)
{
	if (!multiple || str.empty() || str.size() % multiple)
		return false;

	for (size_t i = 0; multiple < str.size(); i++, multiple++) {
		if (str[i] != str[multiple])
			return false;
	}
		
	return true;
}
