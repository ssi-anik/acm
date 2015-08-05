/*Rahaduzzaman Setu, (Roll - 12) of 13th batch, CSE, University of Dhaka is tremendously ill. He has been suffering from Multi Drug Resistant TB for a long time. Now, his left lung is damaged and beyond repair. No medicine is working on his body to ease his pain. It is urgent to operate on his left lung so that the disease doesn't spread to his right lung. It can either be removed through surgery or transplanted. He comes from a modest family and it is difficult and impossible for them to bare his medical expenses anymore. Because of the money needed (12 million BDT) to transplant, it is his family's decision to go with the surgery (3 million BDT). We must help them financially by raising money. But we must not be confined with that amount only to do the surgery. We must go for the Transplant. Our target will be to collect as much as possible to help our friend.

If anyone wants to contribute now, please send me your contribution or contact me. Please contribute as much as you can to save a life that you saw every week for the first two years of your University life. Please contribute as per your abilities. Our combined effort may save a life.

For more information, consult the link below.

http://supportsetu.com/

However, in this problem, you have to build a software that can calculate the donations. Initially the total amount of money is 0 and in each time, two types of operations will be there.

1)      "donate K" (100 ≤ K ≤ 105), then you have to add K to the account.

2)      "report", report all the money currently in the account.

Input
The first line of input will contain T (1 ≤ T ≤ 100) denoting the number of operations. Then there will be T lines each containing two types of operations as given. You may assume that the input follows the restrictions above.

Output
For each "report" operation, print the total amount of money in the account*/


#include<stdio.h>
#include<string.h>

main()
{
    unsigned long long T,k,i=1,sum=0;
    char chk[10];
    scanf("%llu",&T);
    while(i<=T)
    {
        scanf("%s",chk);
        if(strcmp(chk,"report")>=0)
        printf("%llu\n",sum);


        else if(strcmp(chk,"donate")>=0)
        {
            scanf("%llu",&k);
            sum+=k;
        }
        ++i;
    }

    return 0;
}
