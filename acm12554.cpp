#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
	string says[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
	string names[100];
	int input,i=0,j=0;
	cin >> input;
	getchar();
	while (i<input)
	{
		cin >> names[i++];
	}
	bool songCompleted = false , nameCompleted=false;
	for(int forSong=0,forName=0; ;/* forName++*/)
	{
		if( nameCompleted == true && songCompleted == true && forSong == 16)
			break;
		cout << names[forName++] <<": "<< says[forSong++] <<endl;
		if(forSong==16)
		{
			songCompleted = true;
			if (nameCompleted==false)
			{
				forSong = 0;
			}
		}
		if(forName == input )
		{
			nameCompleted = true;
			forName = 0;
		}



	}
	return 0;
}
