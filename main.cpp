#include <iostream>

using namespace std;
void QuicSort(int *tab,int left, int right)
{
    if(left<right)
    {
        int m=left;
        for(int i=left+1;i<=right;i++)
        {
            if(tab[i]<tab[left])
            {
                swap(tab[++m],tab[i]);
            }
        }
         swap(tab[left],tab[m]);
        QuicSort(tab,left,m-1);
        QuicSort(tab,m+1,right);
    }
}
int main()
{
    cout<<"Wypelnij tablice 13 liczbami"<<endl;
    int tablica[13];
    for(int i=0;i<12;i++)
    {
        cin>>tablica[i];
    }
    for(int i=0;i<12;i++)
    {
        cout<<tablica[i]<<endl;;
    }
    cout<<endl;
    cout<<"Po sortowaniu"<<endl;;
    cout<<endl;
    QuicSort(tablica,0,13);
    for(int a=0;a<12;a++)
    {
        cout<<tablica[a]<<endl;
    }

    return 0;
}
