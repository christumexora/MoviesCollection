#include <iostream>
#include "Movies.h"

using namespace std;

// Movies no-arg constructor
Movies::Movies() {
}

//Movies Destructor
Movies::~Movies(){
}

//add_movie expects the name of the movie, rating and watched count
bool Movies::add_movie(string movie_name, string movie_rating, int movie_watched){
 for (const Movie &movie : movies) {
        if (movie.get_name() == movie_name) {
            return false;  // Movie already exists
        }
    }
    movies.push_back(Movie(movie_name, movie_rating, movie_watched));
    return true;
}

//increment_watched expects the name of the move to increment the watched count    
bool Movies::increment_watched(string movie_name){
        for (Movie &movie : movies) {  // Iterate with non-const to modify movies
            if (movie.get_name() == movie_name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;  // Movie not found
}

//Display all the movie objects in the movie vector
void Movies::display() const {
    if (movies.empty()) {
        cout << "No movies to display." << endl;
    } else {
        for (const Movie &movie : movies) {
            movie.display();
        }
    }
}