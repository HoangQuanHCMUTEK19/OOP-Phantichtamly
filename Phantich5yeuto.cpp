#include <iostream>
using namespace std;

class Yeuto 
{
    protected:
     int chiso;
    public:
    void nhap()
    {
        cout <<"Nhap chi so: ";
        cin >>chiso;
    }
    virtual void xuat()
    {
        cout << endl;
        cout << chiso;
    }
    virtual int nguycocao()
    {
        return 0;
    }
};
class O: public Yeuto
{
    public:
    void xuat()
    {
        Yeuto::xuat();
        cout <<" - Yeu to O (San sang trai nghiem): ";
        if (chiso > 70)
            cout <<"Nguy co cao"<<endl;
        else
          if (chiso < 70 && chiso > 30)
            cout <<"Khong xac dinh"<<endl;
           else
            cout <<"Chi so thap"<<endl;
    }

};
class C: public Yeuto
{
    public:
    void xuat()
    {
        Yeuto::xuat();
        cout <<" - Yeu to C(Tu chu tan tam): ";
        if (chiso > 70)
            cout <<"Nguy co cao"<<endl;
        else
          if (chiso < 70 && chiso > 30)
            cout <<"Khong xac dinh"<<endl;
           else
            cout <<"Chi so thap"<<endl;
    }
    int nguycocao()
    {
        if (chiso > 70)
         return 1;
        return 0;
    }


};
class E: public Yeuto
{
    public:
    void xuat()
    {
        Yeuto::xuat();
        cout <<" - Yeu to E(Huong ngoai): ";
        if (chiso > 70)
            cout <<"Nguy co cao"<<endl;
        else
          if (chiso < 70 && chiso > 30)
            cout <<"Khong xac dinh"<<endl;
           else
            cout <<"Chi so thap"<<endl;
    }
    int nguycocao()
    {
        if (chiso > 70)
         return 1;
        return 0;
    }


};
class A: public Yeuto
{
    public:
    void xuat()
    {
        Yeuto::xuat();
        cout <<" - Yeu to A(Hoat dong de chiu): ";
        if (chiso > 70)
            cout <<"Nguy co cao"<<endl;
        else
          if (chiso < 70 && chiso > 30)
            cout <<"Khong xac dinh"<<endl;
           else
            cout <<"Chi so thap"<<endl;
    }

};
class N: public Yeuto
{
    public:
    void xuat()
    {
        Yeuto::xuat();
        cout <<" - Yeu to N(Bat on cam xuc): ";
        if (chiso > 70)
            cout <<"Nguy co cao"<<endl;
        else
          if (chiso < 70 && chiso > 30)
            cout <<"Khong xac dinh"<<endl;
           else
            cout <<"Chi so thap"<<endl;
    }
    int nguycocao()
    {
        if (chiso > 70)
         return 1;
        return 0;
    }

};
class nguoi
{
    Yeuto* arrOcean[5];
    public:
    void nhap()
    {
        arrOcean[0] = new O;
        arrOcean[1] = new C;
        arrOcean[2] = new E;
        arrOcean[3] = new A;
        arrOcean[4] = new N;
        for (int i = 0; i < 5;i++)
        {
            arrOcean[i]->nhap();
        }
    }
    void xuat()
    {
        for (int i = 0; i < 5; i++)
        {
            arrOcean[i]->xuat();
        }
    }
    int nguycocao()
    {
        int GtC = arrOcean[1]->nguycocao();
        int GtE = arrOcean[2]->nguycocao();
        int GtN = arrOcean[4]->nguycocao();
        if(GtC == 0 || GtN == 1 || (GtE == 0 && GtN == 1))
        {
            return 1;
        } 
        else
        {
            return 0;
        }
    }
};
class nhieunguoi
{
    nguoi mangnguoi[100];
    int iN;
    public:
    void Nhap()
    {
        cout<<"Nhap so nguoi: ";
        cin >> iN;
        for (int i = 0; i < iN ; i++)
        {
            cout<<"Nhap thong tin cua nguoi so "<< i <<endl;
            mangnguoi[i].nhap();
        }
    }
    void Xuat()
    {
        int index;
        cout<<"Nhap chi so nguoi can hien thi: "<<endl;
        cin >> index;
        mangnguoi[index].xuat();
        if (mangnguoi[index].nguycocao() == 1)
        {
            cout<<"Can xem xet"<<endl;
        }
        else
        {
            cout <<"Ly tuong"<<endl;
        }

    }
};
int main() {
    // Write C++ code here
    nhieunguoi a;
    a.Nhap();
    a.Xuat();
    //Hello


    return 0;
}