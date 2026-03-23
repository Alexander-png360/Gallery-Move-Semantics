#include "Artwork.hpp"
#include <iostream>



void Artwork::markAsSold() {
	sold = true;
}


Artwork::Artwork(const std::string& artTitle, const std::string& artistFullName, int artId, const std::string& artworkMedium, double artworkPrice, bool soldStatus)
	: title(artTitle), artistName(artistFullName), id(artId), medium(artworkMedium), price(artworkPrice), sold(soldStatus) {

}

// Move Constructor
Artwork::Artwork(Artwork&& other)
	: title(std::move(other.title)),
	artistName(std::move(other.artistName)),
	id(other.id),
	medium(std::move(other.medium)),
	price(other.price),
	sold(other.sold)

{

}

// Copy Constructor
Artwork::Artwork(const Artwork& other)
	: title(other.title),
	artistName(other.artistName),
	id(other.id),
	medium(other.medium),
	price(other.price),
	sold(other.sold)
{
	
}
