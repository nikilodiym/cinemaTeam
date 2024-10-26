#include "movie_management.h"
#include "header_lib.h"

void movie_management::add_movie(const Movie& movie)
{
	movies.push_back(movie);
	cout << "Movie added successfully!" << endl;
}

void movie_management::edit_movie(const string& name, const Movie& new_details)
{
	for (int i = 0; i < movies.size(); i++)
	{
		if (movies[i].name == name)
		{
			movies[i] = new_details;
			cout << "Movie edited successfully!" << endl;
			return;
		}
	}
	cout << "Movie not found!" << endl;
}

void movie_management::delete_movie(const string& name)
{
	for (int i = 0; i < movies.size(); i++)
	{
		if (movies[i].name == name)
		{
			movies.erase(movies.begin() + i);
			cout << "Movie deleted successfully!" << endl;
			return;
		}
	}
	cout << "Movie not found!" << endl;
}

vector<Movie> movie_management::get_movies() const
{
	return movies;
}