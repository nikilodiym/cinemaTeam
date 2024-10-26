#ifndef MOVIE_MANAGEMENT_H
#define MOVIE_MANAGEMENT_H
#include "header_lib.h"

struct Movie 
{
	string name;
	string genre;
	int rating;
	string year;
	string director;
};

class movie_management 
{
public:
	void add_movie(string name, string genre, int rating, string year, string director);
	void edit_movie(string name, string genre, int rating, string year, string director);
	void delete_movie(string name);

private:
	vector<Movie> movies;
};

#endif