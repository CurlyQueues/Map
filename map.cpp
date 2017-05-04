/*************************************
 
 * Jordan Scandlyn
 * 916435330
 * jordan@terraindb.com
 * G++
 *************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>

#include "map.h"

using namespace std;

//Map() - Constructor for Map

//set items to new Object MapItem and size to 1

Map::Map()
{
    size = 1;
    items = new MapItem();
}


 //Map(int value) - Constructor that take int value
 //value = size of Map
 //initialize size to the value and create Object MapItem that has twice the size


Map::Map(int value)
{
    size = value;
    items = new MapItem[size * size];
}


//~Map() - Deconstructor for Map Object
 
//delete items that is created by new operator

Map::~Map()
{
    delete[] items;
    size = 0;
}


//getSize() ; return the size of Map Object
 
int Map::getSize()
{
    return size;
}

//loc = location on Map
void Map::build(int x, int y, char c)
{
    int loc = size * x + y;
    items[loc] = c;
}


 // getMapItem - get the item on location x and y
 // get the location of x and y then, return that value

MapItem Map::getMapItem(int x, int y)
{
    int loc = size * x + y;
    return this->items[loc];
}


//operator>> - overloaded operator >>
ifstream& operator>>(ifstream& fin, Map& map)
{
	//always clear
    fin.clear();


    stringstream ss;
    map.size = 0;
    char tmp;
    while (fin >> tmp) {
        map.size++;
        ss << tmp;
    }
    map.size = sqrt(map.size);
    map.items = new MapItem[map.size * map.size];
    for(int i = 0; i < map.size * map.size; i++) {
        ss >> tmp;
        map.items[i] = tmp;
    }
    return fin;
}


  //operator<< - overloading operator <<
  //fout is file output
 
ofstream& operator<<(ofstream& fout, const Map& map)
{
    fout.clear();
    //prints object to the file, seperated by map.size*map.size

    for(int i = 0; i < map.size * map.size; i++) {
        fout << map.items[i] << " ";
        if(i > 0 && (i + 1) % map.size == 0) {
            fout << endl;
        }
    }
    return fout;
}


//operator<< - overloading operator <<
ostream& operator<<(ostream& cout, const Map& map)
{
    for(int i = 0; i < map.size * map.size; i++) {
        cout << map.items[i] << " ";

        if(i > 0 && (i + 1) % map.size == 0) {
            cout << endl;
        }
    }
    return cout;
}

