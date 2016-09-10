# APBduino
Absolute Permissive Block (APB) Signaling System built using an Arduino

APB are a form of Automatic Block Signal (ABS) systems, but provide
protection for the front, as well as the rear as a traditional ABS
system would.

Terminology
==============

* Track Segment - Independently controlled section of track that may only have
  a single occupant at a uniform speed. Must be able to provide occupancy and
  occupant direction
* Turnout - Track Segment that can move between a "main" and "divergent" state.
  When not in either the "main" or "divergent" state, the state is
  "impassable".  Must be able to provide occupancy, occupant direction, and
  turnout state.
* Signal Block - Collection of track segments protected by a single signal.
