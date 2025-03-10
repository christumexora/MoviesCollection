#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

using namespace std;


class Movie
{
    private:
        string movie_name;
        string movie_rating;
        int movie_watched;
    public:
        //Constructor
        Movie(string movie_name, string movie_rating, int movie_watched);
        
        //Copy constructor
        Movie(const Movie &source);
        
        //Destructor
        ~Movie();
        
        //Setters and Getters
        void set_name(string movie_name){
            this->movie_name = movie_name;
            }
        string get_name() const{
            return movie_name;
            }

        void set_rating(string movie_rating){
            this->movie_rating = movie_rating;
            }
        string get_rating() const{
            return movie_rating;
            }

        void set_watched(int movie_watched){
            this->movie_watched = movie_watched;
            }
        int get_watched() const{
            return movie_watched;
            }
            
        // Simply increment the movie_watched attribute by 1
        void increment_watched(){
            ++movie_watched; 
            }

        // simply displays the movie information ex.) Prison Break, PG-13, 2
        void display() const;
        
};

#endif // _MOVIE_H_