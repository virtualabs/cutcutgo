CutcutGo installation and configuration
=======================================

Cut a hole to access the programming interface
----------------------------------------------

In order to access the debug port of your Cricut Maker's PCB, you need to drill a
hole at a very specific position as shown below (drilling guide will come pretty soon
to help you).

.. image:: _static/images/setup/cutting-hole.jpg
    :width: 600
    :alt: A hole has been cut in a Cricut Maker plastic bottom case.

Solder a 6-pin male header to the main board debug interface on the bottom of the PCB,
as shown below.

.. image:: _static/images/setup/debug-connector.jpg
    :width: 600
    :alt: A 6-pin debug header soldered to the Cricut Maker main PCB

Install the PCB back into the case and reassemble the device.

.. image:: _static/images/setup/debug-pcb-installed.jpg
    :width: 600
    :alt: Main PCB screwed to the main bottom case.

Flashing the firmware into the Cricut Maker
-------------------------------------------

Connect 6 wires from the debug interface to a Microchip SNAP (or PicKit3), as shown below.

.. image:: _static/images/setup/microchip-snap.jpg
    :width: 600
    :alt: Microchip SNAP connected to our Cricut Maker debug port.

Plug the Microchip SNAP (or PicKit 3) into your computer.

Download and install `Microchip MPLABX <https://www.microchip.com/en-us/tools-resources/develop/mplab-x-ide>`_ on your
system. Launch MPLABX and import the *CutcutGo* project from the repository. Make sure your SNAP device has been
detected by MPLABX. 

Go to the *Production* menu and click on *Make and Program Device* in order to compile and flash the firmware. MPLABX
should display something like this:

.. image:: _static/images/setup/mplabx_build_flash.png
    :width: 600
    :alt: MPLABX expected output when building and flashing the CutcutGo firmware onto the Cricut Maker.


Installing InkCut
-----------------

We slightly modified the InkCut project in order to add support for the Cricut Maker. Our modified version can
be found in our dedicated `InkCut repository <https://github.com/virtualabs/inkcut-cutcutgo>`_.

Install *InkCut* with the following commands (Debian-like machine):

.. code:: text

    $ git clone https://github.com/virtualabs/inkcut-cutcutgo.git && cd inkcut-cutcutgo
    $ sudo apt install python3-pip python3-pyqt5 python3-setuptools libcups2-dev python3-pyqt5.qtsvg
    $ sudo pip install .


Configuring InkCut
------------------

Launch *InkCut* and go straight to the *Device Setup* menu. Add a new device and select the `Cricut Maker Champagne`
type. Once done, edit the device settings starting with the *Connection* tab. Use the following settings:

.. image:: _static/images/setup/inkcut-device-connection.png
    :width: 800
    :alt: Cricut Maker connection settings for InkCut (connection tab)

Go to the *Protocol* tab, and select the *GCODE* protocol. Untick the *Use builtin and startup commands* option,
set the decimal precision to `4` and set the lift mode to `Custom`. Set the raise GCODE to `G01Z0F10` and the lower
GCODE to `G01Z-10F10`. These are GCODE commands used to raise and lower the tool heads.

.. image:: _static/images/setup/inkcut-device-protocol.png
    :width: 800
    :alt: Cricut Maker connection settings for InkCut (protocol tab)

Go to the *Device* tab and then to the *Connection commands* vertical sub-tab in order to set the following
commands in the *after connect* text box:

.. code:: text

    T0 ; home tool A
    $H
    T1 ; home tool B
    $H

    T0 ;select tool
    G21
    G01X0Y0F10

Use `T1` to automatically select the B tool, or `T0` to use the A tool.

.. image:: _static/images/setup/inkcut-device-connection-cmds.png
    :width: 800
    :alt: Cricut Maker connection settings for InkCut (connection commands)

Last, go to the device *Output* vertical sub-tab and set the X and Y scale to `0.2`.

Your device is ready to draw/cut !


Cut your first design !
-----------------------

Select a SVG file, load it into *InkCut* and make sure to have set a left margin in the *Material* tab
of at least 40mm (this measure has not already been precisely determined yet).

Click on the *Device* menu and then *Send to device*. *InkCut* will connect to the Cricut Maker and send
GCODE. The Cricut Maker is expected to home all axes (X and Z) and then start cutting/drawing depending on
the selected tool.