#include <iostream>
#include <vector>
using namespace std;
#include "functions.h"
#include "algorithms.h"
int main(){

  string message_encrypted;
  message_encrypted=get_message();
  int len_message=get_length(message_encrypted);

  string enc_key;
  enc_key=get_message();
  int len_key=get_length(enc_key);

  vector<long int> enc_array; 
  //decode_script(message_encrypted,enc_array);
  
  

  //DENCRYPT(enc_array,enc_key);

  cout<<ASCII_DECODE(enc_array);


}