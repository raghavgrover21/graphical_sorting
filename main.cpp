#include<iostream>
#include<graphics.h>

using namespace std;

const int MAX = 1000;


int main()
{
    return 0; 
}

void bubbleSot(int(&arrayVal) [MAX])
{
    for(int i =0;i<= MAX ; i++)
    {
        for(int j=0;j<MAX-i-1; i++)
        {
            if( arrayVal[j] > arrayVal[j+1] )    
            {
                swap(arrayVal[j],arrayVal[j+1]);
            }

        }
    }
}
int randomNumber(int num)
{
    const float scale = rand()/float(RAND_MAX);
    return int(scale * num);
}
void swap(int &x, int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}