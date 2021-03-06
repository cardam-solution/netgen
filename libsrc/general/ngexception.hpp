#ifndef FILE_NGEXCEPTION
#define FILE_NGEXCEPTION

/**************************************************************************/
/* File:   ngexception.hpp                                                */
/* Author: Joachim Schoeberl                                              */
/* Date:   16. Jan. 2002                                                  */
/**************************************************************************/

namespace netgen
{

/// Base class for all ng exceptions
class NgException : public std::exception
{
  /// verbal description of exception
  string m_what;
public:
  ///
  DLL_HEADER NgException (const string & s);
  ///
  DLL_HEADER virtual ~NgException ();

  /// append string to description
  DLL_HEADER void Append (const string & s);
  //  void Append (const char * s);
  
  /// verbal description of exception
  const string & What() const { return m_what; }
  virtual const char* what() const noexcept override { return m_what.c_str(); }
};
}

#endif
