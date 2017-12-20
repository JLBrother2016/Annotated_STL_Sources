#include <iostream>
#include <algorithm>
#include <deque>
#include <iomanip>
#include <cstdlib>


using namespace std;
void Print(int a)
{
    cout << std::setw(4) <<a;

}

int main( )
{
    deque<int> ideq(20, 9);              //  allocֻ������G++������
    cout <<"size = " << ideq.size() << endl;     //size = 20
    /// ���ڹ�����һ��deque, ��20��intԪ��, ��ֵ��Ϊ9
    /// ��������СΪ32byte

    ///  Ϊÿ��Ԫ���趨��ֵ
    for(int i = 0; i < ideq.size(); i++)  
    {
        ideq[i] = i;
    }

    for(auto &x : ideq)
        cout << x << ' ';     // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 
    cout <<endl;
    ideq.push_back(3);
    for(auto &x : ideq)
        cout << x << ' ';     // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 3 
    cout << endl;
    for(int i = 0; i < 3; ++i)
        ideq.push_back(i);
    for(auto &x : ideq)
        cout << x << ' ';     // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 3 0 1 2 
    cout << endl;
    cout << "size = " << ideq.size() << endl; //size = 24
    // ����ǰ������һ��Ԫ�أ���ֵ��99
    ideq.push_front(99);  //������һ���µ�������ռ䣨map���½ڵ㣩
    for(auto &x : ideq)
        cout << x << ' ';    // 99 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 3 0 1 2 
    cout << endl;
    cout << "size = " << ideq.size() << endl;  // size = 25
    // ��ǰ������2��Ԫ�أ���ֵ�ֱ�Ϊ98,97
    ideq.push_front(98);
    ideq.push_front(97);
    for(auto &x : ideq)
        cout << x << ' ';   // 97 98 99 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 3 0 1 2
    cout << endl;
    cout << "size = " << ideq.size() << endl; // size = 27
    // ������ֵΪ99��Ԫ�أ�����ӡ����
    deque<int>::iterator itr;
    itr = find(ideq.begin(), ideq.end(), 99);   //99
    cout << *itr << endl;                       //99
    cout << *(itr._M_cur) << endl;

    return 0;
}

