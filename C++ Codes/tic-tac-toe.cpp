#include<bits/stdc++.h>
using namespace std;

bool CheckWin(char board[], char sign)
{
  if(board[7]==sign&&board[8]==sign&&board[9]==sign)
       return true;
  if(board[4]==sign&&board[5]==sign&&board[6]==sign)
       return true;
  if(board[1]==sign&&board[2]==sign&&board[3]==sign)
       return true;
       
  if(board[7]==sign&&board[4]==sign&&board[1]==sign)
       return true;
  if(board[8]==sign&&board[5]==sign&&board[2]==sign)
       return true;
  if(board[9]==sign&&board[6]==sign&&board[3]==sign)
       return true;
       
  if(board[7]==sign&&board[5]==sign&&board[3]==sign)
       return true;
  if(board[9]==sign&&board[5]==sign&&board[1]==sign)
       return true;
                                 
  return false;
}


void displayBoard(char board[])
{
  cout<<"\n\n\n\t\t";
    cout<<board[7]<<" | "<<board[8]<<" | "<<board[9]<<"\n";
    cout<<"\t\t"<<board[4]<<" | "<<board[5]<<" | "<<board[6]<<"\n";
    cout<<"\t\t"<<board[1]<<" | "<<board[2]<<" | "<<board[3]<<"\n";
    cout<<"\t\t  |   |  \n";
}


bool moveAvailable(char board[], int move)
{
  if(board[move]!='_')
     return false;
  return true;
}

int getRandomMove(char copyboard[])
{
  int moves[10],j=0,random;
  for(int i=1;i<10;i++)
  {
      if(moveAvailable(copyboard,i))
        moves[j++]=i;
  }      
  srand(time(NULL));
  while(1)
  {
     random=rand()%(j+1);
         return moves[random-1];
  }
}


void playerWin(char player[20])
{
  cout<<"\n\nCONGRATULATIONS!! "<<player<<", YOU HAVE WON!!";
  exit(1);
}


void gamePvP()
{
  system("cls");
  char P1[20],P2[20],P1sign,P2sign;
  cin.ignore(256, '\n');
  cout<<"\nENTER PLAYER 1s NAME:- ";
  cin.getline(P1, 20);
  cin.ignore(256, '\n');
  cout<<"\nENTER PLAYER 2s NAME:- ";
  cin.getline(P2, 20);
  cout<<"\n"<<P1<<" CHOOSE 'X' or 'O' :- ";
  cin>>P1sign;
  if(P1sign=='X'||P1sign=='x')
  {
    P1sign='X';
    P2sign='O';
  }
  else
  {
    P1sign='O';
    P2sign='X';
  }
  char board[11];
  strcpy(board, "__________");
  int P1move,P2move,turnNum=0;
  displayBoard(board);
  while(turnNum<9)
  {
    P1_turn:
    cout<<"\n"<<P1<<"'s TURN, ENTER YOUR MOVE FOR "<<P1sign<<" :-";
    cin>>P1move;
    if(moveAvailable(board, P1move))
    {
       board[P1move]=P1sign;
       turnNum++;
    }
    else
    {
       cout<<"\nINVALID MOVE!!";
       goto P1_turn;
    }
    displayBoard(board);
    if(CheckWin(board, P1sign))
       playerWin(P1);
       
    P2_turn:
    cout<<"\n"<<P2<<"'s TURN, ENTER YOUR MOVE FOR "<<P2sign<<" :-";
    cin>>P2move;
    if(moveAvailable(board, P2move))
    {
       board[P2move]=P2sign;
       turnNum++;
    }
    else
    {
       cout<<"\nINVALID MOVE!!";
       goto P2_turn;
    }
    displayBoard(board);
    if(CheckWin(board, P2sign))
       playerWin(P2);
  }
  cout<<"\nTHE MATCH ENDED IN DRAW!!";
  exit(1);
}


int checkComputerWin(char copyboard[],char Csign)
{
  for(int i=1;i<10;i++)
  {
    if(moveAvailable(copyboard,i))
    {
      copyboard[i]=Csign;
      if(CheckWin(copyboard,Csign))
         return i;
      else
         copyboard[i]='_';
    }
  }
  return 0;
}


int checkPlayerWin(char copyboard[],char P1sign)
{
  for(int i=1;i<10;i++)
  {
    if(moveAvailable(copyboard,i))
    {
      copyboard[i]=P1sign;
      if(CheckWin(copyboard,P1sign))
         return i;
      else
         copyboard[i]='_';
    }
  }
  return 0;
}

