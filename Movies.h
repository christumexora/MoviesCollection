#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

using namespace std;

class Movies
{
    private:
        vector<Movie> movies;
    public:
        Movies();       //Constructor
        ~Movies();      //Destructor
        
        bool add_movies(string movie_name, string movie_rating, int movie_watched)
        bool increment_watched(string movie_name);
        void display() const;
};

#endif          // _MOVIES_H_