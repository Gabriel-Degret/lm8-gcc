
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_qt_QtLabelPeer__
#define __gnu_java_awt_peer_qt_QtLabelPeer__

#pragma interface

#include <gnu/java/awt/peer/qt/QtComponentPeer.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace qt
          {
              class QtLabelPeer;
              class QtToolkit;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Label;
    }
  }
}

class gnu::java::awt::peer::qt::QtLabelPeer : public ::gnu::java::awt::peer::qt::QtComponentPeer
{

public:
  QtLabelPeer(::gnu::java::awt::peer::qt::QtToolkit *, ::java::awt::Label *);
public: // actually protected
  virtual void init();
  virtual void setup();
public:
  virtual void setAlignment(jint);
  virtual void setText(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_qt_QtLabelPeer__
