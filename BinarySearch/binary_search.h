#pragma once

#ifndef binary_search_H_
#define binary_search_H_

template<typename T>
int BSearch(T arr_[], int my_begin, int my_end, T my_key)
{
	int mid = (my_begin + my_end) / 2;
	if ((my_end - my_begin) >= 0)
	{
		if (arr_[mid] == my_key)
		{
			return mid;
		}
		else if (arr_[mid] < my_key)
		{
			BSearch(arr_, mid + 1, my_end, my_key);
		}
		else if (arr_[mid] > my_key)
		{
			BSearch(arr_, my_begin, mid - 1, my_key);
		}
	}
	else
	{
		return -1;
	}
}
#endif // !binary_search_H_
