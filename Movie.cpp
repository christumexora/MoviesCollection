#include <iostream>
#include "Movie.h"

using namespace std;



// Implemention of the construcor
Movie::Movie(string movie_name, string movie_rating, int movie_watched) : movie_name(movie_name), movie_rating(movie_rating), movie_watched(movie_watched)  {

}

//Implemention of the copy constructor
Movie::Movie(const Movie &source) : Movie{source.movie_name, source.movie_rating, source.movie_watched} {

}

// Implementation of the destructor
Movie::~Movie() {

}

// Implementation of the display method
// should just insert the movie attributes to cout
void Movie::display() const {
    cout << movie_name << ", " << movie_rating <<  ", " << movie_watched  <<   endl;

}