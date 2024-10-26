#include "search.h"
#include "movie.h"
#include "header_lib.h"

vector<Movie*> Search::search_by_name(const vector<Movie>& movies, const string& name) {
	vector<Movie*> result;
	for (auto movie : movies) {
		if (movie.get_name() == name) {
			result.push_back(&movie);
		}
	}
	return result;
}

vector<Movie*> Search::search_by_genre(const vector<Movie>& movies, const string& genre) {
	vector<Movie*> result;
	for (auto movie : movies) {
		if (movie.get_genre() == genre) {
			result.push_back(&movie);
		}
	}
	return result;
}

vector<Movie*> Search::search_by_rating(const vector<Movie>& movies, const string& rating) {
	vector<Movie*> result;
	for (auto movie : movies) {
		if (movie.get_rating() == rating) {
			result.push_back(&movie);
		}
	}
	return result;
}

