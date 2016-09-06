#ifndef __TRACKBLOCK_H__
#define __TRACKBLOCK_H__

#include <assert.h>

enum TrackOcc
{
  None,
  EastBound,
  WestBound
};

/*
 * Yes, there are many more, but some
 * like Stop-and-Procceed or Stop-Grade
 * rely on signage and others aren't
 * applicable to me at this time
 */
enum SignalAspect
{
  /**
   * Proceed not exceding authorized 
   * speed
   */
  Clear,
  /**
   * Proced at medium speed until
   * entire train clears all
   * interlocking or spring 
   * switches, then proceed at 
   * normal speed
   */
  MediumClear,
  /**
   * Proceed at medium to next 
   * signal, being prepared to
   * stop
   */
  Approach,
  /**
   * Stop
   */
  Stop
};

template<unsigned char SECTIONS>
class TrackBlock {
  int tracks[SECTIONS];

  public:
    template<unsigned char PS>
    TrackBlock(int(&tracks)[PS]);
};


template<unsigned char SECTIONS>
template<unsigned char PS>
TrackBlock<SECTIONS>::TrackBlock(int(&tracks)[PS])
{
  static_assert(PS == SECTIONS, "Number of track segments is unexpected");
}

#endif
