/*
* opcoded by Amwey
*/
#pragma once
#include "Inc.h"
struct s_Three
{
	string s_Name_t;

	uint16_t s_Durability;
	uint16_t s_Weight;
	uint16_t s_Protection;

	uint_fast8_t s_Increase_Step;
	uint_fast8_t s_Resist;

	bool s_Fruit;
	bool s_Punch;
	s_Three* Next;
	s_Three* Previos;
};

struct s_Fruit
{
	string s_Name_f;

	bool s_Resist_toMagic;
	bool s_Regeneration_Health;

	s_Fruit* Next;
	s_Fruit* Previos;
};