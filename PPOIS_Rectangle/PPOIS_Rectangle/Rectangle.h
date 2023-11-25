#pragma once

class Rectangle
{
private:

	int x1, y1, x2, y2;

public:

	Rectangle(int x1, int x2, int y1, int y2);

	int get_x1();

	int get_x2();

	int get_y1();

	int get_y2();

	void move(int dx, int dy);

	void change_size(int x1, int x2, int y1, int y2);

	void print_coordinates();

	Rectangle operator ++(int);

	Rectangle& operator ++();

	Rectangle operator --(int);

	Rectangle& operator --();

	Rectangle operator +(const Rectangle& second);

	void operator +=(const Rectangle& second);

	Rectangle operator -(const Rectangle& second);

	void operator -=(const Rectangle& second);

	~Rectangle();
};
