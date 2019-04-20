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
	Tiles();
	Tiles(const Tiles& tile_obj);
	Tiles(int size_h,int size_w,int price,string brand);
	~Tiles();
	void getData();
};

