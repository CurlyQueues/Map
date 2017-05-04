/*************************************  
* Jordan Scandlyn
* 916435330
* jordan@terraindb.com
* G++
*************************************/
#ifndef MAP_ITEM_H
#define MAP_ITEM_H

#include <fstream>

using namespace std;

class MapItem{
private:
    char c;
public:
	MapItem();
	MapItem(char letter);
	char getType();
	void setType(char ch);
	friend ifstream& operator>> (ifstream &fin, MapItem &map);
	friend ostream& operator<< (ostream &cout, const MapItem& map);
};
#endif // MAP_ITEM_H
