#pragma once
#include<string>
#include<iostream>

using namespace std;
class Tiles
{
public:
	int price;
	int size_h;
	int size_w;
	string brand;
	Tiles(int size_h,int size_w,int price,string brand);
	~Tiles();
	void getData();
};

