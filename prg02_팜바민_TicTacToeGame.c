#include <stdio.h>
#include <stdlib.h>

// declare functions
int check_win_person();
void board();
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

// draw the board 3x3
void board()
{
	printf("\n Player1 (X) - Player2 (O) \n"); // specify the icon of 2 players
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");	
}

// check win condition
int check_win_person()
{
	    return -1;	
}


int main()
{
	int player = 1, i ,location_choice;
	char mark;
	do {
		board();
		player = (player % 2) ? 1 : 2;
		printf("Player %d turn, please enter the number of your choice : ",player);
		scanf("%d",&location_choice);
		mark = (player == 1) ? 'X' : 'O';
		if(location_choice == 1 && square[1] == '1')
			square[1] = mark;
		else if(location_choice == 2 && square[2] == '2')
			square[2] = mark;
			else if(location_choice == 3 && square[3] == '3')
			square[3] = mark;
			else if(location_choice == 4 && square[4] == '4')
			square[4] = mark;
			else if(location_choice == 5 && square[5] == '5')
			square[5] = mark;
			else if(location_choice == 6 && square[6] == '6')
			square[6] = mark;
			else if(location_choice == 7 && square[7] == '7')
			square[7] = mark;
			else if(location_choice == 8 && square[8] == '8')
			square[8] = mark;
			else if(location_choice == 9 && square[9] == '9')
			square[9] = mark;
			
			else {
				printf("Invalid option!");
				player--;

			}
		
	}while(i == -1);
	
	board();
	if(i==1){
		printf("Congratulations to Player %d for Winning\n",--player);

	}
	else {
		printf("Game Draw");
	}
		
		return 0;
}
