/*
* opcoded by Amwey
*/
#include "Three.h"
#include "Struct.h"
#include "Inc.h"



void Three::fruitGeneration(s_Three &three,s_Fruit &fruit,vector<DWORD>& p_location, vector<DWORD>& f_location) {
	if (three.s_Fruit == true)
	{
		iter = max_element(p_location.begin(),p_location.end());
		if (std::distance(p_location.begin(),iter) <= 500)
		{
			int rndspawntime = getRandomNumber(400, 5000);
			for (size_t i = 0; i <= rndspawntime; i++)
			{
				if (i == rndspawntime) {
					iter = f_location.begin();
					while (iter != f_location.end())
					{
						int rndspawnlocation = getRandomNumber(25, 150);
						f_location.erase(iter);
						f_location.insert(iter, rndspawnlocation);
						//Assets spawn
					}
				}
			}
		}
	}
}

void Three::riseThree(s_Three &three, vector<DWORD>& p_location)
{
	iter = max_element(p_location.begin(), p_location.end());
	if (std::distance(p_location.begin(), iter) >= 1200)
	{
		int rndincreasetime = getRandomNumber(1500, 6000);
		for (size_t i = 0; i <= rndincreasetime; i++)
		{
			if (i == rndincreasetime)
			{
				if (three.s_Increase_Step != 5)
				{
					three.s_Increase_Step++; 
					//Assets swaps
				}
			}
		}
	}
}

void Three::destroyThree(s_Three &three, vector<DWORD>& p_location)
{
	if (three.s_Protection == 0 || three.s_Punch)
	{
		//Assets swaps
	}
}
void Three::punchThree(s_Three &three) {
	bool punch = true;
	three.s_Punch = punch;
}
int Three::getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}