#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define NRECORDS 100
typedef struct {
  int   integer;
  char  string[24];
} RECORD;

void generateFile(){
  ofstream f_source;
  f_source.open("records.dat");
  if (f_source){
    for(int i=0;i<100;i++){
      string rstr = "RECORD-";
      rstr += to_string(i);
      cout << rstr << endl;
      f_source << rstr.c_str()<< endl;
    }
  }
  f_source.close();
}

int main(int argc, char** argv){
  generateFile();
  return 0;
}
