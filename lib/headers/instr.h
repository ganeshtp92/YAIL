#include<iostream>
using namespace std;

#ifndef __INSTR
#define __INSTR

enum Instr{
  allocate,
  mov,
  add  
};

enum Reg{
    ebx,
    ecx,
    eax,
    edi
};
#endif
