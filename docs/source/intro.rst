Introducing CutcutGo
====================

Origin
------

In 2021, Cricut unilateraly decided to restrict the number of designs for users that did not subscribe
to the Cricut Access platform. Cricut machines are quite expensive, as well as their accessories, and 
a huge number of users were furious about this decision. Hopefully, Cricut walked back and subscription
is no more mandatory but a bit too late: some of them decided to develop an open-source firmware for
one of the mose common Cricut machine in order to set it free. Months later, I started to port GRBL onto
the Cricut Maker after having reverse-engineered its main printed circuit board.

Why GRBL ?
----------

I did not want to start from scratch and `GRBL <https://github.com/grbl/grbl>`_ is a well-known implementation
of a GCODE-compatible CNC firmware for the AVR platform that simply works. I had a look at Marlin too, but it
looked like a huge project to jump into, far more complex than GRBL. Even if GRBL has not been ported to PIC32,
this task seemed to be feasible and this is why I chose to derive this CutcutGo firmware from GRBL.

Moreover, the whole code is in C and I know C better than C++ :D.

Months of development
---------------------

The implementation of this firmware has been regularly streamed on `my Twitch channel <https://twitch.tv/virtualabs>`_
and is now available on my `Peertube channel <https://video.ploud.fr/w/p/spMwuZfa7pGiRJpvsLzDTZ>`_, if you are eager to know how long it took to get there and what different
issues I had to face.


Current status of this project
------------------------------

This firmware open-source firmware is currently able to drive a Cricut Maker through GCODE without
issue, supporting both tools (A & B). It is still experimental as a lot of features have still
to be added to this implementation, but the hardest part is done.

`Here is a video showing the latest tests we made <https://video.ploud.fr/w/1rEYK9AB4MAKmCMSikSvNG>`_.


