#include <iostream>
#include "Movies.h"


using namespace std;

// Function prototypes
void increment_watched(Movies &movies, string movie_name);
void add_movie(Movies &movies, string movie_name, string movie_rating, int movie_watched);

/******************************************************************
 * helper function 
 * increment_watched expects a reference to a Movies object 
 * and the name of the movie to increment the watched count
 *
 * If the watched count was incremented successfully it
*  displays a success message
*  otherwise the watched count could not be incremented
*  because the name of the movie was not found
 * ***************************************************************/
void increment_watched(Movies &movies, string movie_name) {
    if (movies.increment_watched(movie_name)) {
        cout << movie_name << " watch incremented" << endl;
    } else {
        cout << movie_name << " not found" << endl;
    }
}

/******************************************************************
* helper function
*  add_movie expects a reference to a Movies object 
 * and the name of the movie, the rating and the watched count
 *
 * If the movie was successfully added to the movies object it
*  displays a success message
*  otherwise the movie was not added 
*  because the name of the movie was already in movies
 * ***************************************************************/
void add_movie(Movies &movies, string movie_name, string movie_rating, int movie_watched) {
    if (movies.add_movie(movie_name, movie_rating, movie_watched)) {
        cout << movie_name << " added" << endl;
    } else {
        cout << movie_name << " already exists" << endl;
    }
}




int main() {
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13",2);                 // OK
    add_movie(my_movies,"Star Wars", "PG",5);             // OK
    add_movie(my_movies,"Cinderella", "PG",7);           // OK
    
    my_movies.display();   // Big, Star Wars, Cinderella
    
    add_movie(my_movies,"Cinderella", "PG",7);            // Already exists
    add_movie(my_movies,"Ice Age", "PG",12);              // OK
 
    my_movies.display();    // Big, Star Wars, Cinderella, Ice Age
    
    increment_watched(my_movies,"Big");                    // OK
    increment_watched(my_movies,"Ice Age");              // OK
    
    my_movies.display();    // Big and Ice Age watched count incremented by 1
    
    increment_watched(my_movies,"XXX");         // XXX not found

	return 0;
}