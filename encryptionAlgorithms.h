#ifndef ENCRYPTIONALGORITHMS_H
#define ENCRYPTIONALGORITHMS_H

#include <iostream>
using namespace std;

void enc_algorithm0(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        enc_array[i] += 2;
    }
}
void enc_algorithm1(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        enc_array[i] += i * 2;
    }
}
void enc_algorithm2(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        enc_array[i] += 3;
        enc_array[i] *= 2;
    }
}
void enc_algorithm3(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        enc_array[i] += 5;
        enc_array[i] -= i * 2;
    }
}
void enc_algorithm4(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
        enc_array[i] += i * (i % 2);
        enc_array[i] *= 3;
    }
}
void enc_algorithm5(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithm6(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithm7(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithm8(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithm9(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithmA(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithmB(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithmC(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithmD(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithmE(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}
void enc_algorithmF(vector<long int> &enc_array)
{
    for (int i = 0; i < enc_array.size(); i++)
    {
    }
}

#endif // ENCRYPTIONALGORITHMS_H