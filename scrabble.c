#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner

    if (score1 > score2)
            printf("Player 1 wins!\n");
    else if (score1 == score2)
            printf("Tie!\n");
    else
            printf("Player 2 wins!\n");

return 0;
}

int compute_score(string word)
{
    // TODO: Compute and return score for string

    int length = strlen(word);
    int count = 0;

    for(int i = 0; i < length; i++)
    {
        if(isupper(toupper(word[i])))
            {
                switch (toupper(word[i]))
                {
		            case 'A':	count += POINTS[0];			    break;
		            case 'B':	count += POINTS[1];	    		break;
		            case 'C':	count += POINTS[2];	    		break;
		            case 'D':	count += POINTS[3];			    break;
		            case 'E':	count += POINTS[4];			    break;
		            case 'F':	count += POINTS[5];			    break;
		            case 'G':	count += POINTS[6];			    break;
		            case 'H':	count += POINTS[7];	    		break;
            		case 'I':	count += POINTS[8];	    		break;
            		case 'J':	count += POINTS[9];	    		break;
            		case 'K':	count += POINTS[10];	    	break;
            		case 'L':	count += POINTS[11];	    	break;
            		case 'M':	count += POINTS[12];	    	break;
            		case 'N':	count += POINTS[13];	    	break;
            		case 'O':	count += POINTS[14];	    	break;
            		case 'P':	count += POINTS[15];	    	break;
            		case 'Q':	count += POINTS[16];	        break;
            		case 'R':	count += POINTS[17];	    	break;
            		case 'S':	count += POINTS[18];	        break;
            		case 'T':	count += POINTS[19];	        break;
            		case 'U':	count += POINTS[20];	    	break;
            		case 'V':	count += POINTS[21];	        break;
            		case 'W':	count += POINTS[22];	        break;
            		case 'X':	count += POINTS[23];	        break;
            		case 'Y':	count += POINTS[24];	        break;
            		case 'Z':	count += POINTS[25];	        break;

            		default:
            		        {
            		            printf("wrong sign!\n");
            		            exit(0);
            		        }
	            }
            }
    }

    return count;
}

