#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*union in; union out;
int callmouse()      //Function to display the mouse pointer
{
	int.x.ax=1;
	int86(51,&in,&out);
	return 1;
}
void mouseposi(int &xpos,int &ypos,int &click)    //Function to get the position of the mouse pointer and to check the click button
{
	int.x.ax=3;
	int86(51,&in,&out);
	click=out.x.bx;
	xpos=out.x.cx;
	ypos=out.x.dx;
}   */ 
char board[5][5];
int  temp, temp1, temp2, k=0;
int input_var[9];
string player;
void player_detail()		//Function to take details of the player.
{
	    cout<<"\n\nENTER PLAYER NAME = ";
    	getline(cin,player);
    	cout<<"\nGET READY!!!!!";
    	cout<<endl;	
}
void init_board()      //Function to initialise the starting Tic-Tac-Toe board.
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i%2!=0||j%2!=0)
			 board[i][j]='*';
			else
			 board[i][j]=' ';
		}
	}
}
void draw_board()       //Function to draw the Tic-Tac-Toe board initially.
{
	for(int i=0; i<5; i++)
	{
		cout<<"\t\t\t";
		for(int j=0; j<5; j++)
		{
		   cout<<board[i][j];
		   cout<<" ";
		}
		cout<<endl;
	}
 	
}
void change_board(int x, int y)
{
	if(y==0)
	switch(x)
	{
		case 1:
			board[0][0]='X';
			break;
		case 2:
			board[0][2]='X';
			break;
		case 3:
			board[0][4]='X';
			break;
		case 4:
			board[2][0]='X';
			break;
		case 5:
			board[2][2]='X';
			break;
		case 6:
			board[2][4]='X';
			break;
		case 7:
			board[4][0]='X';
			break;
		case 8:
			board[4][2]='X';
			break;
		case 9:
			board[4][4]='X';
			break;
			
	}
	else if(y==1)
	switch(x)
	{
		case 1:
			board[0][0]='O';
			break;
		case 2:
			board[0][2]='O';
			break;
		case 3:
			board[0][4]='O';
			break;
		case 4:
			board[2][0]='O';
			break;
		case 5:
			board[2][2]='O';
			break;
		case 6:
			board[2][4]='O';
			break;
		case 7:
			board[4][0]='O';
			break;
		case 8:
			board[4][2]='O';
			break;
		case 9:
			board[4][4]='O';
			break;
			
	}
}
int checkwinner1()    //Function to Check the winner for player.
{
	if(board[0][0]=='X'&&board[0][2]=='X'&&board[0][4]=='X')
	 return 1;
	else if(board[2][0]=='X'&&board[2][2]=='X'&&board[2][4]=='X')
	 return 1;
	else if(board[4][0]=='X'&&board[4][2]=='X'&&board[4][4]=='X')
	 return 1;
	else if(board[0][0]=='X'&&board[2][0]=='X'&&board[4][0]=='X')
	 return 1;
	else if(board[0][2]=='X'&&board[2][2]=='X'&&board[4][2]=='X')
	 return 1;
	else if(board[0][4]=='X'&&board[2][4]=='X'&&board[4][4]=='X')
	 return 1;
	else if(board[0][0]=='X'&&board[2][2]=='X'&&board[4][4]=='X')
	 return 1;
	else if(board[0][4]=='X'&&board[2][2]=='X'&&board[4][0]=='X')
	 return 1;
	else
	 return 0;
}
int checkwinner2()	//Function to Check the winner for Computer.
{
	if(board[0][0]=='O'&&board[0][2]=='O'&&board[0][4]=='O')
	 return 1;
	else if(board[2][0]=='O'&&board[2][2]=='O'&&board[2][4]=='O')
	 return 1;
	else if(board[4][0]=='O'&&board[4][2]=='O'&&board[4][4]=='O')
	 return 1;
	else if(board[0][0]=='O'&&board[2][0]=='O'&&board[4][0]=='O')
	 return 1;
	else if(board[0][2]=='O'&&board[2][2]=='O'&&board[4][2]=='O')
	 return 1;
	else if(board[0][4]=='O'&&board[2][4]=='O'&&board[4][4]=='O')
	 return 1;
	else if(board[0][0]=='O'&&board[2][2]=='O'&&board[4][4]=='O')
	 return 1;
	else if(board[0][4]=='O'&&board[2][2]=='O'&&board[4][0]=='O')
	 return 1;
	else
	 return 0;
}
int player1_turn()
{
    cout<<player1<<"'s turn = ";
	cin>>input_var[k];
	for(int i=0; i<9; i++)
	{
		if(input_var[k]==input_var[i]&&k!=i)
		{
			cout<<"\n!!!THERE IS ALREADY AN INPUT AT THAT LOCATION";
			cout<<"\nPLEASE ENTER AGAIN! "<<endl;
			player1_turn();
		}
	}
	change_board(input_var[k],0);
	draw_board(); 
	k++; 
	temp1=checkwinner1();
	return temp1;    	
}

int computer_turn(char arr[5][5])
{
  for(int i=0; i<9; i++)
  {
  	if(input_var[k-1]!=input_var[i])
  	{
  		
	  }
  }
}

/*void play_game_computer()     //Function to play the game between a player and the computer.
{
	while(k<9)
	{
		temp=player1_turn();
		if(temp==1&&k<=8)
		{
			cout<<"\n\nCONGRATULATIONS!!!!! "<<player1<<" you have won!!! ";
			break;
		}
		temp=computer_turn();
		if(temp==1&&k<=8)
		{
			cout<<"\n\nOOPS!! THE COMPUTER HAS WON";
			break;
		}
		if(temp==0&&k==8)
		{
			cout<<"\n\nTHE MATCH HAS ENDED IN A DRAW!!! ";
			break;
		}
	}
}*/

int main()
{
	init_board();
	player_detail();
	draw_board();
	play_game_twoplayers();	
	return 0;
}
