
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Collections$CheckedSortedSet__
#define __java_util_Collections$CheckedSortedSet__

#pragma interface

#include <java/util/Collections$CheckedSet.h>

class java::util::Collections$CheckedSortedSet : public ::java::util::Collections$CheckedSet
{

public: // actually package-private
  Collections$CheckedSortedSet(::java::util::SortedSet *, ::java::lang::Class *);
public:
  virtual ::java::util::Comparator * comparator();
  virtual ::java::lang::Object * first();
  virtual ::java::util::SortedSet * headSet(::java::lang::Object *);
  virtual ::java::lang::Object * last();
  virtual ::java::util::SortedSet * subSet(::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::util::SortedSet * tailSet(::java::lang::Object *);
private:
  static const jlong serialVersionUID = 1599911165492914959LL;
  ::java::util::SortedSet * __attribute__((aligned(__alignof__( ::java::util::Collections$CheckedSet)))) ss;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_Collections$CheckedSortedSet__
