ColorChooser
============
The ColorChooser is used by the :doc:`colorchooserdialog` and :doc:`colorchooserwidget` widgets to provide a common object used to access selected colours.

=======
Methods
=======
To retrieve the selected colour from the ColorChooser call::

  gtk_color_chooser_get_rgba(GTK_COLOR_CHOOSER(colorchooser));

The method returns a GdkRGBA object which contains the selected red, green, blue, and alpha channel levels.

Alternatively, the colour can be set by supplying a GdkRGBA via::

  gtk_color_chooser_set_rgba(GTK_COLOR_CHOOSER(colorchooser), rgba);

The alpha channel can be toggled on and off using::

  gtk_color_chooser_set_use_alpha(GTK_COLOR_CHOOSER(colorchooser), alpha);

A palette of colours can be defined and added to the ColorChooser with::

  gtk_color_chooser_add_palette(GTK_COLOR_CHOOSER(colorchooser), orientation, lines, total, colours);

The *lines* and *total* defined the number of lines to allow, with a total number of colours to show. The *colours* parameter should define each of the colours to be shown within the palette. Finally, the *orientation* should define the direction in which the palette is laid out with:

* ``GTK_ORIENTATION_VERTICAL``
* ``GTK_ORIENTATION_HORIZONTAL``

=======
Example
=======
Please see the :doc:`colorbutton`, :doc:`colorchooserdialog` and :doc:`colorchooserwidget` for examples of ColorChooser usage.
