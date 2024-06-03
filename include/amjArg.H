#ifndef _AMJARG_H_
#define _AMJARG_H_

#include <vector>
#include <string>

namespace amjArg{
  class Help{
  public:
    Help(std::vector<std::string> h):_help(h){};
    ~Help(){};
    void help(int argc, char *argv[]);
    int size() const {return _help.size();};
    const std::string &operator[](int i){return _help[i];}; 
  private:
    std::vector<std::string> _help;
    void print_help();
  };
}

#endif /* _AMJARG_H_ */

  
