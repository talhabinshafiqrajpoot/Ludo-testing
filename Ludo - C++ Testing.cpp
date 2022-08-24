

								// Talha Bin Shafiq
								// github username: talhabinshafiqrajpoot



#include<iostream>
#include<cstdlib>
using namespace std;
int convert;
int dice;
int consume;
void player1();
int Red_position1();
int Red_position2();
int Red_position3();
int Red_position4();
void player2();
int Blue_position1();
int Blue_position2();
int Blue_position3();
int Blue_position4();
void player3();
int Green_position1();
int Green_position2();
int Green_position3();
int Green_position4();
void player4();
int Yellow_position1();
int Yellow_position2();
int Yellow_position3();
int Yellow_position4();
void check1();
void check1_1();
void check1_2();
void check1_3();
void check1_4();
void check2();
void check2_1();
void check2_2();
void check2_3();
void check2_4();
void check3();
void check3_1();
void check3_2();
void check3_3();
void check3_4();
void check4();
void check4_1();
void check4_2();
void check4_3();
void check4_4();
void turn(); 
void PlayerWon();
int Red_position[4] = {1,1,1,1} , Blue_position[4] = {14,14,14,14} , Green_position[4] = {27,27,27,27} , Yellow_position[4] = {40,40,40,40} , Token , Ask;
int main(){
	PlayerWon();
}
void player1(){
    cout << "Position of Red Token 1 = " << Red_position[0] << endl;
	cout << "Position of Red Token 2 = " << Red_position[1] << endl;
	cout << "Position of Red Token 3 = " << Red_position[2] << endl;
	cout << "Position of Red Token 4 = " << Red_position[3] << endl;
	cout << "\n\n      Dice Roll !!!!!    \n\n"; 
	dice = rand() % 6 + 1 ;
	cout << "\n Player Red Turn = "<< dice << endl;
	if (dice <= 5 && Red_position[0] == 1 && Red_position[1] == 1 && Red_position[2] == 1 && Red_position[3] == 1){
		dice = 0;
		cout << "\nAll Tokens Of Red are at 1 (Starting) location \n";
	}
	turn();
	while (dice != 0){
		cout << "\nWhat Token you Want to choose : \n1. First Token\n2. Second Token\n3. Third Token\n4. Fourth Token \nEnter Value = ";
	    cin >> Token;
	    while (Token != 1 && Token != 2 && Token != 3 && Token != 4){
		    cout << "\nEnter Correct Value = ";
		    cin >> Token;
	    }
		if(Token == 1 && dice > 0){
		    Red_position1();
	    }
	    if(Token == 2 && dice > 0){
		    Red_position2();
	    }
	    if(Token == 3 && dice > 0){
		    Red_position3();
	    }
	    if(Token == 4 && dice > 0){
		    Red_position4();
	    }
	}
	cout << "Position of Red Token 1 = " << Red_position[0] << endl;
	cout << "Position of Red Token 2 = " << Red_position[1] << endl;
	cout << "Position of Red Token 3 = " << Red_position[2] << endl;
	cout << "Position of Red Token 4 = " << Red_position[3] << endl;
}
void player2(){
	cout << "Position of Blue Token 1 = "<< Blue_position[0] << endl;
	cout << "Position of Blue Token 2 = "<< Blue_position[1] << endl;
	cout << "Position of Blue Token 3 = "<< Blue_position[2] << endl;
	cout << "Position of Blue Token 4 = "<< Blue_position[3] << endl;
	cout << "\n\n      Dice Roll !!!!!    \n\n";
    dice = rand() % 6 + 1 ;
	cout << "\n Player Blue Turn = "<< dice << endl;
	if (dice <= 5 && Blue_position[0] == 14 && Blue_position[1] == 14 && Blue_position[2] == 14 && Blue_position[3] == 14){
		dice = 0;
		cout << "\nAll Tokens of Blue are at 14 (Starting) location \n";
	}
	turn();
	
	while (dice != 0){
		cout << "\nWhat Token you Want to choose : \n1. First Token\n2. Second Token\n3. Third Token\n4. Fourth Token \nEnter Value = ";
	    cin >> Token;
	    while (Token != 1 && Token != 2 && Token != 3 && Token != 4){
		    cout << "\nEnter Correct Value = ";
		    cin >> Token;
	    }
		if(Token == 1 && dice > 0){
		    Blue_position1();
	    }
	    if(Token == 2 && dice > 0){
		    Blue_position2();
	    }
	    if(Token == 3 && dice > 0){
		    Blue_position3();
	    }
	    if(Token == 4 && dice > 0){
		    Blue_position4();
	    }
	}
	cout << "Position of Blue Token 1 = "<< Blue_position[0] << endl;
	cout << "Position of Blue Token 2 = "<< Blue_position[1] << endl;
	cout << "Position of Blue Token 3 = "<< Blue_position[2] << endl;
	cout << "Position of Blue Token 4 = "<< Blue_position[3] << endl;
	
}
void player3(){
	cout << "Position of Green Token 1 = " << Green_position[0] << endl;
	cout << "Position of Green Token 2 = " << Green_position[1] << endl;
	cout << "Position of Green Token 3 = " << Green_position[2] << endl;
	cout << "Position of Green Token 4 = " << Green_position[3] << endl;
	cout << "\n\n      Dice Roll !!!!!    \n\n";
	dice = rand() % 6 + 1 ;
	cout << "\n Player Green Turn = "<< dice << endl;
	if (dice <= 5 && Green_position[0] == 27 && Green_position[1] == 27 && Green_position[2] == 27 && Green_position[3] == 27){
		dice = 0;
		cout << "\nAll Tokens of Green are at 27 (Starting) location \n";
	}
	turn();
	while (dice != 0){
		cout << "\nWhat Token you Want to choose : \n1. First Token\n2. Second Token\n3. Third Token\n4. Fourth Token \nEnter Value = ";
	    cin >> Token;
	    while (Token != 1 && Token != 2 && Token != 3 && Token != 4){
		    cout << "\nEnter Correct Value = ";
		    cin >> Token;
	    }
		if(Token == 1 && dice > 0){
		    Green_position1();
	    }
	    if(Token == 2 && dice > 0){
		    Green_position2();
	    }
	    if(Token == 3 && dice > 0){
		    Green_position3();
	    }
	    if(Token == 4 && dice > 0){
		    Green_position4();
	    }
	}
	cout << "Position of Green Token 1 = " << Green_position[0] << endl;
	cout << "Position of Green Token 2 = " << Green_position[1] << endl;
	cout << "Position of Green Token 3 = " << Green_position[2] << endl;
	cout << "Position of Green Token 4 = " << Green_position[3] << endl;
}
void player4(){
	cout << "Position of Yellow Token 1 = " << Yellow_position[0] << endl;
	cout << "Position of Yellow Token 2 = " << Yellow_position[1] << endl;
	cout << "Position of Yellow Token 3 = " << Yellow_position[2] << endl;
	cout << "Position of Yellow Token 4 = " << Yellow_position[3] << endl;
	cout << "\n\n      Dice Roll !!!!!    \n\n";
	dice = rand() % 6 + 1 ;
	cout << "\n Player Yellow Turn = "<< dice << endl;
	if (dice <= 5 && Yellow_position[0] == 40 && Yellow_position[1] == 40 && Yellow_position[2] == 40 && Yellow_position[3] == 40){
		dice = 0;
		cout << "\nAll Tokens of Yellow are at 40 (Starting) Location \n";
	}
	turn();
	while (dice != 0){
		cout << "\nWhat Token you Want to choose : \n1. First Token\n2. Second Token\n3. Third Token\n4. Fourth Token \nEnter Value = ";
	    cin >> Token;
	    while (Token != 1 && Token != 2 && Token != 3 && Token != 4){
		    cout << "Enter Correct Value = ";
		    cin >> Token;
	    }
		if(Token == 1 && dice > 0){
		    Yellow_position1();
	    }
	    if(Token == 2 && dice > 0){
		    Yellow_position2();
	    }
	    if(Token == 3 && dice > 0){
		    Yellow_position3();
	    }
	    if(Token == 4 && dice > 0){
		    Yellow_position4();
	    }
	}
	cout << "Position of Yellow Token 1 = " << Yellow_position[0] << endl;
	cout << "Position of Yellow Token 2 = " << Yellow_position[1] << endl;
	cout << "Position of Yellow Token 3 = " << Yellow_position[2] << endl;
	cout << "Position of Yellow Token 4 = " << Yellow_position[3] << endl;
}
void check1(){
	check1_1();
	check1_2();
	check1_3();
	check1_4();
}
void check1_1(){
	if (Red_position[0] != 0 && Red_position[0] != 1 && Red_position[0] != 9 && Red_position[0] != 14 && Red_position[0] != 22 && Red_position[0] != 27 && Red_position[0] != 35 && Red_position[0] != 40 && Red_position[0] != 48 && Red_position[0] != 52 && Red_position[0] != 53 && Red_position[0] != 54 && Red_position[0] != 55 && Red_position[0] != 56 && Red_position[0] != 57){
		if(Red_position[0] == Blue_position[0]){
			Blue_position[0] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[0] == Blue_position[1]){
			Blue_position[1] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[0] == Blue_position[2]){
			Blue_position[2] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[0] == Blue_position[3]){
			Blue_position[3] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[0] == Green_position[0]){
			Green_position[0] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[0] == Green_position[1]){
			Green_position[1] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[0] == Green_position[2]){
			Green_position[2] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[0] == Green_position[3]){
			Green_position[3] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[0] == Yellow_position[0]){
			Yellow_position[0] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[0] == Yellow_position[1]){
			Yellow_position[1] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[0] == Yellow_position[2]){
			Yellow_position[2] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[0] == Yellow_position[3]){
			Yellow_position[3] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
	}
}
void check1_2(){
	if (Red_position[1] != 0 && Red_position[1] != 1 && Red_position[1] != 9 && Red_position[1] != 14 && Red_position[1] != 22 && Red_position[1] != 27 && Red_position[1] != 35 && Red_position[1] != 40 && Red_position[1] != 48 && Red_position[1] != 52 && Red_position[1] != 53 && Red_position[1] != 54 && Red_position[1] != 55 && Red_position[1] != 56 && Red_position[1] != 57){
		if(Red_position[1] == Blue_position[0]){
			Blue_position[0] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[1] == Blue_position[1]){
			Blue_position[1] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[1] == Blue_position[2]){
			Blue_position[2] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[1] == Blue_position[3]){
			Blue_position[3] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[1] == Green_position[0]){
			Green_position[0] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[1] == Green_position[1]){
			Green_position[1] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[1] == Green_position[2]){
			Green_position[2] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[1] == Green_position[3]){
			Green_position[3] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[1] == Yellow_position[0]){
			Yellow_position[0] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[1] == Yellow_position[1]){
			Yellow_position[1] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[1] == Yellow_position[2]){
			Yellow_position[2] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[1] == Yellow_position[3]){
			Yellow_position[3] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
	}
}
void check1_3(){
	if (Red_position[2] != 0 && Red_position[2] != 1 && Red_position[2] != 9 && Red_position[2] != 14 && Red_position[2] != 22 && Red_position[2] != 27 && Red_position[2] != 35 && Red_position[2] != 40 && Red_position[2] != 48 && Red_position[2] != 52 && Red_position[2] != 53 && Red_position[2] != 54 && Red_position[2] != 55 && Red_position[2] != 56 && Red_position[2] != 57){
		if(Red_position[2] == Blue_position[0]){
			Blue_position[0] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[2] == Blue_position[1]){
			Blue_position[1] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[2] == Blue_position[2]){
			Blue_position[2] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[2] == Blue_position[3]){
			Blue_position[3] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[2] == Green_position[0]){
			Green_position[0] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[2] == Green_position[1]){
			Green_position[1] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[2] == Green_position[2]){
			Green_position[2] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[2] == Green_position[3]){
			Green_position[3] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[2] == Yellow_position[0]){
			Yellow_position[0] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[2] == Yellow_position[1]){
			Yellow_position[1] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[2] == Yellow_position[2]){
			Yellow_position[2] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[2] == Yellow_position[3]){
			Yellow_position[3] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
	}
}
void check1_4(){
	if (Red_position[3] != 0 && Red_position[3] != 1 && Red_position[3] != 9 && Red_position[3] != 14 && Red_position[3] != 22 && Red_position[3] != 27 && Red_position[3] != 35 && Red_position[3] != 40 && Red_position[3] != 48 && Red_position[3] != 52 && Red_position[3] != 53 && Red_position[3] != 54 && Red_position[3] != 55 && Red_position[3] != 56 && Red_position[3] != 57){
		if(Red_position[3] == Blue_position[0]){
			Blue_position[0] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[3] == Blue_position[1]){
			Blue_position[1] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[3] == Blue_position[2]){
			Blue_position[2] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[3] == Blue_position[3]){
			Blue_position[3] = 0;
			cout << "\n\n              Red kills Blue \n\n";
		}
		else if(Red_position[3] == Green_position[0]){
			Green_position[0] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[3] == Green_position[1]){
			Green_position[1] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[3] == Green_position[2]){
			Green_position[2] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[3] == Green_position[3]){
			Green_position[3] = 0;
			cout << "\n\n              Red kills Green \n\n";
		}
		else if(Red_position[3] == Yellow_position[0]){
			Yellow_position[0] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[3] == Yellow_position[1]){
			Yellow_position[1] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[3] == Yellow_position[2]){
			Yellow_position[2] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
		else if(Red_position[3] == Yellow_position[3]){
			Yellow_position[3] = 0;
			cout << "\n\n              Red kills Yellow \n\n";
		}
	}
}
void check2(){
	check2_1();
	check2_2();
	check2_3();
	check2_4();
}
void check2_1(){
	if (Blue_position[0] != 0 && Blue_position[0] != 1 && Blue_position[0] != 9 && Blue_position[0] != 14 && Blue_position[0] != 22 && Blue_position[0] != 27 && Blue_position[0] != 35 && Blue_position[0] != 40 && Blue_position[0] != 48 && Blue_position[0] != 52 && Blue_position[0] != 53 && Blue_position[0] != 54 && Blue_position[0] != 55 && Blue_position[0] != 56 && Blue_position[0] != 57){
		if(Blue_position[0] == Red_position[0]){
			Red_position[0] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[0] == Red_position[1]){
			Red_position[1] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[0] == Red_position[2]){
			Red_position[2] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[0] == Red_position[3]){
			Red_position[3] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[0] == Green_position[0]){
			Green_position[0] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[0] == Green_position[1]){
			Green_position[1] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[0] == Green_position[2]){
			Green_position[2] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[0] == Green_position[3]){
			Green_position[3] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[0] == Yellow_position[0]){
			Yellow_position[0] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[0] == Yellow_position[1]){
			Yellow_position[1] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[0] == Yellow_position[2]){
			Yellow_position[2] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[0] == Yellow_position[3]){
			Yellow_position[3] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
	}
}
void check2_2(){
	if (Blue_position[1] != 0 && Blue_position[1] != 1 && Blue_position[1] != 9 && Blue_position[1] != 14 && Blue_position[1] != 22 && Blue_position[1] != 27 && Blue_position[1] != 35 && Blue_position[1] != 40 && Blue_position[1] != 48 && Blue_position[1] != 52 && Blue_position[1] != 53 && Blue_position[1] != 54 && Blue_position[1] != 55 && Blue_position[1] != 56 && Blue_position[1] != 57){
		if(Blue_position[1] == Red_position[0]){
			Red_position[0] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[1] == Red_position[1]){
			Red_position[1] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[1] == Red_position[2]){
			Red_position[2] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[1] == Red_position[3]){
			Red_position[3] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[1] == Green_position[0]){
			Green_position[0] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[1] == Green_position[1]){
			Green_position[1] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[1] == Green_position[2]){
			Green_position[2] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[1] == Green_position[3]){
			Green_position[3] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[1] == Yellow_position[0]){
			Yellow_position[0] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[1] == Yellow_position[1]){
			Yellow_position[1] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[1] == Yellow_position[2]){
			Yellow_position[2] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[1] == Yellow_position[3]){
			Yellow_position[3] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
	}
}
void check2_3(){
	if (Blue_position[2] != 0 && Blue_position[2] != 1 && Blue_position[2] != 9 && Blue_position[2] != 14 && Blue_position[2] != 22 && Blue_position[2] != 27 && Blue_position[2] != 35 && Blue_position[2] != 40 && Blue_position[2] != 48 && Blue_position[2] != 52 && Blue_position[2] != 53 && Blue_position[2] != 54 && Blue_position[2] != 55 && Blue_position[2] != 56 && Blue_position[2] != 57){
		if(Blue_position[2] == Red_position[0]){
			Red_position[0] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[2] == Red_position[1]){
			Red_position[1] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[2] == Red_position[2]){
			Red_position[2] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[2] == Red_position[3]){
			Red_position[3] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[2] == Green_position[0]){
			Green_position[0] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[2] == Green_position[1]){
			Green_position[1] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[2] == Green_position[2]){
			Green_position[2] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[2] == Green_position[3]){
			Green_position[3] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[2] == Yellow_position[0]){
			Yellow_position[0] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[2] == Yellow_position[1]){
			Yellow_position[1] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[2] == Yellow_position[2]){
			Yellow_position[2] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[2] == Yellow_position[3]){
			Yellow_position[3] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
	}
}
void check2_4(){
	if (Blue_position[3] != 0 && Blue_position[3] != 1 && Blue_position[3] != 9 && Blue_position[3] != 14 && Blue_position[3] != 22 && Blue_position[3] != 27 && Blue_position[3] != 35 && Blue_position[3] != 40 && Blue_position[3] != 48 && Blue_position[3] != 52 && Blue_position[3] != 53 && Blue_position[3] != 54 && Blue_position[3] != 55 && Blue_position[3] != 56 && Blue_position[3] != 57){
		if(Blue_position[3] == Red_position[0]){
			Red_position[0] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[3] == Red_position[1]){
			Red_position[1] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[3] == Red_position[2]){
			Red_position[2] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[3] == Red_position[3]){
			Red_position[3] = 0;
			cout << "\n\n               Blue kills Red \n\n";
		}
		else if(Blue_position[3] == Green_position[0]){
			Green_position[0] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[3] == Green_position[1]){
			Green_position[1] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[3] == Green_position[2]){
			Green_position[2] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[3] == Green_position[3]){
			Green_position[3] = 0;
			cout << "\n\n               Blue kills Green \n\n";
		}
		else if(Blue_position[3] == Yellow_position[0]){
			Yellow_position[0] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[3] == Yellow_position[1]){
			Yellow_position[1] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[3] == Yellow_position[2]){
			Yellow_position[2] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
		else if(Blue_position[3] == Yellow_position[3]){
			Yellow_position[3] = 0;
			cout << "\n\n               Blue kills Yellow \n\n";
		}
	}
}
void check3(){
	check3_1();
	check3_2();
	check3_3();
	check3_4();
}
void check3_1(){
	if(Green_position[0] != 0 && Green_position[0] != 1 && Green_position[0] != 9 && Green_position[0] != 14 && Green_position[0] != 22 && Green_position[0] != 27 && Green_position[0] != 35 && Green_position[0] != 40 && Green_position[0] != 48 && Green_position[0] != 52 && Green_position[0] != 53 && Green_position[0] != 54 && Green_position[0] != 55 && Green_position[0] != 56 && Green_position[0] != 57){
		if(Green_position[0] == Blue_position[0]){
			Blue_position[0] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[0] == Blue_position[1]){
			Blue_position[1] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[0] == Blue_position[2]){
			Blue_position[2] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[0] == Blue_position[3]){
			Blue_position[3] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[0] == Red_position[0]){
			Red_position[0] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[0] == Red_position[1]){
			Red_position[1] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[0] == Red_position[2]){
			Red_position[2] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[0] == Red_position[3]){
			Red_position[3] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[0] == Yellow_position[0]){
			Yellow_position[0] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[0] == Yellow_position[1]){
			Yellow_position[1] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[0] == Yellow_position[2]){
			Yellow_position[2] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[0] == Yellow_position[3]){
			Yellow_position[3] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
	}
}
void check3_2(){
	if(Green_position[1] != 0 && Green_position[1] != 1 && Green_position[1] != 9 && Green_position[1] != 14 && Green_position[1] != 22 && Green_position[1] != 27 && Green_position[1] != 35 && Green_position[1] != 40 && Green_position[1] != 48 && Green_position[1] != 52 && Green_position[1] != 53 && Green_position[1] != 54 && Green_position[1] != 55 && Green_position[1] != 56 && Green_position[1] != 57){
		if(Green_position[1] == Blue_position[0]){
			Blue_position[0] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[1] == Blue_position[1]){
			Blue_position[1] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[1] == Blue_position[2]){
			Blue_position[2] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[1] == Blue_position[3]){
			Blue_position[3] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[1] == Red_position[0]){
			Red_position[0] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[1] == Red_position[1]){
			Red_position[1] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[1] == Red_position[2]){
			Red_position[2] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[1] == Red_position[3]){
			Red_position[3] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[1] == Yellow_position[0]){
			Yellow_position[0] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[1] == Yellow_position[1]){
			Yellow_position[1] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[1] == Yellow_position[2]){
			Yellow_position[2] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[1] == Yellow_position[3]){
			Yellow_position[3] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
	}
}
void check3_3(){
	if(Green_position[2] != 0 && Green_position[2] != 1 && Green_position[2] != 9 && Green_position[2] != 14 && Green_position[2] != 22 && Green_position[2] != 27 && Green_position[2] != 35 && Green_position[2] != 40 && Green_position[2] != 48 && Green_position[2] != 52 && Green_position[2] != 53 && Green_position[2] != 54 && Green_position[2] != 55 && Green_position[2] != 56 && Green_position[2] != 57){
		if(Green_position[2] == Blue_position[0]){
			Blue_position[0] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[2] == Blue_position[1]){
			Blue_position[1] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[2] == Blue_position[2]){
			Blue_position[2] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[2] == Blue_position[3]){
			Blue_position[3] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[2] == Red_position[0]){
			Red_position[0] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[2] == Red_position[1]){
			Red_position[1] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[2] == Red_position[2]){
			Red_position[2] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[2] == Red_position[3]){
			Red_position[3] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[2] == Yellow_position[0]){
			Yellow_position[0] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[2] == Yellow_position[1]){
			Yellow_position[1] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[2] == Yellow_position[2]){
			Yellow_position[2] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[2] == Yellow_position[3]){
			Yellow_position[3] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
	}
}
void check3_4(){
	if(Green_position[3] != 0 && Green_position[3] != 1 && Green_position[3] != 9 && Green_position[3] != 14 && Green_position[3] != 22 && Green_position[3] != 27 && Green_position[3] != 35 && Green_position[3] != 40 && Green_position[3] != 48 && Green_position[3] != 52 && Green_position[3] != 53 && Green_position[3] != 54 && Green_position[3] != 55 && Green_position[3] != 56 && Green_position[3] != 57){
		if(Green_position[3] == Blue_position[0]){
			Blue_position[0] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[3] == Blue_position[1]){
			Blue_position[1] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[3] == Blue_position[2]){
			Blue_position[2] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[3] == Blue_position[3]){
			Blue_position[3] = 0;
			cout << "\n\n                 Green kills Blue \n\n";
		}
		else if(Green_position[3] == Red_position[0]){
			Red_position[0] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[3] == Red_position[1]){
			Red_position[1] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[3] == Red_position[2]){
			Red_position[2] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[3] == Red_position[3]){
			Red_position[3] = 0;
			cout << "\n\n                 Green kills Red \n\n";
		}
		else if(Green_position[3] == Yellow_position[0]){
			Yellow_position[0] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[3] == Yellow_position[1]){
			Yellow_position[1] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[3] == Yellow_position[2]){
			Yellow_position[2] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
		else if(Green_position[3] == Yellow_position[3]){
			Yellow_position[3] == 0;
			cout << "\n\n                 Green kills Yellow \n\n";
		}
	}
}
void check4(){
	check4_1();
	check4_2();
	check4_3();
	check4_4();
}
void check4_1(){
	if (Yellow_position[0] != 0 && Yellow_position[0] != 1 && Yellow_position[0] != 9 && Yellow_position[0] != 14 && Yellow_position[0] != 22 && Yellow_position[0] != 27 && Yellow_position[0] != 35 && Yellow_position[0] != 40 && Yellow_position[0] != 48 && Yellow_position[0] != 52 && Yellow_position[0] != 53 && Yellow_position[0] != 54 && Yellow_position[0] != 55 && Yellow_position[0] != 56 && Yellow_position[0] != 57){
	    if(Yellow_position[0] == Blue_position[0]){
		    Blue_position[0] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[0] == Blue_position[1]){
		    Blue_position[1] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[0] == Blue_position[2]){
		    Blue_position[2] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[0] == Blue_position[3]){
		    Blue_position[3] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    } 
		else if (Yellow_position[0] == Green_position[0]){
		    Green_position[0] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[0] == Green_position[1]){
		    Green_position[1] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[0] == Green_position[2]){
		    Green_position[2] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[0] == Green_position[3]){
		    Green_position[3] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[0] == Red_position[0]){
		    Red_position[0] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[0] == Red_position[1]){
		    Red_position[1] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[0] == Red_position[2]){
		    Red_position[2] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[0] == Red_position[3]){
		    Red_position[3] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
    }
}
void check4_2(){
	if (Yellow_position[1] != 0 && Yellow_position[1] != 1 && Yellow_position[1] != 9 && Yellow_position[1] != 14 && Yellow_position[1] != 22 && Yellow_position[1] != 27 && Yellow_position[1] != 35 && Yellow_position[1] != 40 && Yellow_position[1] != 48 && Yellow_position[1] != 52 && Yellow_position[1] != 53 && Yellow_position[1] != 54 && Yellow_position[1] != 55 && Yellow_position[1] != 56 && Yellow_position[1] != 57){
	    if(Yellow_position[1] == Blue_position[0]){
		    Blue_position[0] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[1] == Blue_position[1]){
		    Blue_position[1] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[1] == Blue_position[2]){
		    Blue_position[2] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[1] == Blue_position[3]){
		    Blue_position[3] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    } 
		else if (Yellow_position[1] == Green_position[0]){
		    Green_position[0] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[1] == Green_position[1]){
		    Green_position[1] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[1] == Green_position[2]){
		    Green_position[2] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[1] == Green_position[3]){
		    Green_position[3] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[1] == Red_position[0]){
		    Red_position[0] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[1] == Red_position[1]){
		    Red_position[1] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[1] == Red_position[2]){
		    Red_position[2] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[1] == Red_position[3]){
		    Red_position[3] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    } 
    }
}
void check4_3(){
	if (Yellow_position[2] != 0 && Yellow_position[2] != 1 && Yellow_position[2] != 9 && Yellow_position[2] != 14 && Yellow_position[2] != 22 && Yellow_position[2] != 27 && Yellow_position[2] != 35 && Yellow_position[2] != 40 && Yellow_position[2] != 48 && Yellow_position[2] != 52 && Yellow_position[2] != 53 && Yellow_position[2] != 54 && Yellow_position[2] != 55 && Yellow_position[2] != 56 && Yellow_position[2] != 57){
	    if(Yellow_position[2] == Blue_position[0]){
		    Blue_position[0] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[2] == Blue_position[1]){
		    Blue_position[1] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[2] == Blue_position[2]){
		    Blue_position[2] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[2] == Blue_position[3]){
		    Blue_position[3] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    } 
		else if (Yellow_position[2] == Green_position[0]){
		    Green_position[0] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[2] == Green_position[1]){
		    Green_position[1] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[2] == Green_position[2]){
		    Green_position[2] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[2] == Green_position[3]){
		    Green_position[3] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[2] == Red_position[0]){
		    Red_position[0] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[2] == Red_position[1]){
		    Red_position[1] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[2] == Red_position[2]){
		    Red_position[2] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[2] == Red_position[3]){
		    Red_position[3] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }   
    }
}
void check4_4(){
	if (Yellow_position[3] != 0 && Yellow_position[3] != 1 && Yellow_position[3] != 9 && Yellow_position[3] != 14 && Yellow_position[3] != 22 && Yellow_position[3] != 27 && Yellow_position[3] != 35 && Yellow_position[3] != 40 && Yellow_position[3] != 48 && Yellow_position[3] != 52 && Yellow_position[3] != 53 && Yellow_position[3] != 54 && Yellow_position[3] != 55 && Yellow_position[3] != 56 && Yellow_position[3] != 57){
	    if(Yellow_position[3] == Blue_position[0]){
		    Blue_position[0] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[3] == Blue_position[1]){
		    Blue_position[1] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[3] == Blue_position[2]){
		    Blue_position[2] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    }
	    else if(Yellow_position[3] == Blue_position[3]){
		    Blue_position[3] = 0;
		    cout << "\n\n                  Yellow1 kills Blue \n\n";
	    } 
		else if (Yellow_position[3] == Green_position[0]){
		    Green_position[0] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[3] == Green_position[1]){
		    Green_position[1] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[3] == Green_position[2]){
		    Green_position[2] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[3] == Green_position[3]){
		    Green_position[3] = 0;
		    cout << "\n\n                  Yellow kills Green \n\n";
	    }
	    else if (Yellow_position[3] == Red_position[0]){
		    Red_position[0] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[3] == Red_position[1]){
		    Red_position[1] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[3] == Red_position[2]){
		    Red_position[2] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }
	    else if (Yellow_position[3] == Red_position[3]){
		    Red_position[3] = 0;
		    cout << "\n\n                  Yellow kills Red  \n\n";
	    }   
    }
}
void turn(){
	if (dice == 6){
		cout << "\n Again Turn = ";
		dice += rand() % 6 + 1;
		cout << dice << endl;
		if(dice == 12){
			cout << "\n Again Turn = ";
			dice += rand() % 6 + 1;
			cout << dice << endl;
			if (dice == 18){
				dice = 0;
			}
		}
	}
}
void PlayerWon(){
	while((Red_position[0] != 57 && Red_position[1] != 57 && Red_position[2] != 57 && Red_position[3] != 57) || (Blue_position[0] != 63 && Blue_position[1] != 63 && Blue_position[2] != 63 && Blue_position[3] != 63) || (Green_position[0] != 69 && Green_position[1] != 69 && Green_position[2] != 69 && Green_position[3] != 69) || (Yellow_position[0] != 75 && Yellow_position[1] != 75 && Yellow_position[2] != 75 && Yellow_position[3] != 75 )){
	    for (int i = 0 ; i < 1 ; i++){
		cout << "\nPositions of Player Red : " << endl;
	    player1();
		if(Red_position[0] == 57 && Red_position[1] == 57 && Red_position[2] == 57 && Red_position[3] == 57){
		    cout << "\n Player Red Won !!!!";
		    break;
	    }
	    else if(Blue_position[0] == 63 && Blue_position[1] == 63 && Blue_position[2] == 63 && Blue_position[3] == 63){
		    cout << "\nPlayer Blue Won !!!";
		    break;
	    }
	    else if(Green_position[0] == 69 && Green_position[1] == 69 && Green_position[2] == 69 && Green_position[3] == 69){
		    cout << "\nPlayer Green Won !!!";
		    break;
	    }
	    else if (Yellow_position[0] == 75 && Yellow_position[1] == 75 && Yellow_position[2] == 75 && Yellow_position[3] == 75){
		    cout << "\nPlayer Yellow Won !!!";
		    break;
	    }
	    
		check1();
	    cout << "\nPositions of Player Blue : "<< endl;
	    player2();
		if(Red_position[0] == 57 && Red_position[1] == 57 && Red_position[2] == 57 && Red_position[3] == 57){
		    cout << "\n Player Red Won !!!!";
		    break;
	    }
	    else if(Blue_position[0] == 63 && Blue_position[1] == 63 && Blue_position[2] == 63 && Blue_position[3] == 63){
		    cout << "\nPlayer Blue Won !!!";
		    break;
	    }
	    else if(Green_position[0] == 69 && Green_position[1] == 69 && Green_position[2] == 69 && Green_position[3] == 69){
		    cout << "\nPlayer Green Won !!!";
		    break;
	    }
	    else if (Yellow_position[0] == 75 && Yellow_position[1] == 75 && Yellow_position[2] == 75 && Yellow_position[3] == 75){
		    cout << "\nPlayer Yellow Won !!!";
		    break;
	    }
		check2();
	    cout << "\nPositions of Player Green : "<< endl;
	    player3();
		if(Red_position[0] == 57 && Red_position[1] == 57 && Red_position[2] == 57 && Red_position[3] == 57){
		    cout << "\n Player Red Won !!!!";
		    break;
	    }
	    else if(Blue_position[0] == 63 && Blue_position[1] == 63 && Blue_position[2] == 63 && Blue_position[3] == 63){
		    cout << "\nPlayer Blue Won !!!";
		    break;
	    }
	    else if(Green_position[0] == 69 && Green_position[1] == 69 && Green_position[2] == 69 && Green_position[3] == 69){
		    cout << "\nPlayer Green Won !!!";
		    break;
	    }
	    else if (Yellow_position[0] == 75 && Yellow_position[1] == 75 && Yellow_position[2] == 75 && Yellow_position[3] == 75){
		    cout << "\nPlayer Yellow Won !!!";
		    break;
	    }
		check3();
	    cout << "\nPositions of Player Yellow : "<< endl;
	    player4();
		if(Red_position[0] == 57 && Red_position[1] == 57 && Red_position[2] == 57 && Red_position[3] == 57){
		    cout << "\n Player Red Won !!!!";
		    break;
	    }
	    else if(Blue_position[0] == 63 && Blue_position[1] == 63 && Blue_position[2] == 63 && Blue_position[3] == 63){
		    cout << "\nPlayer Blue Won !!!";
		    break;
	    }
	    else if(Green_position[0] == 69 && Green_position[1] == 69 && Green_position[2] == 69 && Green_position[3] == 69){
		    cout << "\nPlayer Green Won !!!";
		    break;
	    }
	    else if (Yellow_position[0] == 75 && Yellow_position[1] == 75 && Yellow_position[2] == 75 && Yellow_position[3] == 75){
		    cout << "\nPlayer Yellow Won !!!";
		    break;
	    }
		check4();
	  }
	  cout << "Position of Red    => " << "\t 1st Token = " << Red_position[0] << "\t 2nd Token = " << Red_position[1] << "\t 3rd Token = " << Red_position[2] << "\t 4th Token = " << Red_position[3] << endl;
	  cout << "Position of Blue   => " << "\t 1st Token = " << Blue_position[0] << "\t 2nd Token = " << Blue_position[1] << "\t 3rd Token = " << Blue_position[2] << "\t 4th Token = " << Blue_position[3] << endl;
	  cout << "Position of Green  => " << "\t 1st Token = " << Green_position[0] << "\t 2nd Token = " << Green_position[1] << "\t 3rd Token = " << Green_position[2] << "\t 4th Token = " << Green_position[3] << endl;
	  cout << "Position of Yellow => " << "\t 1st Token = " << Yellow_position[0] << "\t 2nd Token = " << Yellow_position[1] << "\t 3rd Token = " << Yellow_position[2] << "\t 4th Token = " << Yellow_position[3] << endl;
	} 
	
}
int Red_position1(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Red_position[0] == 1 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n2. Second Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 2 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (2,3,4) = ";
	    		cin >> Token;
			}
		}
	    return Red_position[0];
	}
	if (Red_position[0] == 1 && dice >= 6){
		dice = dice - 6;
		cout << "Dice = " << dice << endl;
	}
	if (Red_position[0] == 57){
		cout << "\nToken 1 already won !!!";
		return Red_position[0];
	}
	if (Ask == 1 && dice != 0){
		Red_position[0] += dice;
	    if (Red_position[0] > 57 ){
		    Red_position[0] -= dice;
		    Red_position1();
	    }
	    if (Red_position[0] == 57){
	    	cout << "Red Token 1 Won!!!";
		}
	    if (Red_position[0] == 1 || Red_position[0] == 9 ||Red_position[0] == 14 ||Red_position[0] == 22 ||Red_position[0] == 27 ||Red_position[0] == 35 ||Red_position[0] == 40 ||Red_position[0] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Red_position[0] == 52 ||Red_position[0] == 53 ||Red_position[0] == 54 ||Red_position[0] == 55 ||Red_position[0] == 56){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	else if(Ask == 2 && dice != 0) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		dice = dice - consume;
		if (Red_position[0] == 1 && consume <=5){
			dice += consume;
			cout << "\nInvalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Red_position[0];
		}
		Red_position[0] += consume;
	    if (Red_position[0] > 57 ){
		    Red_position[0] -= consume;
		    dice += consume;
	    }
	    if (Red_position[0] == 1 || Red_position[0] == 9 ||Red_position[0] == 14 ||Red_position[0] == 22 ||Red_position[0] == 27 ||Red_position[0] == 35 ||Red_position[0] == 40 ||Red_position[0] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Red_position[0] == 52 ||Red_position[0] == 53 ||Red_position[0] == 54 ||Red_position[0] == 55 ||Red_position[0] == 56){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n2. Second Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 2 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (2,3,4) = ";
	    		cin >> Token;
	    		return Red_position[0];
			}
		}
	}
	return Red_position[0];
}
int Red_position2(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Red_position[1] == 1 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (1,3,4) = ";
	    		cin >> Token;
			}
		}
	    return Red_position[1];
	}
	if (Red_position[1] == 1 && dice >= 6){
		dice = dice - 6;
		cout << "Dice = " << dice << endl;
	}
	if (Red_position[1] == 57){
		cout << "\nToken 2 of Red was already won !!!!";
		return Red_position[1];
	}
	if (Ask == 1 && dice != 0){
		Red_position[1] += dice;
	    if (Red_position[1] > 57 ){
		    Red_position[1] -= dice;
		    Red_position2();
	    }
	    if (Red_position[1] == 1 || Red_position[1] == 9 ||Red_position[1] == 14 ||Red_position[1] == 22 ||Red_position[1] == 27 ||Red_position[1] == 35 ||Red_position[1] == 40 ||Red_position[1] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Red_position[1] == 52 ||Red_position[1] == 53 ||Red_position[1] == 54 ||Red_position[1] == 55 ||Red_position[1] == 56){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	else if(Ask == 2 && dice != 0) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Red_position[1] == 1 && consume <=5){
			dice += consume;
			cout << "\nInvalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Red_position[1];
		}
		Red_position[1] += consume;
	    if (Red_position[1] > 57 ){
		    Red_position[1] -= consume;
		    dice += consume;
	    }
	    if (Red_position[1] == 1 || Red_position[1] == 9 ||Red_position[1] == 14 ||Red_position[1] == 22 ||Red_position[1] == 27 ||Red_position[1] == 35 ||Red_position[1] == 40 ||Red_position[1] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Red_position[1] == 52 ||Red_position[1] == 53 ||Red_position[1] == 54 ||Red_position[1] == 55 ||Red_position[1] == 56){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (1,3,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Red_position[1];
}
int Red_position3(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Red_position[2] == 1 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 4){
	    		cout << "Input Correct number (1,2,4) = ";
	    		cin >> Token;
			}
		}
		return Red_position[2];
	}
	if (Red_position[2] == 1 && dice >= 6){
		dice = dice - 6;
	}
	if (Red_position[2] == 57){
		cout << "\nToken 3 of Red was already won !!!";
		return Red_position[2];
	}
	if (Ask == 1 && dice != 0){
		Red_position[2] += dice;
	    if (Red_position[2] > 57 ){
		    Red_position[2] -= dice;
		    Red_position3();
	    }
	    if (Red_position[2] == 1 || Red_position[2] == 9 ||Red_position[2] == 14 ||Red_position[2] == 22 ||Red_position[2] == 27 ||Red_position[2] == 35 ||Red_position[2] == 40 ||Red_position[2] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Red_position[2] == 52 ||Red_position[2] == 53 ||Red_position[2] == 54 ||Red_position[2] == 55 ||Red_position[2] == 56){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume == dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Red_position[2] == 1 && consume <=5){
			cout << "\nInvalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Red_position[2];
		}
		Red_position[2] += consume;
	    if (Red_position[2] > 57 ){
		    Red_position[2] -= consume;
		    dice += consume;
	    }
	    if (Red_position[2] == 1 || Red_position[2] == 9 ||Red_position[2] == 14 ||Red_position[2] == 22 ||Red_position[2] == 27 ||Red_position[2] == 35 ||Red_position[2] == 40 ||Red_position[2] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Red_position[2] == 52 ||Red_position[2] == 53 ||Red_position[2] == 54 ||Red_position[2] == 55 ||Red_position[2] == 56){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 4){
	    		cout << "\nInput Correct number (1,2,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Red_position[2];
}
int Red_position4(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Red_position[3] == 1 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n3. Third Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 3){
	    		cout << "\nInput Correct number (1,2,3) = ";
	    		cin >> Token;
			}
		}
		return Red_position[3];
	}
	if (Red_position[3] == 1 && dice >= 6){
		dice = dice - 6;
	}
	if (Red_position[3] == 57){
		cout << "\nToken 4 of Red was already won !!!";
		return Red_position[3];
	}
	if (Ask == 1 && dice != 0){
		Red_position[3] += dice;
	    if (Red_position[3] > 57 ){
		    Red_position[3] -= dice;
		    Red_position4();
	    }
	    if (Red_position[3] == 1 || Red_position[3] == 9 ||Red_position[3] == 14 ||Red_position[3] == 22 ||Red_position[3] == 27 ||Red_position[3] == 35 ||Red_position[3] == 40 ||Red_position[3] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Red_position[3] == 52 ||Red_position[3] == 53 ||Red_position[3] == 54 ||Red_position[3] == 55 ||Red_position[3] == 56){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	else if (Ask == 2 && dice != 0) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume == dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Red_position[3] == 1 && consume <=5){
			cout << "\nInvalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Red_position[3];
		}
		Red_position[3] += consume;
	    if (Red_position[3] > 57 ){
		    Red_position[3] -= consume;
		    dice += consume;
	    }
	    if (Red_position[3] == 1 || Red_position[3] == 9 ||Red_position[3] == 14 ||Red_position[3] == 22 ||Red_position[3] == 27 ||Red_position[3] == 35 ||Red_position[3] == 40 ||Red_position[3] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Red_position[3] == 52 ||Red_position[3] == 53 ||Red_position[3] == 54 ||Red_position[3] == 55 ||Red_position[3] == 56){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n3. Third Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 3){
	    		cout << "\nInput Correct number (1,2,3) = ";
	    		cin >> Token;
			}
		}
	}
	return Red_position[3];
}
int Blue_position1(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Blue_position[0] == 14 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n2. Second Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 2 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (2,3,4) = ";
	    		cin >> Token;
			}
		}
	    return Blue_position[0];
	}
	if (Blue_position[0] == 14 && dice >= 6){
		dice = dice - 6;
	}
	if (Blue_position[0] == 63){
		cout << "\nToken 1 of Blue was already won !!!";
		return Blue_position[0];
	}
	if (Ask == 1 && dice != 0){
		if (Blue_position[0] < 14){
			if ((Blue_position[0] + dice) > 12){
				Blue_position[0] += dice;
				convert = ((Blue_position[0] - 12) - 1);
				Blue_position[0] = 58 + convert;
				return Blue_position[0];
			}
		}
		Blue_position[0] += dice;
	    if (Blue_position[0] > 63 ){
		    Blue_position[0] -= dice;
		    Blue_position1();
	    }
	    if (Blue_position[0] > 51 && Blue_position[0] < 58){
	    	convert = ((Blue_position[0] - 51) - 1);
	    	Blue_position[0] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Blue_position[0]; 
		}
	    if (Blue_position[0] == 1 || Blue_position[0] == 9 || Blue_position[0] == 14 || Blue_position[0] == 22 || Blue_position[0] == 27 || Blue_position[0] == 35 || Blue_position[0] == 40 || Blue_position[0] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Blue_position[0] == 58 || Blue_position[0] == 59 || Blue_position[0] == 60 || Blue_position[0] == 61 || Blue_position[0] == 62){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Blue_position[0] != 63) {
		cout << "Enter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "Enter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Blue_position[0] < 14){
			if ((Blue_position[0] + consume) > 12){
				Blue_position[0] += consume;
				convert = ((Blue_position[0] - 12) - 1);
				Blue_position[0] = 58 + convert;
				return Blue_position[0];
			}
		}
		else if (Blue_position[0] == 14 && consume <=5){
			cout << "Invalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Blue_position[0];
		}
		Blue_position[0] += consume;
		if (Blue_position[0] > 51 && Blue_position[0] < 58){
	    	convert = ((Blue_position[0] - 51) - 1);
	    	Blue_position[0] = convert;
			cout << "Going Towards Home !!!!!";
			return Blue_position[0]; 
		}
	    if (Blue_position[0] > 63 ){
		    Blue_position[0] -= consume;
		    dice += consume;
	    }
	    if (Blue_position[0] == 1 || Blue_position[0] == 9 || Blue_position[0] == 14 || Blue_position[0] == 22 || Blue_position[0] == 27 || Blue_position[0] == 35 || Blue_position[0] == 40 || Blue_position[0] == 48){
	        cout << "\n AT STOP !!! ";	
	    }
	    if(Blue_position[0] == 58 ||Blue_position[0] == 59 ||Blue_position[0] == 60 ||Blue_position[0] == 61 ||Blue_position[0] == 62){
		    cout << "\n AT HOME ";
	    }
	    if ( dice > 0 ){
	    	cout << "Enter the Token You want to consume your remaining score : \n2. Second Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "Enter Number = ";
	    	cin >> Token;
	    	while ( Token != 2 && Token != 3 && Token != 4){
	    		cout << "Input Correct number (2,3,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Blue_position[0];
}
int Blue_position2(){
	cout << "Want to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "Please Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Blue_position[1] == 14 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "Enter the Token You want to consume your remaining score : \n1. First Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "Enter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 3 && Token != 4){
	    		cout << "Input Correct number (1,3,4) = ";
	    		cin >> Token;
			}
		}
	    return Blue_position[1];
	}
	if (Blue_position[1] == 14 && dice >= 6){
		dice = dice - 6;
	}
	if (Blue_position[1] == 63){
		cout << "Token 2 of Blue was already won !!!";
		return Blue_position[1];
	}
	if (Ask == 1 && dice != 0 && Blue_position[1] != 63){
		if (Blue_position[1] < 14){
			if ((Blue_position[1] + dice) > 12){
				Blue_position[1] += dice;
				convert = ((Blue_position[1] - 12) - 1);
				Blue_position[1] = 58 + convert;
				return Blue_position[1];
			}
		}
		Blue_position[1] += dice;
	    if (Blue_position[1] > 63 ){
		    Blue_position[1] -= dice;
		    Blue_position2();
	    }
	    if (Blue_position[1] > 51 && Blue_position[1] < 58){
	    	convert = ((Blue_position[1] - 51) - 1);
	    	Blue_position[1] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Blue_position[1]; 
		}
	    if (Blue_position[1] == 1 || Blue_position[1] == 9 || Blue_position[1] == 14 || Blue_position[1] == 22 || Blue_position[1] == 27 || Blue_position[1] == 35 || Blue_position[1] == 40 || Blue_position[1] == 48){
	        cout << "\n AT STOP !!! ";	
	    }
	    if(Blue_position[1] == 58 || Blue_position[1] == 59 || Blue_position[1] == 60 || Blue_position[1] == 61 || Blue_position[1] == 62){
		    cout << "\n AT HOME ";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Blue_position[1] != 63){
		cout << "Enter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "Enter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Blue_position[1] < 14){
			if ((Blue_position[1] + consume) > 12){
				Blue_position[1] += consume;
				convert = ((Blue_position[1] - 12) - 1);
				Blue_position[1] = 58 + convert;
				return Blue_position[1];
			}
		}
		else if (Blue_position[1] == 14 && consume <=5){
			cout << "Invalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Blue_position[1];
		}
		Blue_position[1] += consume;
		if (Blue_position[1] > 51 && Blue_position[1] < 58){
	    	convert = ((Blue_position[1] - 51) - 1);
	    	Blue_position[1] = convert;
			cout << "Going Towards Home !!!!!";
			return Blue_position[1]; 
		}
	    if (Blue_position[1] > 63 ){
		    Blue_position[1] -= consume;
		    dice += consume;
	    }
	    if (Blue_position[1] == 1 || Blue_position[1] == 9 || Blue_position[1] == 14 || Blue_position[1] == 22 || Blue_position[1] == 27 || Blue_position[1] == 35 || Blue_position[1] == 40 || Blue_position[1] == 48){
	        cout << "\n AT STOP !!! ";	
	    }
	    if(Blue_position[1] == 58 ||Blue_position[1] == 59 ||Blue_position[1] == 60 ||Blue_position[1] == 61 ||Blue_position[1] == 62){
		    cout << "\n AT HOME ";
	    }
	    if ( dice > 0 ){
	    	cout << "Enter the Token You want to consume your remaining score : \n1. First Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "Enter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 3 && Token != 4){
	    		cout << "Input Correct number (1,3,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Blue_position[1];
}
int Blue_position3(){
	cout << "Want to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "Please Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Blue_position[2] == 14 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "Enter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n4. Fourth Token.\n";
	    	cout << "Enter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 4){
	    		cout << "Input Correct number (1,2,4) = ";
	    		cin >> Token;
			}
		}
	    return Blue_position[2];
	}
	if (Blue_position[2] == 14 && dice >= 6){
		dice = dice - 6;
	}
	if (Blue_position[2] == 63){
		cout << "Token 3 of Blue was already won !!!";
		return Blue_position[2];
	}
	if (Ask == 1 && dice > 0 && Blue_position[2] != 63){
		if (Blue_position[2] < 14){
			if ((Blue_position[2] + dice) > 12){
				Blue_position[2] += dice;
				convert = ((Blue_position[2] - 12) - 1);
				Blue_position[2] = 58 + convert;
				return Blue_position[2];
			}
		}
		Blue_position[2] += dice;
	    if (Blue_position[2] > 63 ){
		    Blue_position[2] -= dice;
		    Blue_position3();
	    }
	    if (Blue_position[2] > 51 && Blue_position[2] < 58){
	    	convert = ((Blue_position[2] - 51) - 1);
	    	Blue_position[2] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Blue_position[2]; 
		}
	    if (Blue_position[2] == 1 || Blue_position[2] == 9 || Blue_position[2] == 14 || Blue_position[2] == 22 || Blue_position[2] == 27 || Blue_position[2] == 35 || Blue_position[2] == 40 || Blue_position[2] == 48){
	        cout << "\n AT STOP !!! ";	
	    }
	    if(Blue_position[2] == 58 || Blue_position[2] == 59 || Blue_position[2] == 60 || Blue_position[2] == 61 || Blue_position[2] == 62){
		    cout << "\n AT HOME ";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Blue_position[2] != 63) {
		cout << "Enter the Amount of score you want to use = "; 
		cin >> consume;
		while (consume >= dice){
			cout << "Enter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Blue_position[2] < 14){
			if ((Blue_position[2] + consume) > 12){
				Blue_position[2] += consume;
				convert = ((Blue_position[2] - 12) - 1);
				Blue_position[2] = 58 + convert;
				return Blue_position[2];
			}
		}	
		else if (Blue_position[2] == 14 && consume <=5){
			cout << "Invalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Blue_position[2];
		}
		Blue_position[2] += consume;
		if (Blue_position[2] > 51 && Blue_position[2] < 58){
	    	convert = ((Blue_position[2] - 51) - 1);
	    	Blue_position[2] = convert;
			cout << "Going Towards Home !!!!!";
			return Blue_position[2]; 
		}
	    if (Blue_position[2] > 63 ){
		    Blue_position[2] -= consume;
		    dice += consume;
	    }
	    if (Blue_position[2] == 1 || Blue_position[2] == 9 || Blue_position[2] == 14 || Blue_position[2] == 22 || Blue_position[2] == 27 || Blue_position[2] == 35 || Blue_position[2] == 40 || Blue_position[2] == 48){
	        cout << "\n AT STOP !!! ";	
	    }
	    if(Blue_position[2] == 58 || Blue_position[2] == 59 || Blue_position[2] == 60 || Blue_position[2] == 61 ||Blue_position[2] == 62){
		    cout << "\n AT HOME ";
	    }
	    if ( dice > 0 ){
	    	cout << "Enter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n4. Fourth Token.\n";
	    	cout << "Enter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 4){
	    		cout << "Input Correct number (1,2,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Blue_position[2];
}
int Blue_position4(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Blue_position[3] == 14 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n3. Third Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 3){
	    		cout << "\nInput Correct number (1,2,3) = ";
	    		cin >> Token;
			}
		}
	    return Blue_position[3];
	}
	if (Blue_position[3] == 14 && dice >= 6){
		dice = dice - 6;
	}
	if (Blue_position[3] == 63){
		cout << "\nToken 4 of Blue was already won !!! \n";
		return Blue_position[3];
	}
	if (Ask == 1 && dice > 0 && Blue_position[3] != 63){
		if (Blue_position[3] < 14){
			if ((Blue_position[3] + dice) > 12){
				Blue_position[3] += dice;
				convert = ((Blue_position[3] - 12) - 1);
				Blue_position[3] = 58 + convert;
				return Blue_position[3];
			}
		}
		Blue_position[3] += dice;
		if (Blue_position[3] > 51 && Blue_position[3] < 58){
	    	convert = ((Blue_position[3] - 51) - 1);
	    	Blue_position[3] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Blue_position[3]; 
		}
	    if (Blue_position[3] > 63 ){
		    Blue_position[3] -= dice;
		    Blue_position4();
	    }
	    if (Blue_position[3] == 1 || Blue_position[3] == 9 || Blue_position[3] == 14 || Blue_position[3] == 22 || Blue_position[3] == 27 || Blue_position[3] == 35 || Blue_position[3] == 40 || Blue_position[3] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Blue_position[3] == 58 || Blue_position[3] == 59 || Blue_position[3] == 60 || Blue_position[3] == 61 || Blue_position[3] == 62){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Blue_position[3] != 63) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Blue_position[3] < 14){
			if ((Blue_position[3] + consume) > 12){
				Blue_position[3] += consume;
				convert = ((Blue_position[3] - 12) - 1);
				Blue_position[3] = 58 + convert;
				return Blue_position[3];
			}
		}
		else if (Blue_position[3] == 14 && consume <=5){
			cout << "\nInvalid to store value in it..\n Enter Token Again = ";
			cin >> Token;
			return Blue_position[3];
		}
		Blue_position[3] += consume;
		if (Blue_position[3] > 51 && Blue_position[3] < 58){
	    	convert = ((Blue_position[3] - 51) - 1);
	    	Blue_position[3] = convert;
			cout << "Going Towards Home !!!!!";
			return Blue_position[3]; 
		}
	    if (Blue_position[3] > 63 ){
		    Blue_position[3] -= consume;
		    dice += consume;
	    }
	    if (Blue_position[3] == 1 || Blue_position[3] == 9 || Blue_position[3] == 14 || Blue_position[3] == 22 || Blue_position[3] == 27 || Blue_position[3] == 35 || Blue_position[3] == 40 || Blue_position[3] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Blue_position[3] == 58 || Blue_position[3] == 59 || Blue_position[3] == 60 || Blue_position[3] == 61 ||Blue_position[3] == 62){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
			cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n3. Third Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 3){
	    		cout << "\nInput Correct number (1,2,3) = ";
	    		cin >> Token;
			}
		}
	}
	return Blue_position[3];
}
int Green_position1(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Green_position[0] == 27 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n2. Second Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 2 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (2,3,4) = ";
	    		cin >> Token;
			}
		}
	    return Green_position[0];
	}
	if (Green_position[0] == 27 && dice >= 6){
		dice = dice - 6;
	}
	if (Green_position[0] == 69){
		cout << "\nToken 1 of Green was already won !!!\n";
		return Green_position[0];
	}
	if (Ask == 1 && dice > 0 && Green_position[0] != 69){
		if (Green_position[0] < 27){
			if ((Green_position[0] + dice) > 25){
				Green_position[0] += dice;
				convert = ((Green_position[0] - 25) - 1);
				Green_position[0] = 64 + convert;
				return Green_position[0];
			}
		}
		Green_position[0] += dice;
		if (Green_position[0] > 51 && Green_position[0] < 58){
	    	convert = ((Green_position[0] - 51) - 1);
	    	Green_position[0] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Green_position[0]; 
		}
	    if (Green_position[0] > 69 ){
		    Green_position[0] -= dice;
		    Green_position1();
	    }
	    if (Green_position[0] == 1 || Green_position[0] == 9 || Green_position[0] == 14 || Green_position[0] == 22 || Green_position[0] == 27 || Green_position[0] == 35 || Green_position[0] == 40 || Green_position[0] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Green_position[0] == 64 || Green_position[0] == 65 || Green_position[0] == 66 || Green_position[0] == 67 || Green_position[0] == 68){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Green_position[0] != 69) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Green_position[0] < 27){
			if ((Green_position[0] + consume) > 25){
				Green_position[0] += consume;
				convert = ((Green_position[0] - 25) - 1);
				Green_position[0] = 64 + convert;
				return Green_position[0];
			}
		}
		else if (Green_position[0] == 27 && consume <=5){
			cout << "\nInvalid to store value in it.. Enter Token Again = ";
			cin >> Token;
		}
		Green_position[0] += consume;
		if (Green_position[0] > 51 && Green_position[0] < 58){
	    	convert = ((Green_position[0] - 51) - 1);
	    	Green_position[0] = convert;
			cout << "Going Towards Home !!!!!";
			return Green_position[0]; 
		}
	    if (Green_position[0] > 69 ){
		    Green_position[0] -= consume;
		    dice += consume;
	    }
	    if (Green_position[0] == 1 || Green_position[0] == 9 || Green_position[0] == 14 || Green_position[0] == 22 || Green_position[0] == 27 || Green_position[0] == 35 || Green_position[0] == 40 || Green_position[0] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Green_position[0] == 64 || Green_position[0] == 65 || Green_position[0] == 66 || Green_position[0] == 67 ||Green_position[0] == 68){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
			cout << "\nEnter the Token You want to consume your remaining score : \n2. Second Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 2 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (2,3,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Green_position[0];
}
int Green_position2(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Green_position[1] == 27 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (1,3,4) = ";
	    		cin >> Token;
			}
		}
	    return Green_position[1];
	}
	if (Green_position[1] == 27 && dice >= 6){
		dice = dice - 6;
	}
	if (Green_position[1] == 69){
		cout << "\nToken 2 of Green was already won !!!\n";
		return Green_position[1];
	}
	if (Ask == 1 && dice > 0 && Green_position[1] != 69){
		if (Green_position[1] < 27){
			if ((Green_position[1] + dice) > 25){
				Green_position[1] += dice;
				convert = ((Green_position[1] - 25) - 1);
				Green_position[1] = 64 + convert;
				return Green_position[1];
			}
		}
		Green_position[1] += dice;
		if (Green_position[1] > 51 && Green_position[1] < 58){
	    	convert = ((Green_position[1] - 51) - 1);
	    	Green_position[1] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Green_position[1]; 
		}
	    if (Green_position[1] > 69 ){
		    Green_position[1] -= dice;
		    Green_position2();
	    }
	    if (Green_position[1] == 1 || Green_position[1] == 9 || Green_position[1] == 14 || Green_position[1] == 22 || Green_position[1] == 27 || Green_position[1] == 35 || Green_position[1] == 40 || Green_position[1] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Green_position[1] == 64 || Green_position[1] == 65 || Green_position[1] == 66 || Green_position[1] == 67 || Green_position[1] == 68){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Green_position[1] != 69) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Green_position[1] < 27){
			if ((Green_position[1] + consume) > 25){
				Green_position[1] += consume;
				convert = ((Green_position[1] - 25) - 1);
				Green_position[1] = 64 + convert;
				return Green_position[1];
			}
		}
		else if (Green_position[1] == 27 && consume <=5){
			cout << "\nInvalid to store value in it..\n Enter Token Again = ";
			cin >> Token;
			return Green_position[1];
		}
		Green_position[1] += consume;
		if (Green_position[1] > 51 && Green_position[1] < 58){
	    	convert = ((Green_position[1] - 51) - 1);
	    	Green_position[1] = convert;
			cout << "Going Towards Home !!!!!";
			return Green_position[1]; 
		}
	    if (Green_position[1] > 69 ){
		    Green_position[1] -= consume;
		    dice += consume;
	    }
	    if (Green_position[1] == 1 || Green_position[1] == 9 || Green_position[1] == 14 || Green_position[1] == 22 || Green_position[1] == 27 || Green_position[1] == 35 || Green_position[1] == 40 || Green_position[1] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Green_position[1] == 64 || Green_position[1] == 65 || Green_position[1] == 66 || Green_position[1] == 67 ||Green_position[1] == 68){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
			cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (1,3,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Green_position[1];
}
int Green_position3(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Green_position[2] == 27 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 4){
	    		cout << "\nInput Correct number (1,2,4) = ";
	    		cin >> Token;
			}
		}
	    return Green_position[2];
	}
	if (Green_position[2] == 27 && dice >= 6){
		dice = dice - 6;
	}
	if (Green_position[2] == 69){
		cout << "\nToken 3 of Green was already won !!!";
		return Green_position[2];
	}
	if (Ask == 1 && dice > 0 && Green_position[2] != 69){
		if (Green_position[2] < 27){
			if ((Green_position[2] + dice) > 25){
				Green_position[2] += dice;
				convert = ((Green_position[2] - 25) - 1);
				Green_position[2] = 64 + convert;
				return Green_position[2];
			}
		}
		Green_position[2] += dice;
		if (Green_position[2] > 51 && Green_position[2] < 58){
	    	convert = ((Green_position[2] - 51) - 1);
	    	Green_position[2] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Green_position[2]; 
		}
	    if (Green_position[2] > 69 ){
		    Green_position[2] -= dice;
		    Green_position3();
	    }
	    if (Green_position[2] == 1 || Green_position[2] == 9 || Green_position[2] == 14 || Green_position[2] == 22 || Green_position[2] == 27 || Green_position[2] == 35 || Green_position[2] == 40 || Green_position[2] == 48){
	        cout << "\n AT STOP !!! ";	
	    }
	    if(Green_position[2] == 64 || Green_position[2] == 65 || Green_position[2] == 66 || Green_position[2] == 67 || Green_position[2] == 68){
		    cout << "\n AT HOME ";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Green_position[2] != 69) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Green_position[2] < 27){
			if ((Green_position[2] + consume) > 25){
				Green_position[2] += consume;
				convert = ((Green_position[2] - 25) - 1);
				Green_position[2] = 64 + convert;
				return Green_position[2];
			}
		}
		else if (Green_position[2] == 27 && consume <=5){
			cout << "\nInvalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Green_position[2];
		}
		Green_position[2] += consume;
		if (Green_position[2] > 51 && Green_position[2] < 58){
	    	convert = ((Green_position[2] - 51) - 1);
	    	Green_position[2] = convert;
			cout << "Going Towards Home !!!!!";
			return Green_position[2]; 
		}
	    if (Green_position[2] > 69 ){
		    Green_position[2] -= consume;
		    dice += consume;
	    }
	    if (Green_position[2] == 1 || Green_position[2] == 9 || Green_position[2] == 14 || Green_position[2] == 22 || Green_position[2] == 27 || Green_position[2] == 35 || Green_position[2] == 40 || Green_position[2] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Green_position[2] == 64 || Green_position[2] == 65 || Green_position[2] == 66 || Green_position[2] == 67 ||Green_position[2] == 68){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
			cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while (Token != 1 && Token != 2 && Token != 4){
	    		cout << "\nInput Correct number (1,2,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Green_position[2];
}
int Green_position4(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Green_position[3] == 27 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n3. Third Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 3){
	    		cout << "Input Correct number (1,2,3) = ";
	    		cin >> Token;
			}
		}
	    return Green_position[3];
	}
	if (Green_position[3] == 27 && dice >= 6){
		dice = dice - 6;
	}
	if (Green_position[3] == 69){
		cout << "\nToken 4 of Green was already won !!!";
		return Green_position[3];
	}
	if (Ask == 1 && dice > 0 && Green_position[3] != 69){
		if (Green_position[3] < 27){
			if ((Green_position[3] + dice) > 25){
				Green_position[3] += dice;
				convert = ((Green_position[3] - 25) - 1);
				Green_position[3] = 64 + convert;
				return Green_position[3];
			}
		}
		Green_position[3] += dice;
		if (Green_position[3] > 51 && Green_position[3] < 58){
	    	convert = ((Green_position[3] - 51) - 1);
	    	Green_position[3] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Green_position[3]; 
		}
	    if (Green_position[3] > 69 ){
		    Green_position[3] -= dice;
		    Green_position4();
	    }
	    if (Green_position[3] == 1 || Green_position[3] == 9 || Green_position[3] == 14 || Green_position[3] == 22 || Green_position[3] == 27 || Green_position[3] == 35 || Green_position[3] == 40 || Green_position[3] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Green_position[3] == 64 || Green_position[3] == 65 || Green_position[3] == 66 || Green_position[3] == 67 || Green_position[3] == 68){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Green_position[3] != 69) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Green_position[3] < 27){
			if ((Green_position[3] + consume) > 25){
				Green_position[3] += consume;
				convert = ((Green_position[3] - 25) - 1);
				Green_position[3] = 64 + convert;
				return Green_position[3];
			}
		}
		else if (Green_position[3] == 27 && consume <=5){
			cout << "\nInvalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Green_position[3];
		}
		Green_position[3] += consume;
		if (Green_position[3] > 51 && Green_position[3] < 58){
	    	convert = ((Green_position[3] - 51) - 1);
	    	Green_position[3] = convert;
			cout << "Going Towards Home !!!!!";
			return Green_position[3]; 
		}
	    if (Green_position[3] > 69 ){
		    Green_position[3] -= consume;
		    dice += consume;
	    }
	    if (Green_position[3] == 1 || Green_position[3] == 9 || Green_position[3] == 14 || Green_position[3] == 22 || Green_position[3] == 27 || Green_position[3] == 35 || Green_position[3] == 40 || Green_position[3] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Green_position[3] == 64 || Green_position[3] == 65 || Green_position[3] == 66 || Green_position[3] == 67 ||Green_position[3] == 68){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
			cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n3. Third Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while (Token != 1 && Token != 2 && Token != 3){
	    		cout << "Input Correct number (1,2,3) = ";
	    		cin >> Token;
			}
		}
	}
	return Green_position[3];
}
int Yellow_position1(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Yellow_position[0] == 40 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n2. Second Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 2 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (2,3,4) = ";
	    		cin >> Token;
			}
		}
	    return Yellow_position[0];
	}
	if (Yellow_position[0] == 40 && dice >= 6){
		dice = dice - 6;
	}
	if (Yellow_position[0] == 75){
		cout << "Token 1 of Yellow was already won !!!";
		return Yellow_position[0];
	}
	if (Ask == 1 && dice > 0 && Yellow_position[0] != 75){
		if (Yellow_position[0] < 40){
			if ((Yellow_position[0] + dice) > 38){
				Yellow_position[0] += dice;
				convert = ((Yellow_position[0] - 38) - 1);
				Yellow_position[0] = 70 + convert;
				return Yellow_position[0];
			}
		}
		Yellow_position[0] += dice;
		if (Yellow_position[0] > 51 && Yellow_position[0] < 58){
	    	convert = ((Yellow_position[0] - 51) - 1);
	    	Yellow_position[0] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Yellow_position[0]; 
		}
	    if (Yellow_position[0] > 75 ){
		    Yellow_position[0] -= dice;
		    Yellow_position1();
	    }
	    if (Yellow_position[0] == 1 || Yellow_position[0] == 9 || Yellow_position[0] == 14 || Yellow_position[0] == 22 || Yellow_position[0] == 27 || Yellow_position[0] == 35 || Yellow_position[0] == 40 || Yellow_position[0] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Yellow_position[0] == 70 || Yellow_position[0] == 71 || Yellow_position[0] == 72 || Yellow_position[0] == 73 || Yellow_position[0] == 74){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Yellow_position[0] != 75) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Yellow_position[0] < 40){
			if ((Yellow_position[0] + consume) > 38){
				Yellow_position[0] += consume;
				convert = ((Yellow_position[0] - 38) - 1);
				Yellow_position[0] = 70 + convert;
				return Yellow_position[0];
			}
		}
		else if (Yellow_position[0] == 40 && consume <=5){
			cout << "\nInvalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Yellow_position[0];
		}
		Yellow_position[0] += consume;
		if (Yellow_position[0] > 51 && Yellow_position[0] < 58){
	    	convert = ((Yellow_position[0] - 51) - 1);
	    	Yellow_position[0] = convert;
			cout << "Going Towards Home !!!!!";
			return Yellow_position[0]; 
		}
	    if (Yellow_position[0] > 75 ){
		    Yellow_position[0] -= consume;
		    dice += consume;
	    }
	    if (Yellow_position[0] == 1 || Yellow_position[0] == 9 || Yellow_position[0] == 14 || Yellow_position[0] == 22 || Yellow_position[0] == 27 || Yellow_position[0] == 35 || Yellow_position[0] == 40 || Yellow_position[0] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Yellow_position[0] == 70 || Yellow_position[0] == 71 || Yellow_position[0] == 72 || Yellow_position[0] == 73 ||Yellow_position[0] == 74){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
			cout << "\nEnter the Token You want to consume your remaining score : \n2. Second Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 2 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (2,3,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Yellow_position[0];
}
int Yellow_position2(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Yellow_position[1] == 40 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (1,3,4) = ";
	    		cin >> Token;
			}
		}
	    return Yellow_position[1];
	}
	if (Yellow_position[1] == 40 && dice >= 6){
		dice = dice - 6;
	}
	if (Yellow_position[1] == 75){
		cout << "\nToken 2 of Yellow was already won !!!\n";
		return Yellow_position[1];
	}
	if (Ask == 1 && dice > 0 && Yellow_position[1] != 75){
		if (Yellow_position[1] < 40){
			if ((Yellow_position[1] + dice) > 38){
				Yellow_position[1] += dice;
				convert = ((Yellow_position[1] - 38) - 1);
				Yellow_position[1] = 70 + convert;
				return Yellow_position[1];
			}
		}
		Yellow_position[1] += dice;
		if (Yellow_position[1] > 51 && Yellow_position[1] < 58){
	    	convert = ((Yellow_position[1] - 51) - 1);
	    	Yellow_position[1] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Yellow_position[1]; 
		}
	    if (Yellow_position[1] > 75 ){
		    Yellow_position[1] -= dice;
		    Yellow_position2();
	    }
	    if (Yellow_position[1] == 1 || Yellow_position[1] == 9 || Yellow_position[1] == 14 || Yellow_position[1] == 22 || Yellow_position[1] == 27 || Yellow_position[1] == 35 || Yellow_position[1] == 40 || Yellow_position[1] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Yellow_position[1] == 70 || Yellow_position[1] == 71 || Yellow_position[1] == 72 || Yellow_position[1] == 73 || Yellow_position[1] == 74){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Yellow_position[1] != 75) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Yellow_position[1] < 40){
			if ((Yellow_position[1] + consume) > 38){
				Yellow_position[1] += consume;
				convert = ((Yellow_position[1] - 38) - 1);
				Yellow_position[1] = 70 + convert;
				return Yellow_position[1];
			}
		}
		else if (Yellow_position[1] == 40 && consume <=5){
			cout << "\nInvalid to store value in it.. Enter Token Again = ";
			cin >> Token;
			return Yellow_position[1];
		}
		Yellow_position[1] += consume;
		if (Yellow_position[1] > 51 && Yellow_position[1] < 58){
	    	convert = ((Yellow_position[1] - 51) - 1);
	    	Yellow_position[1] = convert;
			cout << "Going Towards Home !!!!!";
			return Yellow_position[1]; 
		}
	    if (Yellow_position[1] > 75 ){
		    Yellow_position[1] -= consume;
		    dice += consume;
	    }
	    if (Yellow_position[1] == 1 || Yellow_position[1] == 9 || Yellow_position[1] == 14 || Yellow_position[1] == 22 || Yellow_position[1] == 27 || Yellow_position[1] == 35 || Yellow_position[1] == 40 || Yellow_position[1] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Yellow_position[1] == 70 || Yellow_position[1] == 71 || Yellow_position[1] == 72 || Yellow_position[1] == 73 ||Yellow_position[1] == 74){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
			cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n3. Third Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 3 && Token != 4){
	    		cout << "\nInput Correct number (1,3,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Yellow_position[1];
}
int Yellow_position3(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Yellow_position[2] == 40 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 4){
	    		cout << "\nInput Correct number (1,2,4) = ";
	    		cin >> Token;
			}
		}
	    return Yellow_position[2];
	}
	if (Yellow_position[2] == 40 && dice >= 6){
		dice = dice - 6;
	}
	if (Yellow_position[2] == 75){
		cout << "\nToken 3 of Yellow was already won !!!\n";
		return Yellow_position[2];
	}
	if (Ask == 1 && dice > 0 && Yellow_position[2] != 75){
		if (Yellow_position[2] < 40){
			if ((Yellow_position[2] + dice) > 38){
				Yellow_position[2] += dice;
				convert = ((Yellow_position[2] - 38) - 1);
				Yellow_position[2] = 70 + convert;
				return Yellow_position[2];
			}
		}
		Yellow_position[2] += dice;
		if (Yellow_position[2] > 51 && Yellow_position[2] < 58){
	    	convert = ((Yellow_position[2] - 51) - 1);
	    	Yellow_position[2] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Yellow_position[2]; 
		}
	    if (Yellow_position[2] > 75 ){
		    Yellow_position[2] -= dice;
		    Yellow_position3();
	    }
	    if (Yellow_position[2] == 1 || Yellow_position[2] == 9 || Yellow_position[2] == 14 || Yellow_position[2] == 22 || Yellow_position[2] == 27 || Yellow_position[2] == 35 || Yellow_position[2] == 40 || Yellow_position[2] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Yellow_position[2] == 70 || Yellow_position[2] == 71 || Yellow_position[2] == 72 || Yellow_position[2] == 73 || Yellow_position[2] == 74){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Yellow_position[2] != 75) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Yellow_position[2] < 40){
			if ((Yellow_position[2] + consume) > 38){
				Yellow_position[2] += consume;
				convert = ((Yellow_position[2] - 38) - 1);
				Yellow_position[2] = 70 + convert;
				return Yellow_position[2];
			}
		}
		else if (Yellow_position[2] == 40 && consume <=5){
			cout << "\nInvalid to store value in it..\n Enter Token Again = ";
			cin >> Token;
			return Yellow_position[2];
		}
		Yellow_position[2] += consume;
		if (Yellow_position[2] > 51 && Yellow_position[2] < 58){
	    	convert = ((Yellow_position[2] - 51) - 1);
	    	Yellow_position[2] = convert;
			cout << "Going Towards Home !!!!!";
			return Yellow_position[2]; 
		}
	    if (Yellow_position[2] > 75 ){
		    Yellow_position[2] -= consume;
		    dice += consume;
	    }
	    if (Yellow_position[2] == 1 || Yellow_position[2] == 9 || Yellow_position[2] == 14 || Yellow_position[2] == 22 || Yellow_position[2] == 27 || Yellow_position[2] == 35 || Yellow_position[2] == 40 || Yellow_position[2] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Yellow_position[2] == 70 || Yellow_position[2] == 71 || Yellow_position[2] == 72 || Yellow_position[2] == 73 ||Yellow_position[2] == 74){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
			cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n4. Fourth Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 4){
	    		cout << "Input Correct number (1,2,4) = ";
	    		cin >> Token;
			}
		}
	}
	return Yellow_position[2];
}
int Yellow_position4(){
	cout << "\nWant to Spend all score on this token ????" << endl;
	cout << "1. Yes! \n2. No ! \n";
	cin >> Ask;
	while (Ask != 1 && Ask != 2 ){
		cout << "\nPlease Choose Correct Option !! \n";
		cin >> Ask;
	}
	if (Yellow_position[3] == 40 && dice <= 5){
		if ( dice > 0 ){
	    	cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n3. Third Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 3){
	    		cout << "\nInput Correct number (1,2,3) = ";
	    		cin >> Token;
			}
		}
	    return Yellow_position[3];
	}
	if (Yellow_position[3] == 40 && dice >= 6){
		dice = dice - 6;
	}
	if (Yellow_position[3] == 75){
		cout << "Token 4 of Yellow was already won !!!";
		return Yellow_position[3];
	}
	if (Ask == 1 && dice > 0 && Yellow_position[3] != 75){
		if (Yellow_position[3] < 40){
			if ((Yellow_position[3] + dice) > 38){
				Yellow_position[3] += dice;
				convert = ((Yellow_position[3] - 38) - 1);
				Yellow_position[3] = 70 + convert;
				return Yellow_position[3];
			}
		}
		Yellow_position[3] += dice;
		if (Yellow_position[3] > 51 && Yellow_position[3] < 58){
	    	convert = ((Yellow_position[3] - 51) - 1 );
	    	Yellow_position[3] = convert;
			cout << "Going Towards Home !!!!!";
			dice = 0;
			return Yellow_position[3]; 
		}
	    if (Yellow_position[3] > 75 ){
		    Yellow_position[3] -= dice;
		    Yellow_position4();
	    }
	    if (Yellow_position[3] == 1 || Yellow_position[3] == 9 || Yellow_position[3] == 14 || Yellow_position[3] == 22 || Yellow_position[3] == 27 || Yellow_position[3] == 35 || Yellow_position[3] == 40 || Yellow_position[3] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Yellow_position[3] == 70 || Yellow_position[3] == 71 || Yellow_position[3] == 72 || Yellow_position[3] == 73 || Yellow_position[3] == 74){
		    cout << "\n AT HOME \n";
	    }
	    dice = 0;
	}
	if(Ask == 2 && dice != 0 && Yellow_position[3] != 75) {
		cout << "\nEnter the Amount of score you want to use = ";
		cin >> consume;
		while (consume >= dice){
			cout << "\nEnter the correct amount must be less than dice number = ";
			cin >> consume;
		}
		dice = dice - consume;
		if (Yellow_position[3] < 40){
			if ((Yellow_position[3] + consume) > 38){
				Yellow_position[3] += consume;
				convert = ((Yellow_position[3] - 38) - 1);
				Yellow_position[3] = 70 + convert;
				return Yellow_position[3];
			}
		}
		else if (Yellow_position[3] == 40 && consume <=5){
			cout << "\nInvalid to store value in it..\n Enter Token Again = ";
			cin >> Token;
			return Yellow_position[3];
		}
		Yellow_position[3] += consume;
		if (Yellow_position[3] > 51 && Yellow_position[3] < 58){
	    	convert = ((Yellow_position[3] - 51) - 1);
	    	Yellow_position[3] = convert;
			cout << "Going Towards Home !!!!!";
			return Yellow_position[3]; 
		}
	    if (Yellow_position[3] > 75 ){
		    Yellow_position[3] -= consume;
		    dice += consume;
	    }
	    if (Yellow_position[3] == 1 || Yellow_position[3] == 9 || Yellow_position[3] == 14 || Yellow_position[3] == 22 || Yellow_position[3] == 27 || Yellow_position[3] == 35 || Yellow_position[3] == 40 || Yellow_position[3] == 48){
	        cout << "\n AT STOP !!! \n";	
	    }
	    if(Yellow_position[3] == 70 || Yellow_position[3] == 71 || Yellow_position[3] == 72 || Yellow_position[3] == 73 ||Yellow_position[3] == 74){
		    cout << "\n AT HOME \n";
	    }
	    if ( dice > 0 ){
			cout << "\nEnter the Token You want to consume your remaining score : \n1. First Token\n2. Second Token\n3. Third Token.\n";
	    	cout << "\nEnter Number = ";
	    	cin >> Token;
	    	while ( Token != 1 && Token != 2 && Token != 3){
	    		cout << "\nInput Correct number (1,2,3) = ";
	    		cin >> Token;
			}
		}
	}
	return Yellow_position[3];
}
