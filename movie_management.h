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
	void add_movie(const Movie& movie);
	void edit_movie(const string& name, const Movie& new_details);
	void delete_movie(const string& name);
	vector<Movie> get_movies() const;

private:
	vector<Movie> movies;
};

#endif