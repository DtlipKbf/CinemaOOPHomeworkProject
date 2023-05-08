#include "manager.h"

Cinema Manager::findBestFilm(List list) {
	Cinema best = list.getCinema(0);

	for (int i = 1; i < list.getSize(); i++) {
		if (best.getMark() < list.getCinema(i).getMark()) {
			best = list.getCinema(i);
		}
	}

	return best;
}
float Manager::findAvgMark(List list) {
	float avg = 0.0;

	for (int i = 0; i < list.getSize(); i++) {
		avg += list.getCinema(i).getMark();
	}

	return avg / list.getSize();
}