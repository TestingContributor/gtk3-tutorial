TextBuffer
==========
The TextBuffer object is invisible to the user, but is used to store the text and other information about the content being displayed in a :doc:`textview`.

.. note::

  When a TextView is created, a TextBuffer is automatically created with it. Therefore, a TextBuffer object is not usually required to be created manually.

===========
Constructor
===========
The construction of the TextBuffer is made via::

  GtkWidget *textbuffer = gtk_text_buffer_new();

=======
Methods
=======
Text can be added to the TextBuffer, overwriting the existing content::

  gtk_text_buffer_set_text(GTK_TEXT_BUFFER(textbuffer), text, length);

The *text* argument should be set to the string of text to be added. The *length* value can either be set to the length of the text being added, or ``-1`` if the length is unknown. If the specified length is shorter than the text parameter, the text string will be cut short.

Retrieval of the text content is done via::

  gtk_text_buffer_get_text(GTK_TEXT_BUFFER(textbuffer));

The number of characters and lines held by the TextBuffer can be fetched using::

  gtk_text_buffer_get_char_count(GTK_TEXT_BUFFER(textbuffer));
  gtk_text_buffer_get_line_count(GTK_TEXT_BUFFER(textbuffer));

To check whether the TextBuffer currently has any selected text, call::

  gtk_text_buffer_get_has_selection(GTK_TEXT_BUFFER(textbuffer));

A check can be performed on the TextBuffer to see whether it has been changed::

  gtk_text_buffer_get_modified(GTK_TEXT_BUFFER(textbuffer));

The ``get_modified()`` method returns ``TRUE`` if the content has changed since the ``set_modified()`` method was set to ``FALSE``.

The modification state of the TextBuffer can be set using::

  gtk_text_buffer_set_modified(GTK_TEXT_BUFFER(textbuffer), modified);

Selections are made on text typically to format text for underlining, increasing size, etc. The start and end :doc:`textiter` objects can be retrieved by calling::

  gtk_text_buffer_get_selection_bounds(GTK_TEXT_BUFFER(textbuffer), start, end);

Alternatively, the start and end iterators for the entire text can be found via::

  gtk_text_buffer_get_start_iter(GTK_TEXT_BUFFER(textbuffer), textiter);
  gtk_text_buffer_get_end_iter(GTK_TEXT_BUFFER(textbuffer), textiter);
