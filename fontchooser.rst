FontChooser
===========
The FontChooser object is used by the other font-family widgets. It provides a shared object which is consistent across the widgets for setting and getting font options.

=======
Methods
=======
The selected font options can be retrieved from the FontChooser using::

  gtk_font_chooser_get_font_family(GTK_FONT_CHOOSER(fontchooser));
  gtk_font_chooser_get_font_face(GTK_FONT_CHOOSER(fontchooser));
  gtk_font_chooser_get_font_size(GTK_FONT_CHOOSER(fontchooser));

The ``get_font_family()`` method returns the name of the font in use, whereas the ``get_font_face()`` call returns any defined styling such as bold or italic. The ``get_font_size()`` method returns the set font size in point size.

The entire font string can be obtained via::

  gtk_font_chooser_get_font(GTK_FONT_CHOOSER(fontchooser));

A font is set onto the FontChooser by calling::

  gtk_font_chooser_set_font(GTK_FONT_CHOOSER(fontchooser), font);

The *font* should be set to a string such as "Droid Sans 18" or "Clear Sans Bold 10".

Preview text is used by the FontChooser family to display an example of the selected font settings. These are set to::

  gtk_font_chooser_set_preview_text(GTK_FONT_CHOOSER(fontchooser), text);

In some cases, it may be preferable to allow the user to customise the preview text with::

  gtk_font_chooser_set_show_preview_entry(GTK_FONT_CHOOSER(fontchooser), show);

=======
Example
=======
Please see the :doc:`fontbutton`, :doc:`fontchooserdialog` and :doc:`fontchooserwidget` for examples of FontChooser usage.
