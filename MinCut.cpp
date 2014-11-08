#include <vector>
#include <list>
#include <map>
#include <set>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>


using namespace std;


// Data Structure needed to represent graph as an adjacency list 
typedef struct Node
{
		int index;
		vector< int > edges;
}Node;

// Instantiation of a graph
vector< Node > test;

// Read the graph vertices from a file into internal representation (test)
void ReadGraph ( const char* filename )
{
    ifstream myfile (filename);
	string line;
	if (myfile.is_open())
	{
		Node x;
		while ( getline (myfile,line) )
		{
			int temp;
			vector< int > ed;
			istringstream buffer(line);
			buffer >> x.index;
			while(buffer >> temp)
				ed.push_back(temp);
			x.edges = ed;
			test.push_back(x);			
		}
		myfile.close();
	}
	else
	{
		cout << "Unable to open file";
	}
};

void main ()
{
	ReadGraph("C:/Users/Ahmed/Desktop/kargerMinCut.txt");
	for(int i=0;i<200;++i)
	{
/*
		while ( !test[i].edges.empty() )
		{
			if( test[i].visited == 0 && test[test[i].edges[j]].visited == 0 )
				Merge();

		}
		test[i].edges
*/
	}
}
