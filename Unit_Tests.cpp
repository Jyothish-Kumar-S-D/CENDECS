#include <iostream>
#include <vector>
using namespace std;
#include "functions.h"
#include "algorithms.h"
int main()
{

  string message_unencrypted;
  message_unencrypted = get_message();
  int len_message = get_length(message_unencrypted);

  string enc_key;
  enc_key = get_key();

  vector<long int> enc_array;

  ASCII_ENCODE(message_unencrypted, enc_array);
  
  string message = ASCII_DECODE(enc_array);
  cout << message;
}