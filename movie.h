#ifndef MOVIE_H
#define MOVIE_H

#include "interface_actor.h"

class Movie {
private:
	string name;
	string genre;
	string rating;
	string year;
	string director;
	vector<IActor*> actors;
public:
	Movie() = default;
	Movie(string name, string genre, string rating, string year, string director, vector<IActor*> actors);
	~Movie();
	string get_name();
	string get_genre();
	string get_rating();
	string get_year();
	string get_director();
	vector<IActor*> get_actors();
	void set_name(string name);
	void set_genre(string genre);
	void set_rating(string rating);
	void set_year(string year);
	void set_director(string director);
	void set_actors(vector<IActor*> actors);
};

Movie::Movie(string name, string genre, string rating, string year, string director, vector<IActor*> actors) {
	this->name = name;
	this->genre = genre;
	this->rating = rating;
	this->year = year;
	this->director = director;
	this->actors = actors;
}

Movie::~Movie() {
	for (auto actor : actors) {
		delete actor;
	}
}

string Movie::get_name() {
	return name;
}

string Movie::get_genre() {
	return genre;
}

string Movie::get_rating() {
	return rating;
}

string Movie::get_year() {
	return year;
}

string Movie::get_director() {
	return director;
}

vector<IActor*> Movie::get_actors() {
	return actors;
}

void Movie::set_name(string name) {
	this->name = name;
}

void Movie::set_genre(string genre) {
	this->genre = genre;
}

void Movie::set_rating(string rating) {
	this->rating = rating;
}

void Movie::set_year(string year) {
	this->year = year;
}

void Movie::set_director(string director) {
	this->director = director;
}

void Movie::set_actors(vector<IActor*> actors) {
	this->actors = actors;
}


#endif
