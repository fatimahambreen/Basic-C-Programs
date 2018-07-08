#include<iostream>
using namespace std;
int main()
{
    int n;
    int count_vote[6]={0,0,0,0,0,0};
    for(int i=1;i<=5;i++)
    {
        cout<<"enter the candidate number"<<endl;
        cin>>n;
        if(n==1)
        {

        count_vote[1]++;
       /* count_vote[1]=count_vote[1]+1;
        count_vote[1]+=1;*/
        }
        else if(n==2)
        {
            count_vote[2]++;
        }
        else if(n==3)
        {
            count_vote[3]++;
        }
        else if(n==4)
        {
            count_vote[4]++;

        }
        else if(n==5)
        {
            count_vote[5]++;

        }
        else
        {
    count_vote[0]++;
        }
    }
   /* cout<<"number of votes of candidate 1"<<endl;
    cout<<count_vote[1];*/
    for(int i=0;i<=5;i++)
    {
        cout<<"number of votes for the candidate"<<i<<endl;
        cout<<count_vote[i]<<endl;
    }



}
