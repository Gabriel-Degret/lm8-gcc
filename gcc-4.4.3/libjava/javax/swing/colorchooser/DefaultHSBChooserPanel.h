
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_colorchooser_DefaultHSBChooserPanel__
#define __javax_swing_colorchooser_DefaultHSBChooserPanel__

#pragma interface

#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Container;
        class Graphics;
        class Image;
        class Point;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class Icon;
        class JColorChooser;
        class JLabel;
        class JPanel;
        class JRadioButton;
        class JSlider;
        class JSpinner;
      namespace colorchooser
      {
          class DefaultHSBChooserPanel;
      }
    }
  }
}

class javax::swing::colorchooser::DefaultHSBChooserPanel : public ::javax::swing::colorchooser::AbstractColorChooserPanel
{

public: // actually package-private
  DefaultHSBChooserPanel();
public:
  virtual ::java::lang::String * getDisplayName();
  virtual void updateChooser();
public: // actually protected
  virtual void buildChooser();
public:
  virtual void uninstallChooserPanel(::javax::swing::JColorChooser *);
private:
  ::java::awt::Container * buildRightPanel();
public:
  virtual ::javax::swing::Icon * getSmallDisplayIcon();
  virtual ::javax::swing::Icon * getLargeDisplayIcon();
  virtual void paint(::java::awt::Graphics *);
private:
  void updateHLockImage();
  void updateBLockImage();
  void updateSLockImage();
public: // actually package-private
  virtual void updateImage();
private:
  void updateTextFields();
public: // actually package-private
  virtual void updateSlider();
  virtual void updateTrack();
private:
  void updateHTrack();
  void updateSTrack();
  void updateBTrack();
  JArray< jfloat > * getHSBValues();
public: // actually package-private
  ::java::awt::Image * __attribute__((aligned(__alignof__( ::javax::swing::colorchooser::AbstractColorChooserPanel)))) gradientImage;
private:
  ::javax::swing::JPanel * gradientPanel;
public: // actually package-private
  ::java::awt::Image * trackImage;
private:
  ::javax::swing::JPanel * trackPanel;
public: // actually package-private
  ::javax::swing::JSlider * slider;
  ::javax::swing::JRadioButton * hRadio;
  ::javax::swing::JRadioButton * sRadio;
  ::javax::swing::JRadioButton * bRadio;
  ::javax::swing::JSpinner * hSpinner;
  ::javax::swing::JSpinner * sSpinner;
  ::javax::swing::JSpinner * bSpinner;
private:
  static const jint imgWidth = 200;
  static const jint imgHeight = 200;
  static const jint trackWidth = 30;
  static ::javax::swing::JLabel * R;
  static ::javax::swing::JLabel * G;
  static ::javax::swing::JLabel * B;
  ::javax::swing::JLabel * rFull;
  ::javax::swing::JLabel * gFull;
  ::javax::swing::JLabel * bFull;
public: // actually package-private
  ::java::awt::Point * gradientPoint;
  jboolean internalChange;
  jboolean spinnerTrigger;
  jint locked;
  static const jint HLOCKED = 0;
  static const jint SLOCKED = 1;
  static const jint BLOCKED = 2;
  jboolean handlingMouse;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_colorchooser_DefaultHSBChooserPanel__