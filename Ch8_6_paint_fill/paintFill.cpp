#include <iostream>
#include <vector>
using namespace std;


enum Color 
{
	Black,
	White,
	Red,
	Yellow,
	Green	
};


bool paintFill(vector< vector<Color> > screen, int x, int y, Color newColor)
{

	if (x<0 || x > (screen.size()-1)) 
	{
		cout<<"x out of range" <<endl;
		return false;
	}
	if(y<0 || y >  (screen[0].size()-1))
	{
		cout<<"y out of range" <<endl;
		return false
	}
	if(screen[x][y]==newColor)
		return false;
	if(screen[x][y]!=newColor)
	{
		paintFill( screen, x-1, y, newColor);
		paintFill( screen, x+1, y, newColor);
		paintFill( screen, x, y_1, newColor);
		paintFill( screen, x, y+1, newColor);
	}
	return true;
}

int main()
{
	cout<<"This is the paintFill!"<<endl;
	



	return 0;
}