int checkCorner(char copyboard[])
{
  int corner[4] = {1,3,7,9}; int random; bool flag=false;
    for(int i=0;i<4;i++)
    {
      if(moveAvailable(copyboard,corner[i]))
         flag=true; 
    }
    if(flag)
    {
     srand(time(NULL));
     while(1)
     {
      random=rand()%5;
      if(moveAvailable(copyboard,corner[random-1]))
         return corner[random-1];
     }
    }
  else return 0;
}


void gamePvC()
{
  system("cls");
  char P1[20],P1sign,Csign; int level; char choice;
  cin.ignore(256, '\n');
  cout<<"\nENTER PLAYERs NAME:- ";
  cin.getline(P1, 20);
  cout<<"\n"<<P1<<" CHOOSE 'X' or 'O' :- ";
  cin>>P1sign;
  if(P1sign=='X'||P1sign=='x')
  {
    P1sign='X';
    Csign='O';
  }
  else
  {
    P1sign='O';
    Csign='X';
  }
  cout<<"\n  1.EASY     2.MEDIUM     3.HARD";
  cout<<"\n\nCHOOSE DIFFICULTY:- ";
  cin>>level;
  cout<<"\nDO YOU WANT FIRST MOVE (Y/N):- ";
  cin>>choice;
  char board[11];
  strcpy(board, "__________");
  int P1move,Cmove,turnNum=0;
  displayBoard(board);
  if(choice=='N'||choice=='n')
     goto C_turn;
  while(turnNum<9)
  {
    P1_turn:
    cout<<"\n"<<P1<<"'s TURN, ENTER YOUR MOVE FOR "<<P1sign<<" :-";
    cin>>P1move;
    if(moveAvailable(board, P1move))
    {
       board[P1move]=P1sign;
       turnNum++;
    }
    else
    {
       cout<<"\nINVALID MOVE!!";
       goto P1_turn;
    }
    displayBoard(board);
    if(CheckWin(board, P1sign))
       playerWin(P1);
    
    C_turn:   
    cout<<"\nCOMPUTER's MOVE:-";
    char copyboard[11];
    strcpy(copyboard,board);
    if(level==1)
    {
      Cmove=checkComputerWin(copyboard,Csign);
      if(Cmove>0)
      {
        board[Cmove]=Csign;
        turnNum++;
        goto C_turn_end;
      }
      board[getRandomMove(copyboard)]=Csign;
      turnNum++;
    }
    else if(level==2)
    {
      Cmove=checkComputerWin(copyboard,Csign);
      if(Cmove>0)
      {
        board[Cmove]=Csign;
        turnNum++;
        goto C_turn_end;
      }
      Cmove=checkPlayerWin(copyboard,P1sign);
      if(Cmove>0)
      {
        board[Cmove]=Csign;
        turnNum++;
        goto C_turn_end;
      }
      board[getRandomMove(copyboard)]=Csign;
      turnNum++;
      
    }
    else
    {
      Cmove=checkComputerWin(copyboard,Csign);
      if(Cmove>0)
      {
        board[Cmove]=Csign;
        turnNum++;
        goto C_turn_end;
      }
      Cmove=checkPlayerWin(copyboard,P1sign);
      if(Cmove>0)
      {
        board[Cmove]=Csign;
        turnNum++;
        goto C_turn_end;
      }
      Cmove=checkCorner(copyboard);
      if(Cmove>0)
      {
        board[Cmove]=Csign;
        turnNum++;
        goto C_turn_end;
      }
      if(moveAvailable(copyboard,5))
      {
        board[5]=Csign;
        turnNum++;
        goto C_turn_end;
      }
      board[getRandomMove(copyboard)]=Csign;
      turnNum++;
    }
    C_turn_end:
    displayBoard(board);
    if(CheckWin(board, Csign))
    {
      cout<<"\nOOPS!!"<<P1<<" YOU HAVE LOST!!";
      exit(1);
    }
  }
  cout<<"\nTHE MATCH ENDED IN DRAW!!";
  exit(1);
  }



 int main()
 {
   cout<<"\t\tTIC-TAC-TOE";
   cout<<"\n1. PLAYER vs PLAYER";
   cout<<"\n2. PLAYER vs CPU";
   enter:
   cout<<"\n\nENTER THE CHOICE:- ";
   int choice;
   cin>>choice;
   if(choice==1)
      gamePvP();
   if(choice==2)
      gamePvC();
   else
      goto enter;
   return 0;
 }
