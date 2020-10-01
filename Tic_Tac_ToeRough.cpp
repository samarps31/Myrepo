#include<iostream>
#include<string>
using namespace std;

int main()
{
	char a[3][3], p, s[10], t='-', p1[20]={'P','l','a','y','e','r','1'}, p2[20]={'P','l','a','y','e','r','2'} ;
	int i, j, m, n, f;
	
	cout<<endl;
	cout<<"\t  Welcome to the Game"<<endl;
	cout<<"\t    Tick Tack Toe"<<endl<<endl<<"  Game has the following dimensions :"<<endl;
	
	for(i=0; i<3; i++)
	{
		cout<<"\t";
		for(j=0; j<3; j++)
		{
		    a[i][j]='-';
	        cout<<"    "<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"  If you want to enter player's name, enter 1 otherwise 2 : ";
	cin>>f;
	if(f==1)
	{
		cout<<endl<<"  Enter name of Player 1 : ";
		scanf("%s",p1);
		cout<<"  Enter name of Player 2 : ";
		scanf("%s",p2);
	}
	cout<<endl<<"  "<<p1<<" is denoted by 'O'"<<endl;
	cout<<"  "<<p2<<" is denoted by 'X'";
	
	cout<<endl<<endl;
	for(i=1; i<=9; i++)
	{
	s:  if(i%2==0)
		{
		    p='X';
		    cout<<"  "<<p2<<endl;
	    }
		else
		{
		    p='O';
		    cout<<"  "<<p1<<endl;
	    }
		cout<<"  Enter row :";
		cin>>m;
		cout<<"  Enter column :";
		cin>>n;
		
		if(a[m-1][n-1]=='O' || a[m-1][n-1]=='X')
		{
			cout<<endl<<"  Wrong input!"<<endl<<"  Try again :)"<<endl<<endl;
			goto s;
		}
		
		a[m-1][n-1]=p;
		
		for(int k=0; k<3; k++)
	{
		cout<<"\t";
		for(j=0; j<3; j++)
		{
		    cout<<"    "<<a[k][j]<<" ";
		}
		cout<<endl;
	}
		cout<<endl;
	}
	
		    for(i=0; i<3; i++)
	{
		if(a[i][0]=a[i][1]=a[i][2])
		{
			t=a[i][0];
			break;
		}
		
		if(a[0][i]=a[1][i]=a[2][i])
		{
			t=a[0][i];
			break;
		}
	}
	if(t='-')
	{
		if(a[0][0]=a[1][1]=a[2][2])
		{
			t=a[0][0];
			goto y;
		}
		if(a[1][1]=a[0][2]=a[2][0])
		{
			t=a[1][1];
			goto y;
		}
	}	
	
    y: if(t=='O' || t=='X')
	{	
	    cout<<endl<<"  Winner is ";
	    if(t='O')
	    cout<<p1<<" :)";
	    else
	    cout<<p2<<" :)";
    }
    else
    cout<<endl<<"  Draw Match :|"<<endl<<endl<<"  Okay Bye!";
}











