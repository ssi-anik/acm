#include<stdio.h>
#include<string>
#include<algorithm>
#include<iostream>
#include<map>
#include<utility>
#include<math.h>
#include<stack>

using namespace std;

int main()
{
    int totalTestCase,testCaseRunning=1;
    cin>>totalTestCase;
    map<string,string> party;
    map<string,int> votes;
    while(testCaseRunning<=totalTestCase)
    {
		int candidates ;
		cin>>candidates;
		cin.ignore(100,'\n');
		string candidateName,partyName;
		for(int i=1;i<=candidates;i++)
		{
			getline(cin,candidateName);
			getline(cin,partyName);
			party[candidateName] = partyName;
		}

		int votesGiven=1,totalVoters,maxVoteOnCandidate=0;
		cin>>totalVoters;
		cin.ignore(100,'\n');
		string maxVoteWinnerCandidate;
		while (votesGiven<=totalVoters)
		{
			getline(cin,candidateName);
			map<string,string> ::iterator i = party.find(candidateName);
			if(i!=party.end())
			{
				if(maxVoteOnCandidate<++votes[candidateName])
				{
					maxVoteOnCandidate=votes[candidateName];
					maxVoteWinnerCandidate = candidateName;
				}
			}
			++votesGiven;
		}
		votes[maxVoteWinnerCandidate] = 0;
		bool occurance = false ;

		for(map<string,int>::iterator i = votes.begin();i!=votes.end();++i)
		{
			if(i->second >= maxVoteOnCandidate )
				occurance = true;
		}

		if(occurance==true && votes.size() != 0)
			cout<<"tie"<<endl;
		else if ( occurance == false && votes.size()!=0)
			cout<<party[maxVoteWinnerCandidate]<<endl;
		else
			cout<<"tie"<<endl;
		if(testCaseRunning!=totalTestCase)
			cout<<"\n";
        ++testCaseRunning;
		maxVoteWinnerCandidate.clear();

		candidateName.clear();
		partyName.clear();
        party.clear();
        votes.clear();
    }
	return 0;
}
