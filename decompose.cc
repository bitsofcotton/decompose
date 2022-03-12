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
#include "decompose.hh"

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
  SimpleVector<num_t> vv(v.size());
  for(int i = 0; i < vv.size(); i ++)
    vv[i]  = v[i];
  Decompose<num_t> odc(vv.size());
  const auto m(odc.mother(vv));
  std::cout << m << std::endl;
  const auto f(odc.freq(m, vv));
  std::cout << f << std::endl;
  const auto dd(odc.synth(m, f));
  for(int i = 0; i < dd.size(); i ++)
    std::cout << dd[i] << ",\t" << vv[i] << ",\t" << f[i]<< std::endl;
  return 0;
}

