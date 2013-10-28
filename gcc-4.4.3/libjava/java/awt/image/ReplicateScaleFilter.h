
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_ReplicateScaleFilter__
#define __java_awt_image_ReplicateScaleFilter__

#pragma interface

#include <java/awt/image/ImageFilter.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
          class ColorModel;
          class ReplicateScaleFilter;
      }
    }
  }
}

class java::awt::image::ReplicateScaleFilter : public ::java::awt::image::ImageFilter
{

public:
  ReplicateScaleFilter(jint, jint);
  virtual void setDimensions(jint, jint);
  virtual void setProperties(::java::util::Hashtable *);
  virtual void setPixels(jint, jint, jint, jint, ::java::awt::image::ColorModel *, JArray< jbyte > *, jint, jint);
  virtual void setPixels(jint, jint, jint, jint, ::java::awt::image::ColorModel *, JArray< jint > *, jint, jint);
private:
  void setupSources();
public: // actually protected
  jint __attribute__((aligned(__alignof__( ::java::awt::image::ImageFilter)))) destHeight;
  jint destWidth;
  jint srcHeight;
  jint srcWidth;
  JArray< jint > * srcrows;
  JArray< jint > * srccols;
  ::java::lang::Object * outpixbuf;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_image_ReplicateScaleFilter__
