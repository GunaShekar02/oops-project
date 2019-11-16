#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

#include "Hospital.h"

Hospital::Hospital(string _name, string _location, string _contact)
{
  id = -1;
  name = _name;
  location = _location;
  contact = _contact;
}

Hospital::Hospital()
{
}

void Hospital::Write(string fileName)
{
  if (id == -1)
  {
    fstream file;
    file.open(fileName, ios::app | ios::in);
    string line;
    long temp = 0;
    while (!file.eof())
    {
      getline(file, line);
      if (line[0] == 'I')
        temp = stoi(line.substr(3));
    }
    id = temp + 1;
    file.close();
  }
  fstream file;
  file.open(fileName, ios::app | ios::in);
  file << "ID: " << id << endl;
  file << "Name: " << name << endl;
  file << "Location: " << location << endl;
  file << "Contact: " << contact << endl;
  cout<<"The Hospital ID is "<<id<<endl;
}

// void Hospital::Read(){
//     fstream file;
//     string a;
//     file.open("Hospital.txt", ios::in);
//     std::getline(file, a);
//     cout<<a;
// }

//Getting details of a Hospital
void Hospital::getInfo()
{
  cout << "ID : " << id << endl;
  cout << "Name of Hospital: " << name << endl;
  cout << "Address of Hospital: " << location << endl;
  cout << "Contact Number: " << contact << endl;
}