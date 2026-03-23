#pragma once

#include "Artwork.hpp"
#include <vector>

class Gallery {
public:
	std::vector<Artwork> artworks;

	void addArtwork(Artwork&& art);
	void sellArtwork(int id);
	void displayGallery() const;

	Artwork* getArtwork(int index);

	Gallery(const Gallery&) = delete;
	Gallery() = default;
};
