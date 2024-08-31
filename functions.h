#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
using namespace std;

// GETTERS

string get_message() // gets message from the user
{
  cout << "Enter the message and press Enter to Encrypt: \n";
  string message;
  getline(cin, message);
  return message;
}

string get_key() // gets key from the user
{
  cout << "Enter the key: \n";
  string enc_key;
  getline(cin, enc_key);
  return enc_key;
}

int get_length(string text) // return length of a string input
{
  return (text.length());
}

// ENCODERS

void ASCII_ENCODE(string message_unencrypted, vector<long int> &enc_array) // ASCII encodes characters of message_unencrypted into enc_array
{
  for (int index = 0; index < get_length(message_unencrypted); index++)
  {
    enc_array.push_back(int(message_unencrypted[index]));
  }
}

void ENCRYPT(vector<long int> &enc_array, string enc_key)
{
  for (char i : enc_key)
  {
    switch (i)
    {
    case ('0'):
    {
      enc_algorithm0(enc_array);
      break;
    }
    case ('1'):
    {
      enc_algorithm1(enc_array);
      break;
    }
    case ('2'):
    {
      enc_algorithm2(enc_array);
      break;
    }
    case ('3'):
    {
      enc_algorithm3(enc_array);
      break;
    }
    case ('4'):
    {
      enc_algorithm4(enc_array);
      break;
    }
    case ('5'):
    {
      enc_algorithm5(enc_array);
      break;
    }
    case ('6'):
    {
      enc_algorithm6(enc_array);
      break;
    }
    case ('7'):
    {
      enc_algorithm7(enc_array);
      break;
    }
    case ('8'):
    {
      enc_algorithm8(enc_array);
      break;
    }
    case ('9'):
    {
      enc_algorithm9(enc_array);
      break;
    }
    case ('A'):
    {
      enc_algorithmA(enc_array);
      break;
    }
    case ('B'):
    {
      enc_algorithmB(enc_array);
      break;
    }
    case ('C'):
    {
      enc_algorithmC(enc_array);
      break;
    }
    case ('D'):
    {
      enc_algorithmD(enc_array);
      break;
    }
    case ('E'):
    {
      enc_algorithmE(enc_array);
      break;
    }
    case ('F'):
    {
      enc_algorithmF(enc_array);
      break;
    }
    }
  }
}

// DECODERS

string ASCII_DECODE(vector<long int> &enc_array) // Decodes enc_array into readable ASCII characters and returns string
{
  string message;
  for (int index = 0; index < enc_array.size(); index++)
  {
    message = message + char(enc_array.at(index));
  }
  return message;
}

void DECRYPT(vector<long int> &enc_array, string enc_key)
{
  for (char i : enc_key)
  {
    switch (i)
    {
    case ('0'):
    {
      dec_algorithm0(enc_array);
      break;
    }
    case ('1'):
    {
      dec_algorithm1(enc_array);
      break;
    }
    case ('2'):
    {
      dec_algorithm2(enc_array);
      break;
    }
    case ('3'):
    {
      dec_algorithm3(enc_array);
      break;
    }
    case ('4'):
    {
      dec_algorithm4(enc_array);
      break;
    }
    case ('5'):
    {
      dec_algorithm5(enc_array);
      break;
    }
    case ('6'):
    {
      dec_algorithm6(enc_array);
      break;
    }
    case ('7'):
    {
      dec_algorithm7(enc_array);
      break;
    }
    case ('8'):
    {
      dec_algorithm8(enc_array);
      break;
    }
    case ('9'):
    {
      dec_algorithm9(enc_array);
      break;
    }
    case ('A'):
    {
      dec_algorithmA(enc_array);
      break;
    }
    case ('B'):
    {
      dec_algorithmB(enc_array);
      break;
    }
    case ('C'):
    {
      dec_algorithmC(enc_array);
      break;
    }
    case ('D'):
    {
      dec_algorithmD(enc_array);
      break;
    }
    case ('E'):
    {
      dec_algorithmE(enc_array);
      break;
    }
    case ('F'):
    {
      dec_algorithmF(enc_array);
      break;
    }
    }
  }
}

#endif // FUNCTIONS_H