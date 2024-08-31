#ifndef DECRYPTIONALGORITHMS_H
#define DECRYPTIONALGORITHMS_H

#include <iostream>
using namespace std;

void dec_algorithm0(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        enc_array[i] -= 2;
    }
}

void dec_algorithm1(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        enc_array[i] -= i * 2;
    }
}

void dec_algorithm2(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        enc_array[i] /= 2;
        enc_array[i] -= 3;
    }
}

void dec_algorithm3(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        
        enc_array[i]+=i*2;
        enc_array[i]-=5;
    }
}

void dec_algorithm4(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        
        enc_array[i]/=3;
        enc_array[i]-=i*(i%2);

    }
}

void dec_algorithm5(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithm6(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithm7(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithm8(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithm9(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithmA(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithmB(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithmC(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithmD(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithmE(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

void dec_algorithmF(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

#endif // DECRYPTIONALGORITHMS_H