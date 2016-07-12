Entry
=====
The Entry widget provides a way to input and display short amounts of text. It is commonly used for text input such as usernames, addresses, websites, etc.

===========
Constructor
===========
The Entry widget can be constructed with::

  GtkWidget *entry = gtk_entry_new();

An Entry can also be constructed with an associated :doc:`entrybuffer` object::

  GtkWidget *entry = gtk_entry_new_with_buffer(entrybuffer);

=======
Methods
=======
Text is retrieved from the Entry via the method::

  gtk_entry_get_text(GTK_ENTRY(entry));

Programatically setting the text within the widget can also be done with::

  gtk_entry_set_text(GTK_ENTRY(entry), text);

Text can be inserted into specific positions via::

  gtk_entry_insert_text(GTK_ENTRY(entry), text, length, position);

The *text* value is the string of text to be inserted. The *length* parameter is the length of the new text being inserted, however in most cases using ``-1`` is sufficient; as GTK+ will automatically calculate the length. Finally, the *position* parameter will specify the location in number of characters where the text will be placed.

Removal of text from the Entry can be done via::

  gtk_entry_delete_text(GTK_ENTRY(entry), start, end);

The *start* and the *end* values indicate the range of characters to be removed.

An EntryBuffer or :doc:`entrycompletion` widget can be defined after construction with the calls::

  gtk_entry_set_buffer(GTK_ENTRY(entry), entrybuffer);
  gtk_entry_set_completion(GTK_ENTRY(entry), entrycompletion);

The EntryBuffer and EntryCompletion objecets defined can also be retrieved with::

  gtk_entry_get_buffer(GTK_ENTRY(entry));
  gtk_entry_get_completion(GTK_ENTRY(entry));

A range of characters held by the Entry can be retrieved with the method::

  gtk_entry_get_chars(GTK_ENTRY(entry), start, end);

The *start* and *end* parameters specify the start and end of the range to fetch.

The maximum number of characters which can be accepted by the Entry can be limited with::

  gtk_entry_set_max_length(GTK_ENTRY(entry), maximum);

If the contents of the Entry are set to longer than the *maximum* length allows, the text will be truncated.

The Entry widget can also be used to enter passwords. It is good practice to mask the input and this can be done via::

  gtk_entry_set_visibility(GTK_ENTRY(entry), visibility);

When the *visibility* password is set to ``TRUE``, alternative characters are added in place of the characters.

The character used to mask the password by default is an asterisk. This can be changed with::

  gtk_entry_set_invisible_char(GTK_ENTRY(entry), character);

By default, when an Entry is focused, the text within the Entry is selected. In cases where the user is not likely to want to replace all the text, an alternative function can be used to provide focus but not select the text::

  gtk_entry_grab_focus_without_selecting(GTK_ENTRY(entry));

In some cases, it is preferable to have the Entry perform an action when the user presses :kbd:`Enter`. Commonly this would be a continue function in a dialog::

  gtk_entry_set_activates_default(GTK_ENTRY(entry), activates);

If *activates* is set to ``TRUE``, when the user presses :kbd:`enter` or :kbd:`return` while the Entry is in focus, the default action for the Window will be run. Typically, this is used in :doc:`dialog` widgets.

Placeholder text can be used to signify the purpose of the Entry with::

  gtk_entry_set_placeholder_text(GTK_ENTRY(entry), text);

When *text* is entered for display as the placeholder, it is only shown when the Entry is empty.

A useful function for web browsers or other widgets which load content is to display a progress bar within the Entry::

  gtk_entry_set_progress_fraction(GTK_ENTRY(entry), fraction);

The *fraction* value is a number between ``0.0`` and ``1.0`` indicating 0% and 100% respectively.

If required, the progress fraction can also be retrieved::

  gtk_entry_get_progress_fraction(GTK_ENTRY(entry));

The width of Entry in characters can be specified using the method::

  gtk_entry_set_width_chars(GTK_ENTRY(entry), width);

