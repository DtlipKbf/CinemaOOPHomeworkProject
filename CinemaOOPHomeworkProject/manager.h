#pragma once
#include "list.cpp"
class Manager {
public:
	static Cinema findBestFilm(List list);
	static float findAvgMark(List list);
};