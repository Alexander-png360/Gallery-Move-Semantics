#include "Gallery.hpp"
#include "Exhibition.hpp"
#include "Artwork.hpp"
#include <iostream>
#include <iomanip>

int main() {
	std::cout << std::fixed << std::setprecision(0);

    Artwork sunflowers("Sunflowers", "Vincent van Gogh", 1, "oil painting", 1200000);
    std::cout << "ID: " << sunflowers.id << ", Title: " << sunflowers.title
        << ", Artist: " << sunflowers.artistName << ", Medium: " << sunflowers.medium
        << ", Price: " << sunflowers.price << std::endl;

    Artwork starryNight("Starry Night", "Vincent van Gogh", 2, "oil painting", 1000000);

    Artwork galleryCopy(starryNight);

    Artwork artworkForTransfer = std::move(starryNight);

    Artwork auctionTransfer(std::move(artworkForTransfer));

    std::cout << "\ngalleryCopy -> ID: " << galleryCopy.id << ", Title: " << galleryCopy.title << std::endl;
    std::cout << "auctionTransfer -> ID: " << auctionTransfer.id << ", Title: " << auctionTransfer.title << std::endl;
    std::cout << "starryNight -> ID: " << starryNight.id << ", Title: " << starryNight.title << std::endl;

    Artwork theScream("The Scream", "Edvard Munch", 3, "tempera", 1500000);
    Artwork digitalDream("Digital Dream", "Alice Doe", 4, "digital art", 5000);

    Gallery gallery;
    gallery.addArtwork(std::move(sunflowers));
    gallery.addArtwork(std::move(theScream));
    gallery.addArtwork(std::move(digitalDream));

    std::cout << "\n--- Gallery Display ---" << std::endl;
    gallery.displayGallery();

    // STEP 20: Exhibition and Sales
    Exhibition exhibition;
    // We access artworks by index as stored in the gallery vector
    exhibition.addToExhibition(gallery.getArtwork(0)); // Sunflowers
    exhibition.addToExhibition(gallery.getArtwork(2)); // Digital Dream

    std::cout << "\n--- Exhibition Before Sale ---" << std::endl;
    exhibition.showExhibition();

    // Mark ID 4 (Digital Dream) as sold
    gallery.sellArtwork(4);

    std::cout << "\n--- Exhibition After Sale ---" << std::endl;
    exhibition.showExhibition();

    return 0;
}
