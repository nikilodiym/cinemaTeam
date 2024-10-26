#ifndef TICKET_BOOKING_H
#define TICKET_BOOKING_H
#include "header_lib.h"

class ticket_booking
{
public:
	bool book_ticket(string movie_name, string date, string time, string seat, string user_name);
	void display_ticket() const;

private:
	map<string, vector<string>> ticket;
};

#endif // !TICKET_BOOKING_H
