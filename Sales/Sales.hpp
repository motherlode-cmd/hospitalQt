#ifndef SALES
#define SALES
#include <string>
#include <vector>
#include <QStringList>
class Sales {
private:
    std::string passport_number;
    std::string number_of_flight;
    std::string number_of_ticket;
public:
    Sales() = default;
    Sales(QStringList & list);
    ~Sales() = default;
    std::string get_key();
    std::string get_passport_num();
    std::string get_number_of_flight();
    std::string get_number_of_ticket();
    void set_passport_num(std::string value);
    void set_number_of_flight(std::string value);
    void set_number_of_ticket(std::string value);
};

#endif

