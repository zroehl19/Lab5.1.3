/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zroehl
 *
 * Created on September 27, 2017, 12:58 PM
 */

#include <iostream>

using namespace std;
class AdHocSquare
{
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
};

AdHocSquare::AdHocSquare(double side)
{
    this->side = side;
}
void AdHocSquare::set_side(double side)
{
    this->side = side;
}

double AdHocSquare::get_area()
{
    return side*side;
}

class LazySquare
{
public:
    LazySquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
    double area;
    bool side_changed;
};

LazySquare::LazySquare(double side)
{
    this->side = side;
}

void LazySquare::set_side(double side)
{
    this->side = side;
}

double LazySquare::get_area()
{
    area = side*side;
    
    return area;
}
/*
 * 
 */
int main() {
    
    
    AdHocSquare square1(3.0);
    LazySquare square2(4.0);
    
    square1.set_side(3.0);
    square2.set_side(4.0);
    
    cout << square1.get_area() << "\n";
    cout << square2.get_area();
}


