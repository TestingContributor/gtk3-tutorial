MessageDialog
=============
The MessageDialog is used to convey messages to the user about the state of a process. It is commonly used to ask questions, warn about issues, or display encountered errors.

===========
Constructor
===========
The MessageDialog can be constructed using::

  messagedialog = gtk_message_dialog_new(parent, flags, type, buttons, text);

If the MessageDialog is to display formatted text, another constructor can be used::

  messagedialog = gtk_message_dialog_new_with_markup(parent, flags, type, buttons, text);

Both calls take on a number of arguments. The first is the *parent* which is set to the parent :doc:`window` or :doc:`dialog` which owns the MessageDialog. The *flags* parameter determines some of the features of the dialog and is able to be set to:

* ``GTK_DIALOG_MODAL``
* ``GTK_DIALOG_DESTROY_WITH_PARENT`` - close the dialog when the parent is closed.
* ``GTK_DIALOG_USE_HEADER_BAR`` - create dialog with actions in the header bar rather than the action area.

The *type* parameter indicates the purpose of the MessageDialog and should be set to one of:

* ``GTK_MESSAGE_INFO`` - display information message type.
* ``GTK_MESSAGE_WARNING`` - display warning message type.
* ``GTK_MESSAGE_QUESTION`` - display question message type.
* ``GTK_MESSAGE_ERROR`` - display error message type.
* ``GTK_MESSAGE_OTHER`` - display other message type which does not match the above.

Buttons can also be configured at construction time with:

* ``GTK_BUTTONS_NONE``
* ``GTK_BUTTONS_OK``
* ``GTK_BUTTONS_CLOSE``
* ``GTK_BUTTONS_CANCEL``
* ``GTK_BUTTONS_YES_NO``
* ``GTK_BUTTONS_OK_CANCEL``

Finally, the text to display can also be set with the *text* argument set to the string to show.

=======
Methods
=======
Text with (and without) markup can be set on the MessageDialog using::

  gtk_message_dialog_set_markup(GTK_MESSAGE_DIALOG(messagedialog), text);

If a more detailed explaination of the MessageDialog content is required, use::

  gtk_message_dialog_format_secondary_text(GTK_MESSAGE_DIALOG(messagedialog), text);
  gtk_message_dialog_format_secondary_markup(GTK_MESSAGE_DIALOG(messagedialog), markup);

The *text* and *markup* parameters specify the message to be displayed. If the text should have special formatting such as italics or underlining, the ``format_secondary_markup()`` method should be used. Typically, when a secondary text line is used, the primary text is increased in size and made bold.

Additional content can be added to the message area of the dialog by retrieving the child :doc:`box` container::

  gtk_message_dialog_get_message_area(GTK_DIALOG(messagedialog));

A button can be added to the MessageDialog with the call::

  gtk_message_dialog_add_button(GTK_DIALOG(messagedialog), text, response);
  gtk_message_dialog_add_buttons(GTK_DIALOG(messagedialog), text, response, ...);

The *text* value specifies the label to be displayed on the button. An associated *response* is provided which is emitted when the button is clicked. If the ``add_buttons()`` method is used, multiple buttons can be added to the MessageDialog.

An alternative widget such as :doc:`checkbutton` can be added to the MessageDialog with the function::

  gtk_message_dialog_add_action_widget(GTK_DIALOG(messagedialog), child, response);

In some cases, a button on the MessageDialog should be made insensitive. This is done with::

  gtk_message_dialog_set_response_sensitive(GTK_DIALOG(messagedialog), response, sensitive);

The *response* defines the button to be made insensitive. The *sensitive* parameter should be set to ``FALSE`` if the button should be "greyed-out".

A default response can be defined with::

  gtk_message_dialog_set_default_response(GTK_DIALOG(messagedialog), response);

The default response defines which button will respond to pressing the :kbd:`Enter` or :kbd:`Return` buttons by default.

Retrieval of the widget for a defined response value can be done with::

  gtk_message_dialog_get_widget_for_response(GTK_DIALOG(messagedialog), response);

=======
Example
=======
Below is an example of a MessageDialog:

.. literalinclude:: _examples/messagedialog.c

Download: :download:`MessageDialog <_examples/messagedialog.c>`
