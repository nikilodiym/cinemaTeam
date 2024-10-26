#include "ticket_booking.h"
#include "header_lib.h"

bool ticket_booking::book_ticket(string movie_name, string date, string time, string seat, string user_name) {
	string ticket_id = movie_name + date + time + seat;
	if (ticket.find(ticket_id) != ticket.end()) {
		cout << "Ticket already booked" << endl;
		return false;
	}
	ticket[ticket_id] = { movie_name, date, time, seat, user_name };
	return true;
}

void ticket_booking::display_ticket() const {
	for (auto t : ticket) {
		cout << "Ticket ID: " << t.first << endl;
		cout << "Movie Name: " << t.second[0] << endl;
		cout << "Date: " << t.second[1] << endl;
		cout << "Time: " << t.second[2] << endl;
		cout << "Seat: " << t.second[3] << endl;
		cout << "User Name: " << t.second[4] << endl;
		cout << endl;
	}
}