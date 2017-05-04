/*************************************  
* Jordan Scandlyn
* 916435330
* jordan@terraindb.com
* G++
*************************************/

#include "map_item.h"

using namespace std;


//MapItem - default constructor for MapItem object
//initialize char c to 'E'
 
MapItem::MapItem()
{
    c = 'E';
}


 //MapItem - constructor that take character
 //letter = any character

 //assign letter to c
 
MapItem::MapItem(char letter)
{
    c = letter;
}


 //getType - return c value
 
char MapItem::getType()
{
    return c;
}


 //setType - let private value c to ch
 
void MapItem::setType(char ch)
{
    this->c = ch;
}


//operator>> - read in data from a file

ifstream& operator>> (ifstream &fin, MapItem &item)
{
    fin >> item.c;
    fin.clear();
    return fin;
}


//operator<< - overloaded operator<< for cout
//Simply use something like cout << (name of MapItem object)
 
ostream& operator<< (ostream& cout, const MapItem& item)
{
    cout << item.c;
    return cout;
}

