#include "Sales.hpp"

Sales::Sales(QStringList & newValue) {
    passport_number = newValue.at(0).toStdString();
    number_of_ticket = newValue.at(1).toStdString();
    number_of_flight = newValue.at(2).toStdString();
}

std::string Sales::get_key() {
    return number_of_ticket;
}
std::string Sales::get_passport_num() {
    return passport_number;
}
std::string Sales::get_number_of_flight() {
    return number_of_flight;
}
std::string Sales::get_number_of_ticket() {
    return number_of_ticket;
}
void Sales::set_passport_num(std::string value) {
    passport_number = value;
}
void Sales::set_number_of_flight(std::string value) {
    number_of_flight = value;
}
void Sales::set_number_of_ticket(std::string value) {
    number_of_ticket = value;
}
