


#ifndef REGEX_HPP
#define REGEX_HPP


  #include <string>


  class Regex {
    private:
      typedef enum { ON, OFF } States;

    public:
      Regex( void ) = default;
      Regex( const std::string& expression );
      

      bool        match(const std::string& expression);

      static bool match(const std::string& expression);

      
  } ;

#endif


