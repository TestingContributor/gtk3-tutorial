VolumeButton
============
The VolumeButton is very similar to the :doc:`scalebutton`, but it is tailored for use specifically for managing the volume within an application. It is commonly used in media players and music playing applications.

===========
Constructor
===========
The construction method for the VolumeButton is::

  GtkWidget *volumebutton = gtk_volume_button_new();

=======
Methods
=======
The volume value can be retrieved from the VolumeButton with::

  gtk_volume_button_get_value(GTK_SCALE_BUTTON(volumebutton));

The value returned by the method will be between ``0.0`` and ``1.0``.

A value can also be set via::

  gtk_volume_button_set_value(GTK_SCALE_BUTTON(volumebutton));

=======
Example
=======
Below is an example of a VolumeButton:

.. literalinclude:: _examples/volumebutton.c

Download: :download:`VolumeButton <_examples/volumebutton.c>`
