// ConsoleApplication55.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class point {
private:
    int m_x;
    int m_y;
public:
    point() {
        m_x = 0;
        m_y = 0;

    }
    point(int x, int y) {
        m_x = x;
        m_y = y;
    }
    point operator + (const point& p) {

        point obj1;
        obj1.m_x = m_x + p.m_x;
        obj1.m_y = m_y + p.m_y;
        return  obj1;
    }
    point operator-(const point& po) {

        point obj2;
        obj2.m_x = m_x - po.m_x;
        obj2.m_y = m_y - po.m_y;

        return obj2;
    }
    friend bool operator < (const point& c1, const point& c2);
    friend bool operator> (const point& c1, const point& c2);
    friend bool operator== (const point& c1, const point& c2);
    friend bool operator !=(const point& c1, const point& c2);
    friend std::ostream& operator<<(std::ostream& os, const point& dt);
};
  bool operator < (const point& c1, const point& c2)
{
    return c1.m_x < c2.m_y;
}

bool operator> (const point& c1, const point& c2)
{
    return c1.m_x > c2.m_y;
}
bool operator ==(const point& c1, const point& c2) {

     return (c1.m_x == c2.m_x &&
        c1.m_y == c2.m_y);
}
bool operator!=(const point& c1, const point& c2) {
    return(c1.m_x != c2.m_x || c1.m_y != c2.m_y);
}
std::ostream& operator<<(std::ostream& os, const point& c1) {
    os << c1.m_x <<" "<< c1.m_y << std::endl;
    return os;


};

int main()
{
    point p;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
