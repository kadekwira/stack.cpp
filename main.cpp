#include <iostream>

using namespace std;

struct Tumpukan{
    int data[5];
    int top, maks;
};

Tumpukan tumpuk;

void inisialisasi()
{
    tumpuk.top=-1;
    tumpuk.maks=4;
}
bool isEmpty()//kosong
{
    if(tumpuk.top==-1)
        return true;
    else
        return false;
}

bool isFull()//full
{
 if (tumpuk.top==tumpuk.maks)
    return true;
 else
    return false;
}
//push
void Push()
{
    if(isFull()==true)
        cout<<" Tumpukan telah Penuh "<<endl;
    else
    {
    int bilangan;
    cout<<" Masukan bilangan ke tumpukan : ";
    cin>>bilangan;
    tumpuk.top=tumpuk.top+1;
    tumpuk.data[tumpuk.top]= bilangan;
    cout<<" bilangan "<<bilangan<< " berhasil  ditambahkan ";
    cout<<" di index ke - "<<tumpuk.top<<endl;
    }
}

void Pop()
{
    if(isEmpty()==true)
        cout<<" tumpukan masih kosong "<<endl;
    else
    {
        cout<<" data yang di keluarkan pada index ke -"<<tumpuk.top<<" : ";
        cout<< tumpuk.data[tumpuk.top];
        tumpuk.top=tumpuk.top-1;
        cout<<" data telah berhasil di keluarkan "<<endl;

    }

}

void Print()
{
    cout<<" jumlah data pada tumpukan "<<(tumpuk.top+1)<<endl;
    cout<<" data pada tumpukan : ";
    for(int index=0;index<=tumpuk.top;index++)
    {
        cout<<tumpuk.data[index]<<" ";
    }
    cout<<endl;
}


void Clear ()
{
tumpuk.top= -1;
cout<<" data sudah dibersihkan "<<endl;
}
int main()
{
 inisialisasi();
 int pilihan;
 char ulang;
 do
 {
     system("cls");
     cout<<" 1. PUSH ( masukan ke tumpukan ) "<<endl;
     cout<<" 2.POP (mengeluarkan data dari tumpukan)"<<endl;
     cout<< " 3. Print(menampilan data tumpukan )"<<endl;
     cout<<" 4.CLEAR (Menghapus data tumpukan )"<<endl;
     cin>>pilihan;

     switch(pilihan)
     {
        case 1: { Push (); break;}
        case 2: {Pop(); break;}
        case 3:{Print(); break;}
        case 4:{Clear();break;}
        default:{cout<<" Salah Pilih "<<endl; break;}
     }
    cout<<endl;
    cout<<"apakah anda ingin mengulang ? [y/t] ";
    cin>>ulang;
 }
 while(ulang=='y'|| ulang == 'Y');



    return 0;
}
