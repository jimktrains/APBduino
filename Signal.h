#ifndef __SIGNAL_H__
#define __SIGNAL_H__

/*
 * Yes, there are many more, but some
 * like Stop-and-Procceed or Stop-Grade
 * rely on signage and others aren't
 * applicable to me at this time
 */
enum SignalIndication
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
   * Proceed to Stop at next signal.
   * Slow Speed applies until entire 
   * train clears all interlockings,
   * or spring switches, then Medium
   * speed applies.
   */
  SlowApproach,
  /**
   * Stop
   */
  Stop,
  /**
   * No following signal
   */
  NoSignal
};

#endif
