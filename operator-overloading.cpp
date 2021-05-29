//  Created by Benjamin George on 28/05/2021.

#include <cstdio>
#include <iostream>
#include <string>

class Position {
    int longitude = 0;
    int latitude = 0;
    std::string name = "unknown";
public:
    Position() {};
    Position(const std::string & title, int a, int b);
    int getX();
    int getX() const;
    int getY();
    int getY() const;
    std::string getName();
    void setX(int val);
    void setY(int val);
    void setName(const std::string & val);
    Position operator + (const Position & p);
    bool operator == (const Position & pos);
    friend std::istream & operator >> (std::istream & input, Position & pos);
};

Position::Position(const std::string & title, int a, int b): longitude(a), latitude(b), name(title) {}

int Position::getX() { return longitude; }

int Position::getX() const { return longitude; }

int Position::getY() { return latitude; }

int Position::getY() const { return latitude; }

void Position::setName(const std::string &val) {
    name = val;
}

std::string Position::getName() { return name; }

Position Position::operator + (const Position & pos) {
    int new_x = longitude + pos.getX();
    int new_y = latitude + pos.getY();
    Position result("unknown", new_x, new_y);
    return result;
}

bool Position::operator == (const Position &pos) {
    if (longitude == pos.longitude && latitude == pos.latitude) {
        return true;
    }
    return false;
}

// Overrides <<
std::ostream & operator << (std::ostream & output, Position pos) {
    output << pos.getName() << " is located at long: " << pos.getX() << ", lat: " << pos.getY();
    return output;
}

// Overrides >>
std::istream & operator >> (std::istream & input, Position & pos) {
    input >> pos.name >> pos.longitude >> pos.latitude;
    return input;
}

int main()
{
    Position office("Spear Street Suite, CA", 30,45);
    Position car_park("Car park", 30, 45);
    
    std::cout<<car_park<<std::endl;
    
    std::cout<<office<<std::endl;
    
    Position canteen = office + car_park;
    printf("%s is located at coordinates: %d,%d\n", canteen.getName().c_str(), canteen.getX(), canteen.getY());
    
    if (office == car_park) {
        puts("Positions are the same!\n");
    } else {
        puts("Positions are not thesame\n");
    }
    
    Position club;
    
    std::cout<< "Enter new position: "<<std::endl;
    std::cin >> club;
    std::cout << club <<std::endl;
    
    return 0;
    
}
