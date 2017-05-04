/*************************************
 
 * Jordan Scandlyn
 * 916435330
 * jordan@terraindb.com
 * G++
 *************************************/
#ifndef __MAP_H__
#define __MAP_H__

#include "map_item.h"

using namespace std;

class Map : public MapItem{
private:
  int size;
  MapItem * items;
public:
	Map();
	Map(int value);
	~Map();
	int getSize();
	void build(int x, int y, char c);
	MapItem getMapItem(int x, int y);
	friend ifstream& operator >>(ifstream&, Map&);
	friend ofstream& operator <<(ofstream&, const Map&);
	friend ostream& operator <<(ostream&, const Map&);
};
#endif
