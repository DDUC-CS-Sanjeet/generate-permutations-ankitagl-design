#include<iostream>
#include<string.h>

using namespace std;

void Permute(char a[], int first, int last)
{
    if(first==last)
    {
        cout<<a<<endl;
    }else
    {
        for(int i=first; i<=last; i++)
            {
            swap(a[first], a[i]);
            Permute(a, first+1, last);
            swap(a[first], a[i]);
            }


    }
}
int main()
{
    int num;
    cout<<"Enter the no of elements: ";
    cin>>num;
    char str[num+1];
    for(int i=0, k=97; i<num; i++, k++)
        {
            str[i]=k;
        }
    str[num]=' ';
    cout<<num<<endl;
    Permute(str, 0, num-1);
    return 0;
}
