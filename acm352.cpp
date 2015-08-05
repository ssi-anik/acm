#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<utility>
#include<algorithm>
#include<queue>
#include<stdio.h>

using namespace std;

#define MAX 101

int main()
{
	int row[] = { -1 , -1 , -1 , 0 , 0 , 1 , 1 , 1 } ,
		col[] = { -1 , 0 , 1 , -1 , 1, -1, 0 , 1 } ;
	char arr[MAX][MAX] ;
	int r,c,image=0;
	while (scanf("%d",&r) != EOF )
	{
		getchar();
		char str[101];
		vector<pair<int,int> > myVector;
		int i=0,j=0;
		for(i=0 ; i<r ; i++)
		{
			gets(str);
			for(j=0 ; j<r ; j++)
			{
				arr[i][j] = str[j];
				if(arr[i][j]=='1')
					myVector.push_back(make_pair(i,j));
			}
		}

		queue< pair<int , int> > myQueue;
		vector<pair<int,int> > ::iterator it = myVector.begin();
		int count = 0 ;

		while (it!=myVector.end())
		{
			if(arr[it->first][it->second] == '1')
			{
				++count;
				arr[it->first][it->second] = '0' ;
				myQueue.push(*it);
				while (myQueue.empty()==false)
				{
					int x = myQueue.front().first,
						y = myQueue.front().second;
					for(i = 0 ; i< 8 ; i++)
						if( !(row[i] + x < 0 || col[i] + y  < 0 ) )
							if(arr[row[i] + x][col[i] + y] == '1')
							{
								arr[row[i] + x][col[i] + y]  = '0' ;
								myQueue.push(make_pair(row[i] + x,col[i] + y));
							}
					myQueue.pop();
				}
			}
			++it;
		}
		cout<<"Image number "<<++image<< " contains "<<count<<" war eagles."<<endl;
	}

	return 0;
}
