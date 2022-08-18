#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int points_c=0,points_u=0;
    for(int i=0;i<3;i++){
        string opt[]={"stone","paper","scissor"};
        srand(time(NULL));
        int s=rand() % 3;
        string uin;
        cout<<"---Stone paper scissor Game---\n"<<"Enter your choice : ";
        cin>>uin;
        if(uin==opt[s]){
            cout<<"Computer's Choice : "<<opt[s]<<"\n";
            cout<<"No points\n\n";
        }
        else if(uin=="stone" && opt[s]=="paper"){
            points_c++;
            cout<<"Computer's choice : "<<opt[s]<<"\n\n";
        }
        else if(uin=="stone" && opt[s]=="scissor"){
            points_u++;
            cout<<"Computer's choice : "<<opt[s]<<"\n\n";
        }
        else if(uin=="paper" && opt[s]=="stone"){
            points_u++;
            cout<<"Computer's choice : "<<opt[s]<<"\n\n";
        }
        else if(uin=="paper" && opt[s]=="scissor"){
            points_c++;
            cout<<"Computer's choice : "<<opt[s]<<"\n\n";
        }
        else if(uin=="scissor" && opt[s]=="stone"){
            points_c++;
            cout<<"Computer's choice : "<<opt[s]<<"\n\n";
        }
        else if(uin=="scissor" && opt[s]=="paper"){
            points_u++;
            cout<<"Computer's choice : "<<opt[s]<<"\n\n";
        }
    }
    if(points_u>points_c){
        cout<<"You Won\n"<<"Your points == "<<points_u;
    }
    else if(points_u==points_c){
        cout<<"Tie";
    }
    else{
        cout<<"You loose\n"<<"Computer's points == "<<points_c;
    }
}