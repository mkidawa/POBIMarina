//
// Created by pobi on 15.01.19.
//

#ifndef PORT_RENTER_HPP
#define PORT_RENTER_HPP

#include <string>
#include <sstream>
#include <memory>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/string_generator.hpp>
#include "RenterType.hpp"
#include "Yacht.hpp"
#include "Motorboat.hpp"

class Renter;
typedef std::shared_ptr<Renter> Renter_ptr;
typedef std::shared_ptr<RenterType> RenterType_ptr;


class Renter {
    boost::uuids::uuid UUID;
    std::string name;
    std::string country;
    RenterType_ptr innerRenter;
public:
    Renter(std::string name, std::string country);
    Renter(std::string name, std::string country, RenterType_ptr innerRenter);
    Renter(const Renter& R);
    Renter();
    std::string get_info();
    const RenterType_ptr &getInnerRenter() const;
    const std::string &getName() const;
    const std::string &getCountry() const;
    double get_realPrice();
    boost::uuids::uuid getUUID();
    void operator=(const Renter& R);
    bool contains_number(const std::string &c);
    virtual ~Renter();
};


#endif //PORT_RENTER_HPP
