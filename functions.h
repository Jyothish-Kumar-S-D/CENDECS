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

// DECODERS

string ASCII_DECODE(vector<long int> &enc_array) // Decodes enc_array into readable ASCII characters and returns string
{
  string message;
  for (int index = 0; index < enc_array.size(); index++)
  {
    message=message + char(enc_array.at(index));
  }
  return message;
}
#endif // FUNCTIONS_H