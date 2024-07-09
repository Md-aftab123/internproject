#include<iostream>
using namespace std;
char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int cho;
int column;
int row;
bool draw=false;
char play_bord(){
	system("cls");
	cout<<"1 playar  X"<<endl<<"2 playar  O \n"<<endl;
	cout<<"		|		|		\n";
	cout<<"\t"<<arr[0][0]<<"\t|	"<<arr[0][1]<<"	|	"<<arr[0][2]<<"\n";
	cout<<"		|		|		\n";
	cout<<"\t__________________________________\n";
	cout<<"		|		|		\n";
	cout<<"\t"<<arr[1][0]<<"\t|	"<<arr[1][1]<<"	|	"<<arr[1][2]<<"\n";
	cout<<"		|		|		\n";
	cout<<"\t___________________________________\n";
	cout<<"		|		|		\n";
	cout<<"\t"<<arr[2][0]<<"\t|	"<<arr[2][1]<<"	|	"<<arr[2][2]<<"\n";
	cout<<"		|		|		\n";	
}
int turn_1(){
	if(turn=='X'){
		cout<<"player 1 [X] : ";
	}else{
		cout<<"player 2 [O] : ";
	}
	
	cin>>cho;
	switch(cho){
		case 1: row=0;column=0; break;
		case 2: row=0;column=1; break;
		case 3: row=0;column=2; break;
		case 4: row=1;column=0; break;
		case 5: row=1;column=1; break;
		case 6: row=1;column=2; break;
		case 7: row=2;column=0; break;
		case 8: row=2;column=1; break;
		case 9: row=2;column=2; break;
		default :cout<<"invelid cho!\n";break;
	}
	if(turn=='X'){
		arr[row][column]='X';
		turn ='O';
	}else if(turn=='O'){
		arr[row][column]='O';
		turn='X';
	}
}
bool game_over(){
	for(int i=0; i<3; i++){
	if(arr[i][0]==arr[i][1]&&arr[i][0]==
	arr[i][2] ||arr[0][i]==arr[1][i]&&arr[0][i]==arr[2][i] 
	||arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2] ||
	arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0] ){
	return false;


}
} 
	for(int i=0; i<3; i++){
		for(int j=0; j<3;j++){
			if(arr[i][j]!='X'&&arr[i][j]!='O'){
				return true;
				draw=true;
				return false;
			}
		}
	}
}


int main(){

while(game_over()){

	play_bord();
	turn_1();
	
	play_bord();
	game_over();
	
}
if(turn=='X'&& draw==false){
	cout<<"player2 wins!! congratulation!!";
}if(turn=='O'&& draw==false){
	cout<<"player1 wins!! congratulation!!";
}else{
	cout<<"game is draw !!";
}
	
}
