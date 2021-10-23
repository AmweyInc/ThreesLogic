/*
* opcoded by Amwey
*/
#pragma once
#include "Inc.h"
class Three
{
public:
	

protected:
	void fruitGeneration(s_Three &three, s_Fruit &fruit, vector<DWORD>& p_location, vector<DWORD>& f_location);
	void riseThree(s_Three &three,vector<DWORD>& p_location);
	void destroyThree(s_Three &three, vector<DWORD>& p_location);
	void punchThree(s_Three &three);
	int getRandomNumber(int min, int max);

private:
	
	vector<DWORD> p_location{ 0,0,0 };
	vector<DWORD> f_location{ 0,0,0 };
	vector<DWORD>::iterator iter;
	mt19937_64 randomseed;
	

};