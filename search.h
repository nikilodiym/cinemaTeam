#ifndef SEARCH_H
#define SEARCH_H

#include "movie_management.h"
#include "header_lib.h"

class Search 
{
public:
	static vector<Movie*> search_by_name(const vector<Movie>& movies, const string& name);
	static vector<Movie*> search_by_genre(const vector<Movie>& movies, const string& genre);
	static vector<Movie*> search_by_rating(const vector<Movie>& movies, const string& rating);
};

#endif // SEARCH_H