By default, text typed in the Entry is inserted prior to any existing text. It can however be made to overwrite existing text with::

  gtk_entry_set_overwrite_mode(GTK_ENTRY(entry), overwrite);

An Entry supports placing icons to the left (primary) or right (secondary) of the text content::

  gtk_entry_set_icon_from_icon_name(GTK_ENTRY(entry), position, icon_name);
  gtk_entry_set_icon_from_pixbuf(GTK_ENTRY(entry), position, pixbuf);
  gtk_entry_set_icon_from_gicon(GTK_ENTRY(entry), position, gicon);

The *icon_name* parameter is based on the list of icons supported by GTK+. Alternatively, a *pixbuf* can be defined which would typically be used to load a custom image. Alternatively a GIcon object can be defined which can be created by defining a path to a custom icon. The *position* value should be set to either::

* ``GTK_ENTRY_ICON_PRIMARY``
* ``GTK_ENTRY_ICON_SECONDARY``

Icons can also be made insensitive to prevent an action::

  gtk_entry_set_icon_sensitive(GTK_ENTRY(entry), position, sensitive);

When *sensitive* is set to ``false``, the icon specified will appear greyed-out.

If an icon has been specified, tooltip text can also be set describing the function of the icon.

  gtk_entry_set_icon_tooltip_text(GTK_ENTRY(entry), position, tooltip);
  gtk_entry_set_icon_tooltip_markup(GTK_ENTRY(entry), position, tooltip);

The ``set_icon_tooltip_text()`` takes plain text only. Alternatively, styled text can be specified using ``set_icon_tooltip_markup()``.

The purpose of the Entry can be defined, and is particularly useful for users of onscreen keyboards. This is set with the method::

  gtk_entry_set_input_purpose(GTK_ENTRY(entry), purpose);

The *purpose* argument should be set to one of:

* ``GTK_INPUT_PURPOSE_FREE_FORM``
* ``GTK_INPUT_PURPOSE_ALPHA``
* ``GTK_INPUT_PURPOSE_DIGITS``
* ``GTK_INPUT_PURPOSE_NUMBER``
* ``GTK_INPUT_PURPOSE_PHONE``
* ``GTK_INPUT_PURPOSE_URL``
* ``GTK_INPUT_PURPOSE_EMAIL``
* ``GTK_INPUT_PURPOSE_NAME``
* ``GTK_INPUT_PURPOSE_PASSWORD``
* ``GTK_INPUT_PURPOSE_PIN``

Hints are also available which allow the input to be tailored as required. This is done via::

  gtk_entry_set_input_hints(GTK_ENTRY(entry), hints);

The *hints* value can be set to one of:

* ``GTK_INPUT_HINT_NONE`` - no special behaviour.
* ``GTK_INPUT_HINT_SPELLCHECK`` - suggest spell checking for errors.
* ``GTK_INPUT_HINT_NO_SPELLCHECK`` - suggest no spell checking takes place.
* ``GTK_INPUT_HINT_WORD_COMPLETION`` - suggestion word completion should be used.
* ``GTK_INPUT_HINT_LOWERCASE`` - suggest to lowercase all text.
* ``GTK_INPUT_HINT_UPPERCASE_CHARS`` - suggest to capitalise all text.
* ``GTK_INPUT_HINT_UPPERCASE_WORDS`` - suggest to capitalise first letter in all words.
* ``GTK_INPUT_HINT_UPPERCASE_SENTENCES`` - suggest to capitalise first word in each sentence.
* ``GTK_INPUT_HINT_INHIBIT_OSK`` - suggest onscreen keyboard not be shown.
* ``GTK_INPUT_HINT_VERTICAL_WRITING`` - text is vertical.

=======
Example
=======
Below is an example of an Entry:

.. literalinclude:: _examples/entry.c

Download: :download:`Entry <_examples/entry.c>`
