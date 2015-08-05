#include <stdio.h>
#include <vector>

using namespace std;

vector<int> arr[1000001];

int main()
{
    int x,y,z,num,occ;
    while(scanf("%d %d",&x,&y)==2)
	{
        for ( int i = 0; i < 1000001; i++ ) 
		{
            arr[i].clear ();
        }
		
        for(int i=0;i<x;i++)
		{
            scanf("%d",&z);
            arr[z].push_back (i + 1);
        }
        for(int i=0;i<y;i++)
		{
            scanf ("%d %d", &occ, &num);
             if ( arr[num].size()< occ ) 
			 {
                printf("0\n");
             }
            else
			{
                printf("%d\n",arr [num] [occ - 1]);
            }
        }
		
    }
	return 0;
}