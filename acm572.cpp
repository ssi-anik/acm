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
	int r,c;
	while (scanf("%d %d" , &r,&c) && (r||c))
	{
		getchar();
		char str[101];
		vector<pair<int,int> > myVector;
		int i=0,j=0;
		for(i=0;i<r;i++)
		{
			gets(str);
			for(j=0;j<c;j++)
			{
				arr[i][j] = str[j];
				if(arr[i][j]=='@')
					myVector.push_back(make_pair(i,j));
			}
		}

		queue< pair<int , int> > myQueue;
		vector<pair<int,int> > ::iterator it = myVector.begin();
		int count = 0 ;

		while (it!=myVector.end())
		{
			if(arr[it->first][it->second] == '@')
			{
				++count;
				arr[it->first][it->second] = '*' ;
				myQueue.push(*it);
				while (myQueue.empty()==false)
				{
					int x = myQueue.front().first,
						y = myQueue.front().second;
					for(i = 0 ; i< 8 ; i++)
						if( !(row[i] + x < 0 || col[i] + y  < 0 ) )
							if(arr[row[i] + x][col[i] + y] == '@')
							{
								arr[row[i] + x][col[i] + y]  = '*' ;
								myQueue.push(make_pair(row[i] + x,col[i] + y));
							}
					myQueue.pop();
				}
			}
			++it;
		}
		cout<<count<<endl;
	}

	return 0;
}
