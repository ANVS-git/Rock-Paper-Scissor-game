/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


void series(int n){
     int plr1_count=0,plr2_count=0; 
    for(int i=0;i<n;i++){
        cout<<"Match number "<<i+1<<endl; 
        char player1,player2;
        label1:
        cout<<"Player1's turn(r/p/s): "; 
        cin >>player1;
        if(!(player1=='r' || player1=='p' || player1=='s')){
            goto label1; 
        }
        label2:
        cout<<"Player2's turn(r/p/s): "; 
        cin>>player2; 
        if(!(player2=='r' || player2=='p' || player2=='s')){
            goto label2; 
        }
        if(player1=='r' && player2=='p'){
            plr2_count++; 
        }
        else if(player1=='r' && player2=='s'){
            plr1_count++; 
        }
        else if(player1=='p' && player2=='r'){
            plr1_count++; 
        }
        else if(player1=='p' && player2=='s'){
            plr2_count++; 
        }
        else if(player1=='s' && player2=='r'){
            plr2_count++; 
        }
        else if(player1=='s' && player2=='p'){
            plr1_count++; 
        }
        cout<<endl;
    }
    if(plr1_count>plr2_count){
        cout<<"Player 1 won the series."<<endl;
        cout<<"Score: "<<plr1_count<<"-"<<plr2_count<<endl; 
    }
    else if(plr2_count>plr1_count){
        cout<<"Player 2 won the series."<<endl; 
        cout<<"Score: "<<plr1_count<<"-"<<plr2_count<<endl; 
    }
    else {
      cout<<"Series Tie."<<endl;
      cout<<"Score: "<<plr1_count<<"-"<<plr2_count<<endl; 
    }
}

void type2(){
    int q;
    int i=0; 
    int plr1_count=0,plr2_count=0; 
    do{
        i++; 
        cout<<"Match number "<<i<<endl; 
        char player1,player2;
        label1:
        cout<<"Player1's turn(r/p/s): "; 
        cin >>player1;
        if(!(player1=='r' || player1=='p' || player1=='s')){
            goto label1; 
        }
        label2:
        cout<<"Player2's turn(r/p/s): "; 
        cin>>player2; 
        if(!(player2=='r' || player2=='p' || player2=='s')){
            goto label2; 
        }
        if(player1=='r' && player2=='p'){
            plr2_count++; 
        }
        else if(player1=='r' && player2=='s'){
            plr1_count++; 
        }
        else if(player1=='p' && player2=='r'){
            plr1_count++; 
        }
        else if(player1=='p' && player2=='s'){
            plr2_count++; 
        }
        else if(player1=='s' && player2=='r'){
            plr2_count++; 
        }
        else if(player1=='s' && player2=='p'){
            plr1_count++; 
        }
             cout<<"Do you want to play again.[Yes/No]:If yes enter 1 else enter anything: "; 
             cin>>q;
             cout<<endl; 
    }while(q==1); 
       if(plr1_count>plr2_count){
           cout<<"Player 1 won the series."<<endl;
           cout<<"Score: "<<plr1_count<<"-"<<plr2_count<<endl; 
        }
        else if(plr2_count>plr1_count){
           cout<<"Player 2 won the series."<<endl; 
           cout<<"Score: "<<plr1_count<<"-"<<plr2_count<<endl; 
        }
        else {
           cout<<"Series Tie."<<endl;
           cout<<"Score: "<<plr1_count<<"-"<<plr2_count<<endl; 
        }
}

int main()
{
    cout<<"\t\t******* GAME RPS *******"<<endl<<endl;
    cout<<"\t\t    **** WELCOME ****"<<endl<<endl; 
    cout<<"\tNote: "<<endl; 
    cout<<"\tPlease enter 'r' for rock,'p' for paper,'s' for scissor."<<endl<<endl;
    int x;
    int plr1_count=0,plr2_count=0;
    option:
    cout<<"\t1.Series"<<endl; 
    cout<<"\t2.type2"<<endl<<endl; 
    cout<<"Choose the type of competetion: "; 
    cin >>x; 
    if (x==1){
        int n;
        cout<<"Enter the number of matches in a series: "; 
        cin >>n; 
        series(n); 
    }
    else if(x==2){
        plr1_count=0; 
        plr2_count=0; 
        type2(); 
       
    }
    else goto option; 
    return 0;
}
