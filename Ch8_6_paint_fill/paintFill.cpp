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
bool paintFill(vector< vector<Color> > & screen, int x, int y, Color newColor)
{
	if (x<0 || x > (screen.size()-1)) 
	{
		cout<<"x out of range" <<endl;
		return false;
	}
	if(y<0 || y >  (screen[0].size()-1))
	{
		cout<<"y out of range" <<endl;
		return false;
	}
	if(screen[x][y]==newColor)
	{
		cout<<"same color "<<endl;
		return false;
	}
	if(screen[x][y]!=newColor)
	{	
		screen[x][y] = newColor;
		paintFill( screen, x-1, y, newColor);
		paintFill( screen, x+1, y, newColor);
		paintFill( screen, x, y-1, newColor);
		paintFill( screen, x, y+1, newColor);
	}
	return true;
}

void printScreen(const vector< vector<Color> > & screen)
{
	cout<<"==========================="<<endl;
	for(int i = 0; i < screen.size(); i++)
	{
		for(int j = 0; j < screen[0].size(); j++)
		{
			cout<<" "<<screen[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	cout<<"This is the paintFill!"<<endl;
	//initialize the screen (vector of vector)
	vector< vector<Color> >  screen( 10, vector<Color>(10) );
	Color test = Black;
	cout<<" " <<test <<endl;
	printScreen(screen);
	screen[1][1] = White;
	screen[2][2] = White;
	printScreen(screen);
//	paintFill(screen, 1,1, White);
//	printScreen(screen);
	paintFill(screen, 1,1, Black);

	printScreen(screen);

	return 0;
}
