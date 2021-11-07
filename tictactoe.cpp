#include <iostream>
using namespace std;
char masiv[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';
int draw;
void Grid(){
	cout<<"Tic Tac Toe"<<endl;
	cout<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(j == 2){
				cout<<masiv[i][j]<<" "<<endl;
			}else{
				cout<<masiv[i][j]<<" ";
			}
		}
	}
	cout<<endl;
	cout<<player<<"'s turn"<<endl;
}
void Turns(){
	if(player == 'X'){
		player = 'O';
	}else{
		player = 'X';
	}
}
void Input(){
	int a;
	cout<<endl;
	cout<<"Enter a position: ";
	cin >> a;
	if(a == 1){
		if(masiv[0][0] == '1'){
			masiv[0][0] = player;
		}else{
			cout<<endl;
			cout<<"No overwriting, please!"<<endl;
			Input();
		}
	}
	if(a == 2){
		if(masiv[0][1] == '2'){
			masiv[0][1] = player;
		}else{
			cout<<endl;
			cout<<"No overwriting, please!"<<endl;
			Input();
		}
	}
	if(a == 3){
		if(masiv[0][2] == '3'){
			masiv[0][2] = player;
		}else{
			cout<<endl;
			cout<<"No overwriting, please!"<<endl;
			Input();
		}
	}
	if(a == 4){
		if(masiv[1][0] == '4'){
			masiv[1][0] = player;
		}else{
			cout<<endl;
			cout<<"No overwriting, please!"<<endl;
			Input();
		}
	}
	if(a == 5){
		if(masiv[1][1] == '5'){
			masiv[1][1] = player;
		}else{
			cout<<endl;
			cout<<"No overwriting, please!"<<endl;
			Input();
		}
	}
	if(a == 6){
		if(masiv[1][2] == '6'){
			masiv[1][2] = player;
		}else{
			cout<<endl;
			cout<<"No overwriting, please!"<<endl;
			Input();
		}
	}
	if(a == 7){
		if(masiv[2][0] == '7'){
			masiv[2][0] = player;
		}else{
			cout<<endl;
			cout<<"No overwriting, please!"<<endl;
			Input();
		}
	}
	if(a == 8){
		if(masiv[2][1] == '8'){
			masiv[2][1] = player;
		}else{
			cout<<endl;
			cout<<"No overwriting, please!"<<endl;
			Input();
		}
	}
	if(a == 9){
		if(masiv[2][2] == '9'){
			masiv[2][2] = player;
		}else{
			cout<<endl;
			cout<<"No overwriting, please!"<<endl;
			Input();
		}
	}
}
char Win(){
	if(masiv[0][0] == 'X' && masiv[0][1] == 'X' && masiv[0][2] == 'X'){
        return 'X';
    }
    if(masiv[1][0] == 'X' && masiv[1][1] == 'X' && masiv[1][2] == 'X'){
        return 'X';
    }   
    if(masiv[2][0] == 'X' && masiv[2][1] == 'X' && masiv[2][2] == 'X'){
        return 'X';
    }
    if(masiv[0][0] == 'X' && masiv[1][1] == 'X' && masiv[2][2] == 'X'){
        return 'X';
    }
    if(masiv[0][2] == 'X' && masiv[1][1] == 'X' && masiv[2][0] == 'X'){
        return 'X';
    }
    if(masiv[0][0] == 'X' && masiv[1][0] == 'X' && masiv[2][0] == 'X'){
        return 'X';
    }
    if(masiv[0][1] == 'X' && masiv[1][1] == 'X' && masiv[2][1] == 'X'){
        return 'X';
    }
    if(masiv[0][2] == 'X' && masiv[1][2] == 'X' && masiv[2][2] == 'X'){
        return 'X';
    }
	//second player
	if(masiv[0][0] == 'O' && masiv[0][1] == 'O' && masiv[0][2] == 'O'){ 
		return 'O';
	}
	if(masiv[1][0] == 'O' && masiv[1][1] == 'O' && masiv[1][2] == 'O'){ 
		return 'O';
	}
	if(masiv[2][0] == 'O' && masiv[2][1] == 'O' && masiv[2][2] == 'O'){
		return 'O';
	}
	if(masiv[0][0] == 'O' && masiv[1][0] == 'O' && masiv[2][0] == 'O'){ 
		return 'O';
	}
	if(masiv[0][1] == 'O' && masiv[1][1] == 'O' && masiv[2][1] == 'O'){ 
		return 'O';
	}
	if(masiv[0][2] == 'O' && masiv[1][2] == 'O' && masiv[2][2] == 'O'){ 
		return 'O';
	}
	if(masiv[0][0] == 'O' && masiv[1][1] == 'O' && masiv[2][2] == 'O'){ 
		return 'O';
	}
	if(masiv[0][2] == 'O' && masiv[1][1] == 'O' && masiv[2][0] == 'O'){ 
		return 'O';
	}
	return '/';
}
int main(){
	Grid();
	draw++;
	while(1){
		Input();
		Turns();
		system("cls");
		Grid();
		if(Win() == 'X'){
			cout<<endl;
			cout<<"X wins!"<<endl;
			return 0;
		}else if(Win() == 'O'){
			cout<<endl;
			cout<<"O wins!"<<endl;
			return 0;
		}else if(Win() == '/' && draw == 9){
			cout<<endl;
			cout<<"It's a draw!"<<endl;
			return 0;
		}
	}
}
