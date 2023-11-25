#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{
	if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0)
	{
		throw std::invalid_argument("Wrong arguments");
	}
	else
	{
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;
		this->y2 = y2;
	}
};

int Rectangle::get_x1() {
	return this->x1;
}

int Rectangle::get_y1()
{
	return this->y1;
}

int Rectangle::get_x2()
{
	return this->x2;
}

int Rectangle::get_y2()
{
	return this->y2;
}

void Rectangle::move(int x0, int y0) {
	this->x1 += x0;
	this->y1 += y0;
	this->x2 += x0;
	this->y2 += y0;
}

void Rectangle::change_size(int x1, int x2, int y1, int y2)
{
	this->x1 += x1;
	this->y1 += y1;
	this->x2 += x2;
	this->y2 += y2;
}

void Rectangle::print_coordinates()
{
	cout << "Coordinates of rectangle" << endl;
	cout << "A(" << x1 << "," << y1 << ");" << endl;
	cout << "B(" << x1 << "," << y2 << ");" << endl;
	cout << "C(" << x2 << "," << y2 << ");" << endl;
	cout << "D(" << x2 << "," << y1 << ");" << endl;
}

Rectangle& Rectangle::operator ++()
{
	++x2;
	++y2;
	return *this;
}

Rectangle Rectangle::operator ++(int)
{
	x2++;
	y2++;
	return *this;
}

Rectangle& Rectangle::operator --()
{
	--x2;
	--y2;
	return *this;
}

Rectangle Rectangle::operator --(int)
{
	x2--;
	y2--;
	return *this;
}

Rectangle Rectangle::operator+(const Rectangle& second)
{
	Rectangle uni(0, 1, 0, 1);
	int x1_min = 0, x2_max = 0, y1_min = 0, y2_max = 0;

	if (this->x1 < second.x1) {
		x1_min = this->x1;
	}
	else {
		x1_min = second.x1;
	}
	if (this->y1 < second.y1) {
		y1_min = this->y1;
	}
	else {
		y1_min = second.y1;
	}

	if (this->x2 > second.x2) {
		x2_max = this->x2;
	}
	else {
		x2_max = second.x2;
	}

	if (this->y2 > second.y2) {
		y2_max = this->y2;
	}
	else {
		y2_max = second.y2;
	}

	uni.x1 = x1_min;
	uni.y1 = y1_min;
	uni.x2 = x2_max;
	uni.y2 = y2_max;

	return uni;
}

void Rectangle::operator +=(const Rectangle& second)
{
	int x1_min = 0, x2_max = 0, y1_min = 0, y2_max = 0;

	if (this->x1 < second.x1) {
		x1_min = this->x1;
	}
	else {
		x1_min = second.x1;
	}

	if (this->y1 < second.y1) {
		y1_min = this->y1;
	}
	else {
		y1_min = second.y1;
	}

	if (this->x2 > second.x2) {
		x2_max = this->x2;
	}
	else {
		x2_max = second.x2;
	}

	if (this->y2 > second.y2) {
		y2_max = this->y2;
	}
	else {
		y2_max = second.y2;
	}

	this->x1 = x1_min;
	this->x2 = x2_max;
	this->y1 = y1_min;
	this->y2 = y2_max;
}

Rectangle Rectangle::operator -(const Rectangle& second)
{
	Rectangle inter(0, 1, 0, 1);
	int x1_max = 0, x2_min = 0, y1_max = 0, y2_min = 0;

	if (this->x1 > second.x1) {
		inter.x1 = this->x1;
	}
	else {
		inter.x1 = second.x1;
	}

	if (this->x2 < second.x2) {
		inter.x2 = this->x2;
	}
	else {
		inter.x2 = second.x2;
	}

	if (this->y1 > second.y1) {
		inter.y1 = this->y1;
	}
	else {
		inter.y1 = second.y1;
	}

	if (this->y2 < second.y2) {
		inter.y2 = this->y2;
	}
	else {
		inter.y2 = second.y2;
	}

	return inter;
}

void Rectangle::operator-=(const Rectangle& second)
{
	int x1_max = 0;
	int x2_min = 0;
	int y1_max = 0;
	int y2_min = 0;

	if (this->x1 > second.x1) {
		x1_max = this->x1;
	}
	else {
		x1_max = second.x1;
	}

	if (this->x2 < second.x2) {
		x2_min = this->x2;
	}
	else {
		x2_min = second.x2;
	}

	if (this->y1 > second.y1) {
		y1_max = this->y1;
	}
	else {
		y1_max = second.y1;
	}

	if (this->y2 < second.y2) {
		y2_min = this->y2;
	}
	else {
		y2_min = second.y2;
	}

	this->x1 = x1_max;
	this->x2 = x2_min;
	this->y1 = y1_max;
	this->y2 = y2_min;
}

Rectangle::~Rectangle()
{
}