#ifndef _AMJARG_H_
#define _AMJARG_H_

#include <vector>
#include <string>

namespace amjArg{
  class Help{
  public:
    Help(std::vector<std::string> h):_help(h),_min_params(0){};
    ~Help(){};
    void min_params(int m){_min_params=m;}
    int min_params() const {return _min_params;}
    void operator()(int argc, char *argv[]);
    void help(int argc, char *argv[]){operator()(argc,argv);}
    int size() const {return _help.size();}
    const std::string &operator[](int i){return _help[i];}
  private:
    std::vector<std::string> _help;
    int _min_params;
    void print_help();
  };
}

#endif /* _AMJARG_H_ */

  
