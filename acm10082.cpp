#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char  input[5000];
	while(gets(input))
    {
		int i;
        for(i=0;i<strlen(input);i++)
        {
			char c = toupper(input[i]);
            switch(c)
            {
                case 'B':
                printf("V");
                break;
                case 'C':
                printf("X");
                break;
                case 'D':
                printf("S");
                break;
				case 'E':
				printf("W");
				break;
				case 'F':
				printf("D");
				break;
				case 'G':
				printf("F");
				break;
                case 'H':
                printf("G");
                break;
                case 'I':
                printf("U");
                break;
                case 'J':
                printf("H");
                break;
                case 'K':
                printf("J");
                break;
                case 'L':
                printf("K");
                break;
                case 'M':
                printf("N");
                break;
                case 'N':
                printf("B");
                break;
                case 'O':
                printf("I");
                break;
                case 'P':
                printf("O");
                break;
                case 'R':
                printf("E");
                break;
                case 'S':
                printf("A");
                break;
                case 'T':
                printf("R");
                break;
                case 'U':
                printf("Y");
                break;
                case 'V':
                printf("C");
                break;
                case 'W':
                printf("Q");
                break;
                case 'X':
                printf("Z");
                break;
                case 'Y':
                printf("T");
                break;
                case '/':
                printf(".");
                break;
                case '.':
                printf(",");
                break;
				case '\'':
				printf(";");
				break;
                case ',':
                printf("M");
                break;
                case '[':
                printf("P");
                break;
                case ';':
                printf("L");
                break;
				case '1':
				printf("`");
				break;
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					printf("%ld", c - '0' -1);
				break;
				case '0':
				printf("9");
				break;
				case '-':
				printf("0");
				break;
				case '=':
				printf("-");
				break;
				case ']':
				printf("[");
				break;
				case '\\':
				printf("]");
				break;
                default:
                printf("%c",c);
                break;
            }

        }
        printf("\n");
    }
    return 0;
}
