#include<bits/stdc++.h>

using namespace std;

int main()
{
     start:
	 
	 system("cls");
    
     int g;
    
	 cout<<"\n\n\n\n\n\n\n                             TIC TAC TOE\n\n\n";
	 
	 for(int i=1;i<12;i++)
	{
		for(int z=0;z<25;z++)
		cout<<" ";
		
		if(i%4==0)
		{
			for(int i=0;i<17;i++)
	        cout<<"*";
	        cout<<"\n";
		}
		else
		{
			for(int j=0;j<2;j++)
		   {  
			  cout<<"     *";
		   }
		   cout<<"\n";
		}
		
	}
	 
	 for(int i=0;i<3;i++)
     cout<<"\n";
	
     for(int z=0;z<29;z++)
	 cout<<" ";
	
	 cout<<"1. Play vs human"<<"\n\n                             2. How To Play\n\n"<<"                             3. Credits\n\n"<<"                             4. Quit\n\n"<<"                             5. Play vs computer\n\n"<<"Enter Your Choice(1-5): ";
	 cin>>g;
	 
	if(g==1)
	{
	system("cls");
	
	char name[2][50];
	
	cout<<"Enter Player 1 name:";
	cin>>name[0];
	
	cout<<"\nEnter Player 2 name:";
	cin>>name[1];
	
	system("cls");
	
	int a[11][3];
	int w=0;
	
	for(int i=2;i<11;i=i+4)
	{
		for(int j=0;j<3;j++)
		a[i][j]=0;
	}
	
	  for(int i=1;i<12;i++)
	       {   
		      for(int z=0;z<29;z++)
		      cout<<" ";
			  
			  if(i%4==0)
		      {
			     for(int i=0;i<17;i++)
	             cout<<"*";
	             cout<<"\n";
		      }
	      	  
			  else if(i%2==1)
		      {
			     for(int j=0;j<2;j++)
		         {  
			         cout<<"     *";
		         }
		         
				 cout<<"\n";
		      }
		     
			  else if(i==2||i==6||i==10)
		      {
		      	  for(int j=0;j<3;j++)
		      	  if(j<2)
		      	  cout<<"  "<<a[i][j]<<"  *";
		      	  else
		      	  cout<<"  "<<a[i][j];
		      	  cout<<"\n";
			  }
		  }
	
	
	
	
    for(int l=0;l<9;l++)
    {
    	if(l%2==0)
    	{
    		tic:
    		int p;
			cout<<"\n\n\n\n          "<<name[0]<<"'s turn"<<" Enter in which block you want to enter(1-9)";
    		cin>>p;
    		
    		if(p>=10||p<=0)
    		{
    			cout<<"\n                             Invalid Choice";
    			goto tic;
			}
    	
    		for(int i=1;i<4;i++)
    		{
    			if(p==i&&a[2][i-1]==0)
    			{
				a[2][i-1]=1;
				break;
			    }
    			
    			else if(p==i+3&&a[6][i-1]==0)
    			{
				a[6][i-1]=1;
    			break;
    		    } 
    			else if(p==i+6&&a[10][i-1]==0)
    			{
				a[10][i-1]=1;
    			break;
    		    }
    			
    			else if((p==i||p==i+3||p==i+6)&&(a[2][i-1]!=0||a[6][i-1]!=0||a[10][i-1]!=0))
    			{
    				cout<<"\n                             Don't cheat";
    				goto tic;				
				}
			}
			
			system("cls");
			
    		
	       for(int i=1;i<12;i++)
	       {   
		      for(int z=0;z<29;z++)
		      cout<<" ";
			  
			  if(i%4==0)
		      {
			     for(int i=0;i<17;i++)
	             cout<<"*";
	             cout<<"\n";
		      }
	      	  
			  else if(i%2==1)
		      {
			     for(int j=0;j<2;j++)
		         {  
			         cout<<"     *";
		         }
		         
				 cout<<"\n";
		      }
		     
			  else if(i==2||i==6||i==10)
		      {
		      	  for(int j=0;j<3;j++)
		      	  if(j<2)
		      	  cout<<"  "<<a[i][j]<<"  *";
		      	  else
		      	  cout<<"  "<<a[i][j];
		      	  cout<<"\n";
			  }
		  }
		    
		}
		    
		    if(l%2==1)
    	{
    		tac:
			int p;
			cout<<"\n\n\n\n          "<<name[1]<<"'s turn"<<" Enter in which block you want to enter(1-9)";
    		cin>>p;
    		
    		if(p>=10||p<=0)
    		{
    			cout<<"\n                             Invalid Choice";
    			goto tac;
			}
    		
    		for(int i=1;i<4;i++)
    		{
    			if(p==i&&a[2][i-1]==0)
    			{
				a[2][i-1]=2;
				break;
			    }
    			
    			else if(p==i+3&&a[6][i-1]==0)
    			{
				a[6][i-1]=2;
    			break;
    		    } 
    			else if(p==i+6&&a[10][i-1]==0)
    			{
				a[10][i-1]=2;
    			break;
    		    }
    			
    			else if((p==i||p==i+3||p==i+6)&&(a[2][i-1]!=0||a[6][i-1]!=0||a[10][i-1]!=0))
    			{
    				cout<<"\n                             Don't cheat";
    				goto tac;				
				}
			}
			
			system("cls");	
    	   	
	       for(int i=1;i<12;i++)
	       {   
		      for(int z=0;z<29;z++)
		      cout<<" ";
			  
			  if(i%4==0)
		      {
			     for(int i=0;i<17;i++)
	             cout<<"*";
	             cout<<"\n";
		      }
	      	  
			  else if(i%2==1)
		      {
			     for(int j=0;j<2;j++)  
			     cout<<"     *";
		         
				 cout<<"\n";
		      }
		      

		      else if(i==2||i==6||i==10)
		      {
		      	  for(int j=0;j<3;j++)
		      	  if(j<2)
		      	  cout<<"  "<<a[i][j]<<"  *";
		      	  else
		      	  cout<<"  "<<a[i][j];
		      	  cout<<"\n";
			  }
		  }
		}
		
		if(a[2][0]==1&&a[2][1]==1&&a[2][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][0]==2&&a[2][1]==2&&a[2][2]==2)
		{
		cout<<name[1]<<" wins";
			w=1;
			break;
		}
		
		else if(a[6][0]==1&&a[6][1]==1&&a[6][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[6][0]==2&&a[6][1]==2&&a[6][2]==2)
		{
			cout<<name[1]<<" wins";
			w=1;
			break;
		}
		
		else if(a[10][0]==1&&a[10][1]==1&&a[10][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[10][0]==2&&a[10][1]==2&&a[10][2]==2)
		{
			cout<<name[1]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][0]==1&&a[6][1]==1&&a[10][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][0]==2&&a[6][1]==2&&a[10][2]==2)
		{
			cout<<name[1]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][2]==2&&a[6][1]==2&&a[10][0]==2)
		{
			cout<<name[1]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][2]==1&&a[6][1]==1&&a[10][0]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][0]==2&&a[6][0]==2&&a[10][0]==2)
		{
			cout<<name[1]<<" wins";
			w=1;
			break;
		}
		
		else if(a[6][0]==1&&a[2][0]==1&&a[10][0]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][1]==2&&a[6][1]==2&&a[10][1]==2)
		{
			cout<<name[1]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][1]==1&&a[6][1]==1&&a[10][1]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][2]==1&&a[6][2]==1&&a[10][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][2]==2&&a[6][2]==2&&a[10][2]==2)
		{
			cout<<name[1]<<" wins";
			w=1;
			break;
		}
		
		
		
		
	}
	
	if(w==0)
    cout<<"Its a draw"; 
	 	
	cout<<"\n";
	system("pause");
	goto start;
   }
   
    else if(g==5)
	{
	system("cls");
	
	char name[2][50];
	
	cout<<"Enter Player 1 name:";
	cin>>name[0];
	
	system("cls");
	
	int a[11][3];
	int w=0;
	
	for(int i=2;i<11;i=i+4)
	{
		for(int j=0;j<3;j++)
		a[i][j]=0;
	}
	
	  for(int i=1;i<12;i++)
	       {   
		      for(int z=0;z<29;z++)
		      cout<<" ";
			  
			  if(i%4==0)
		      {
			     for(int i=0;i<17;i++)
	             cout<<"*";
	             cout<<"\n";
		      }
	      	  
			  else if(i%2==1)
		      {
			     for(int j=0;j<2;j++)
		         {  
			         cout<<"     *";
		         }
		         
				 cout<<"\n";
		      }
		     
			  else if(i==2||i==6||i==10)
		      	  {
				  for(int j=0;j<3;j++)
		      	  if(j<2)
		      	  cout<<"  "<<a[i][j]<<"  *";
		      	  else
		      	  cout<<"  "<<a[i][j];
		      	  cout<<"\n";
		}
		  }
	
	
	
	
    for(int l=0;l<9;l++)
    {
    	if(l%2==0)
    	{
    		toe:
    		int p;
			cout<<"\n\n\n\n          "<<name[0]<<"'s turn"<<" Enter in which block you want to enter(1-9)";
    		cin>>p;
    		
    		if(p>=10||p<=0)
    		{
    			cout<<"\n                             Invalid Choice";
    			goto toe;
			}
    	
    		for(int i=1;i<4;i++)
    		{
    			if(p==i&&a[2][i-1]==0)
    			{
				a[2][i-1]=1;
				break;
			    }
    			
    			else if(p==i+3&&a[6][i-1]==0)
    			{
				a[6][i-1]=1;
    			break;
    		    } 
    			else if(p==i+6&&a[10][i-1]==0)
    			{
				a[10][i-1]=1;
    			break;
    		    }
    			
    			else if((p==i||p==i+3||p==i+6)&&(a[2][i-1]!=0||a[6][i-1]!=0||a[10][i-1]!=0))
    			{
    				cout<<"\n                             Don't cheat";
    				goto toe;				
				}
			}
			
			system("cls");
			
    		
	       for(int i=1;i<12;i++)
	       {   
		      for(int z=0;z<29;z++)
		      cout<<" ";
			  
			  if(i%4==0)
		      {
			     for(int i=0;i<17;i++)
	             cout<<"*";
	             cout<<"\n";
		      }
	      	  
			  else if(i%2==1)
		      {
			     for(int j=0;j<2;j++)
		         {  
			         cout<<"     *";
		         }
		         
				 cout<<"\n";
		      }
		     
			  else if(i==2||i==6||i==10)
		      {
		      	  for(int j=0;j<3;j++)
				  if(j<2)
		      	  cout<<"  "<<a[i][j]<<"  *";
		      	  else
		      	  cout<<"  "<<a[i][j];
		      	  cout<<"\n";
		         
			  }
		  }
		    
		}
		    
		if(l%2==1)
    	{
		    int h=0;
			
			if(l==1)
			{
				comb:
				int p=rand()%9+1;
				
				for(int i=1;i<4;i++)
    		{
    			if(p==i&&a[2][i-1]==0)
    			{
				a[2][i-1]=2;
				break;
			    }
    			
    			else if(p==i+3&&a[6][i-1]==0)
    			{
				a[6][i-1]=2;
    			break;
    		    }
				 
    			else if(p==i+6&&a[10][i-1]==0)
    			{
				a[10][i-1]=2;
    			break;
    		    }
    			
    			else if(i==3)
    			{
    				cout<<"\n                             Don't cheat";
    				goto comb;				
				}
			}
			}
			else
			{
				
				for(int i=0;i<3;i++)
				{
					if(a[2][i]==a[6][i]&&a[6][i]==2&&a[10][i]==0)
					{
					   a[10][i]=2;
					   h=1;
					   break;
					}
					else if(a[6][i]==a[10][i]&&a[10][i]==2&&a[2][i]==0)
					{
					   a[2][i]=2;
					   h=1;
					   break;
				    }
					else if(a[2][i]==a[10][i]&&a[10][i]==2&&a[6][i]==0)
					{
					a[6][i]=2;
					h=1;
				    break;
				   }
				}
				
				if(h==0)
				{
				for(int i=2;i<=10;i+=4)
				{
					if(a[i][0]==a[i][1]&&a[i][1]==2&&a[i][2]==0)
					{
					a[i][2]=2;
					h=1;
					break;
				    }
					else if(a[i][1]==a[i][2]&&a[i][2]==2&&a[i][0]==0)
					{
					a[i][0]=2;
					h=1;
					break;
				    }
					else if(a[i][0]==a[i][2]&&a[i][2]==2&&a[i][1]==0)
					{
					a[i][1]=2;
					h=1;
					break;
				    }
				}
			    }
			
			if(h==0)
			{
				
					if(a[2][0]==a[6][1]&&a[6][1]==2&&a[10][2]==0)
					{
					a[10][2]=2;
					h=1;
				    }
					
					else if(a[2][0]==a[10][2]&&a[10][2]==2&&a[6][1]==0)
					{
					a[6][1]=2;
					h=1;
				    }
					else if(a[10][2]==a[6][1]&&a[6][1]==2&&a[2][0]==0)
					{
					a[2][0]=2;
					h=1;
				    }
			}
			if(h==0)
			{
				if(a[2][2]==a[6][1]&&a[6][1]==2&&a[10][0]==0)
				{
				a[10][0]=2;
				h=1;
			    }
				
				else if(a[2][2]==a[10][0]&&a[10][0]==2&&a[6][1]==0)
				{
				a[6][1]=2;
				h=1;
			    }
				else if(a[10][0]==a[6][1]&&a[6][1]==2&&a[2][2]==0)
				{
				a[2][2]=2;
				h=1;
			    }
			}
			
			if(h==0)
			{
				for(int i=0;i<3;i++)
				{
					if(a[2][i]==a[6][i]&&a[6][i]==1&&a[10][i]==0)
					{
						a[10][i]=2;
						h=1;
						break;
					}
					
					else if(a[2][i]==a[10][i]&&a[10][i]==1&&a[6][i]==0)
					{
						a[6][i]=2;
						h=1;
						break;
					}
					
					else if(a[10][i]==a[6][i]&&a[6][i]==1&&a[2][i]==0)
					{
						a[2][i]=2;
						h=1;
						break;
					}
				}
				
			}
	            
				if(h==0)
				{
				for(int i=2;i<=10;i+=4)
				{
					if(a[i][0]==a[i][1]&&a[i][1]==1&&a[i][2]==0)
					{
					a[i][2]=2;
					h=1;
					break;
				    }
					else if(a[i][1]==a[i][2]&&a[i][2]==1&&a[i][0]==0)
					{
					a[i][0]=2;
					h=1;
					break;
				    }
					else if(a[i][0]==a[i][2]&&a[i][2]==1&&a[i][1]==0)
					{
					a[i][1]=2;
					h=1;
					break;
				    }
				}
			    }
			
			if(h==0)
			{
				
					if(a[2][0]==a[6][1]&&a[6][1]==1&&a[10][2]==0)
					{
					a[10][2]=2;
					h=1;
				    }
					
					else if(a[2][0]==a[10][2]&&a[10][2]==1&&a[6][1]==0)
					{
					a[6][1]=2;
					h=1;
				    }
					else if(a[10][2]==a[6][1]&&a[6][1]==1&&a[2][0]==0)
					{
					a[2][0]=2;
					h=1;
				    }
			}
			if(h==0)
			{
				if(a[2][2]==a[6][1]&&a[6][1]==1&&a[10][0]==0)
				{
				a[10][0]=2;
				h=1;
			    }
				
				else if(a[2][2]==a[10][0]&&a[10][0]==1&&a[6][1]==0)
				{
				a[6][1]=2;
				h=1;
			    }
				else if(a[10][0]==a[6][1]&&a[6][1]==1&&a[2][2]==0)
				{
				a[2][2]=2;
				h=1;
			    }
			}
			
			if(h==0)
			{
				if((a[2][1]==1||a[2][2]==1)&&(a[10][0]==1||a[6][0]==1)&&(a[2][1]==0||a[2][2]==0))
				{
					if(a[2][1]==0)
					a[2][1]=2;
					else if(a[2][2]==0)
					a[2][2]=2;
					
					h=1;
				}	
				
				else if((a[10][1]==1||a[10][0]==1)&&(a[2][2]==1||a[6][2]==1)&&(a[10][1]==0||a[10][0]==0))
				{
					if(a[10][1]==0)
					a[10][1]=2;
					else if(a[10][0]==0)
					a[10][0]=2;
					h=1;
				}
				
				else if((a[2][1]==1||a[2][0]==1)&&(a[10][2]==1||a[6][2]==1)&&(a[2][1]==0||a[2][0]==0))
				{
					if(a[2][1]==0)
					a[2][1]=2;
					else if(a[2][0]==0)
					a[2][0]=2;
	
					h=1;
				}
				
				
				else if((a[10][1]==1||a[10][2]==1)&&(a[2][0]==1||a[6][0]==1)&&(a[10][1]==0||a[10][2]==0))
				{
					
					if(a[10][1]==0)
					a[10][1]=2;
					else if(a[10][2]==0)
					a[10][2]=2;
					
					h=1;
				}
				
				else if((a[2][1]==2||a[2][2]==2)&&(a[10][0]==2||a[6][0]==2)&&(a[2][1]==0||a[2][2]==0))
				{
					if(a[2][1]==0)
					a[2][1]=2;
					else if(a[2][2]==0)
					a[2][2]=2;
					
					h=1;
				}	
				
				else if((a[10][1]==2||a[10][0]==2)&&(a[2][2]==2||a[6][2]==2)&&(a[10][1]==0||a[10][0]==0))
				{
					if(a[10][1]==0)
					a[10][1]=2;
					else if(a[10][0]==0)
					a[10][0]=2;
					h=1;
				}
				
				else if((a[2][1]==2||a[2][0]==2)&&(a[10][2]==2||a[6][2]==2)&&(a[2][1]==0||a[2][0]==0))
				{
					if(a[2][1]==0)
					a[2][1]=2;
					else if(a[2][0]==0)
					a[2][0]=2;
					
					h=1;
				}
				
				
				else if((a[10][1]==2||a[10][2]==2)&&(a[2][0]==2||a[6][0]==2)&&(a[10][1]==0||a[10][2]==0))
				{
					
					if(a[10][1]==0)
					a[10][1]=2;
					else if(a[10][2]==0)
					a[10][2]=2;
					
					h=1;
				}
			     else 
			     {
			     	for(int i=2;i<=10;i+=4)
			     	{
			     		for(int j=0;j<3;j++)
			     		{
			     			if(a[i][j]==0)
			     			{
							 a[i][j]=2;
							 h=1;
							 break;
						    }
			     			
						 }
						 
						 if(h==1)
						 break;
						 
					 }
				 }
			}
			
		}
    		
			
			system("cls");	
    	   	
	       for(int i=1;i<12;i++)
	       {   
		      for(int z=0;z<29;z++)
		      cout<<" ";
			  
			  if(i%4==0)
		      {
			     for(int i=0;i<17;i++)
	             cout<<"*";
	             cout<<"\n";
		      }
	      	  
			  else if(i%2==1)
		      {
			     for(int j=0;j<2;j++)  
			     cout<<"     *";
		         
				 cout<<"\n";
		      }
		      

		      else if(i==2||i==6||i==10)
		      {
		      	  for(int j=0;j<3;j++)
				  if(j<2)
		      	  cout<<"  "<<a[i][j]<<"  *";
		      	  else
		      	  cout<<"  "<<a[i][j];
		      	  cout<<"\n";
		          
			  }
		  }
		}
		
		if(a[2][0]==1&&a[2][1]==1&&a[2][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][0]==2&&a[2][1]==2&&a[2][2]==2)
		{
		cout<<"computer wins";
			w=1;
			break;
		}
		
		else if(a[6][0]==1&&a[6][1]==1&&a[6][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[6][0]==2&&a[6][1]==2&&a[6][2]==2)
		{
			cout<<"computer wins";
			w=1;
			break;
		}
		
		else if(a[10][0]==1&&a[10][1]==1&&a[10][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[10][0]==2&&a[10][1]==2&&a[10][2]==2)
		{
			cout<<"computer wins";
			w=1;
			break;
		}
		
		else if(a[2][0]==1&&a[6][1]==1&&a[10][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][0]==2&&a[6][1]==2&&a[10][2]==2)
		{
			cout<<"computer wins";
			w=1;
			break;
		}
		
		else if(a[2][2]==2&&a[6][1]==2&&a[10][0]==2)
		{
			cout<<"computer wins";
			w=1;
			break;
		}
		
		else if(a[2][2]==1&&a[6][1]==1&&a[10][0]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][0]==2&&a[6][0]==2&&a[10][0]==2)
		{
			cout<<"computer wins";
			w=1;
			break;
		}
		
		else if(a[6][0]==1&&a[2][0]==1&&a[10][0]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][1]==2&&a[6][1]==2&&a[10][1]==2)
		{
			cout<<"computer wins";
			w=1;
			break;
		}
		
		else if(a[2][1]==1&&a[6][1]==1&&a[10][1]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][2]==1&&a[6][2]==1&&a[10][2]==1)
		{
			cout<<name[0]<<" wins";
			w=1;
			break;
		}
		
		else if(a[2][2]==2&&a[6][2]==2&&a[10][2]==2)
		{
			cout<<"computer wins";
			w=1;
			break;
		}
		
		
		
		
	}
	
	if(w==0)
    cout<<"Its a draw"; 
	 	
	cout<<"\n";
	system("pause");
	goto start;
   }
   
    else if(g==4)
    cout<<"\n Thanks\n\n";
    
    else if(g==2)
    {
    	system("cls");
		
		for(int i=1;i<12;i++)
	       {   
		      for(int z=0;z<29;z++)
		      cout<<" ";
			  
			  if(i%4==0)
		      {
			     for(int i=0;i<17;i++)
	             cout<<"*";
	             cout<<"\n";
		      }
	      	  
			  else if(i%2==1)
		      {
			     for(int j=0;j<2;j++)  
			     cout<<"     *";
		         
				 cout<<"\n";
		      }
		      

		      else if(i==2||i==6||i==10)
		      {
		      	  for(int j=0;j<3;j++)
		      	  if(j<2&&i==2)
		      	  cout<<"  "<<j+1<<"  *";
		      	  else if(j==2&&i==2)
		      	  {
				  cout<<"  "<<j+1;
		      	  cout<<"\n";
		          }
		      	  else if(j<2&&i==6)
		      	  cout<<"  "<<j+4<<"  *";
		      	  else if(j==2&&i==6)
		      	  {
				  cout<<"  "<<j+4;
		      	  cout<<"\n";
		          }
		      	  else if(j<2&&i==10)
		      	  cout<<"  "<<j+7<<"  *";
		      	  else if(j==2&&i==10)
		      	  {
				  cout<<"  "<<j+7;
		      	  cout<<"\n";
		          }
			  }
		}
			  
			  cout<<"\n \nEnter Block numbers as indicated above to select your position.\n\n Who makes a triplet either in a row or column or diagonal wins. \n\n That is if a person has his mark in \n 1,2 and 3 or \n 4,5 and 6 or \n 7, 8 and 9 or \n 1, 4 and 7 or \n 2, 5 and 8 or \n 3,6 and 9 or\n 1,5 and 9 or \n 3,5 and 7 \n\n";
			  system("pause");
			  goto start;
		  
	}
		
	
	else if(g==3)
	{
		system("cls");
		
		cout<<"The credits of the above game goes to \n\n    1. Aryan Sanghi for all programming \n\n    2. My Brother Aniket Sanghi for inspiration\n\n";
		system("pause");
		goto start;
	}
	
	else
	{
		cout<<"Invalid Choice\n\n";
		system("pause");
		goto start;
	}
   
	
	
	system("pause");
	return 0;
	
	
}


