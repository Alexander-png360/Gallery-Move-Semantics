#pragma once

#include <string>

class Artwork {
public:
	std::string title;
	std::string artistName;
	int id;
	std::string medium;
	double price;
	bool sold;

	Artwork() = delete;

	Artwork(const std::string& artTitle, const std::string& artistFullName, int artId, const std::string& artworkMedium, double artworkPrice, bool soldStatus = false);

	//Copy Constructor 
	Artwork(const Artwork& Other);

	//Move Constructor
	Artwork(Artwork&& other);

	void markAsSold();
};
