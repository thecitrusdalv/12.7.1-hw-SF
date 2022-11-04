#include "IsKPeriodic.h"

bool IsKPeriodic (const std::string &str, size_t multiple)
{
	if (!multiple || str.empty() || str.size() % multiple)
		return false;

	size_t i = multiple, j = 0;

	while (i < str.size()) {
		if (str[j] != str[i])
			return false;
		j++; i++;
	}
	
	return true;
}
