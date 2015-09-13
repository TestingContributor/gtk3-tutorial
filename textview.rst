TextView
========
A TextView is suited to the display and entry of medium-to-large amounts of text. The widget is complex, but provides a large number of features such as alignment, text colour, underlining, italicising, margins, and much more.

.. note::

  For short lengths of text, the :doc:`entry` widget is typically much more suitable for use.

===========
Constructor
===========
Construction of the TextView widget is made using::

  GtkWidget *textview = gtk_text_view_new();

A :doc:`textbuffer` widget can be constructed at the same time with::

  GtkWidget *textview = gtk_text_view_new_with_buffer(textbuffer);

The *textbuffer* parameter should be set to the :doc:`textbuffer` widget which will hold the text data.

=======
Methods
=======
A TextBuffer can also be attached post-construction via::

  gtk_text_view_set_buffer(GTK_TEXT_VIEW(textview), textbuffer);

The TextBuffer is also retrievable with::

  gtk_text_view_get_buffer(GTK_TEXT_VIEW(textview));

In some cases, the TextView will only be used to display text, preventing the user from editing. This can be configured using::

  gtk_text_view_set_editable(GTK_TEXT_VIEW(textview), editable);

When the *editable* argument is set to ``FALSE``, the user will not be able to change text held in the TextView.

Coinciding with the editability of the TextView, the cursor visibility can also be toggled::

  gtk_text_view_set_cursor_visible(GTK_TEXT_VIEW(textview), visible);

The *visible* parameter should be set to ``FALSE`` if the ``set_editable()`` method is ``FALSE``.

By default, the text contained within the TextView is not wrapped. This can be configured by::

  gtk_text_view_set_wrap_mode(GTK_TEXT_VIEW(textview), wrap_mode);

The *wrap_mode* should be set to::

* ``GTK_WRAP_NONE`` - no wrapping.
* ``GTK_WRAP_CHAR`` - wrap characters, breaking anywhere.
* ``GTK_WRAP_WORD`` - wrap text, breaking lines between words.
* ``GTK_WRAP_WORD_CHAR`` - wrap text, breaking lines between words, and then characters if also required.

Layout of the text can be defined via::

  gtk_text_view_set_justification(GTK_TEXT_VIEW(textview), justification);

The *justification* argument should be set to::

* ``GTK_JUSTIFY_LEFT``
* ``GTK_JUSTIFY_RIGHT``
* ``GTK_JUSTIFY_CENTER``
* ``GTK_JUSTIFY_FILL``

The default setting is to allow text to be inserted. Overwrite mode can be enabled instead by using::

  gtk_text_view_set_overwrite(GTK_TEXT_VIEW(textview), overwrite);

When the *overwrite* argument is set to ``TRUE``, as the user types, any existing text will be overwritten character-by-character.

A margin can be defined in pixels with::

  gtk_text_view_set_left_margin(GTK_TEXT_VIEW(textview), margin);
  gtk_text_view_set_right_margin(GTK_TEXT_VIEW(textview), margin);
  gtk_text_view_set_top_margin(GTK_TEXT_VIEW(textview), margin);
  gtk_text_view_set_bottom_margin(GTK_TEXT_VIEW(textview), margin);

=======
Example
=======
Below is an example of a TextView:

.. literalinclude:: _examples/textview.c

Download: :download:`TextView <_examples/textview.c>`
