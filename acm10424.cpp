#include<stdio.h>
int main()
{
	char bf[26],gf[26];
	while(gets(bf))
	{


		int i,bs=0;
		for(i=0;bf[i]!='\0';i++)
		{
			if(bf[i]>='a'&& bf[i]<='z')
				bs+=bf[i]-96;
			else if(bf[i]>='A'&& bf[i]<='Z')
				bs+=bf[i]-64;
		}
		int bm=0;
		if(bs<10)
			bm=bs;
		while(bs>=10)
		{
			bm+=(bs%10);
			bs/=10;
			if(bs<10)
				bm+=bs;
		}
		while(bm>=10)
		{
			bs=bm;
			bm=0;
			while(bs>=10)
			{
				bm+=(bs%10);
				bs/=10;
				if(bs<10)
					bm+=bs;
			}
		}
		gets(gf);

		int gs=0;
		for(i=0;gf[i]!='\0';i++)
		{
			if(gf[i]>='a'&& gf[i]<='z')
				gs+=gf[i]-96;
			else if(gf[i]>='A'&& gf[i]<='Z')
				gs+=gf[i]-64;
		}
		int gm=0;
		if(gs<10)
			gm=gs;
		while(gs>=10)
		{
			gm+=(gs%10);
			gs/=10;
			if(gs<10)
				gm+=gs;
		}
		while(gm>=10)
		{
			gs=gm;
			gm=0;
			while(gs>=10)
			{
				gm+=(gs%10);
				gs/=10;
				if(gs<10)
					gm+=gs;
			}
		}
		double avrg=0;
		if(bm>gm)
		{
			avrg=((double)gm/(double)bm)*100;
			printf("%3.2lf %c\n",avrg,37);
		}
		else
		{
			avrg=((double)bm/(double)gm)*100;
			printf("%3.2lf %c\n",avrg,37);
		}
	}
	return 0;
}
