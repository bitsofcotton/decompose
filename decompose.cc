#include <cstdio>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
#include <assert.h>

#include "lieonn.hh"
typedef myfloat num_t;

int main(int argc, const char* argv[]) {
  std::cout << std::setprecision(30);
  std::string s;
  std::vector<num_t> v;
  while(std::getline(std::cin, s, '\n')) {
    v.emplace_back(num_t(0));
    std::stringstream ins(s);
    ins >> v[v.size() - 1];
  }
  v.emplace_back(v[0]);
  SimpleVector<num_t> vv;
  vv.entity = move(v);
  const auto m(mother(vv));
  std::cout << m << std::endl;
  const auto f(freq(m, vv));
  std::cout << f << std::endl;
  const auto dd(synth(m, f));
  for(int i = 0; i < dd.size(); i ++)
    std::cout << dd[i] << ",\t" << vv[i] << ",\t" << f[i]<< std::endl;
  return 0;
}

