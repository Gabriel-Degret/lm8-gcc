
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_DefaultPersistenceDelegate__
#define __java_beans_DefaultPersistenceDelegate__

#pragma interface

#include <java/beans/PersistenceDelegate.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class DefaultPersistenceDelegate;
        class Encoder;
        class Expression;
    }
  }
}

class java::beans::DefaultPersistenceDelegate : public ::java::beans::PersistenceDelegate
{

public:
  DefaultPersistenceDelegate();
  DefaultPersistenceDelegate(JArray< ::java::lang::String * > *);
public: // actually protected
  virtual jboolean mutatesTo(::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::beans::Expression * instantiate(::java::lang::Object *, ::java::beans::Encoder *);
  virtual void initialize(::java::lang::Class *, ::java::lang::Object *, ::java::lang::Object *, ::java::beans::Encoder *);
private:
  JArray< ::java::lang::String * > * __attribute__((aligned(__alignof__( ::java::beans::PersistenceDelegate)))) constructorPropertyNames;
public:
  static ::java::lang::Class class$;
};

#endif // __java_beans_DefaultPersistenceDelegate__
