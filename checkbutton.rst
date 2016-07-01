CheckButton
===========
A CheckButton is displayed in two parts, a state box and an associated label identifying the purpose of the CheckButton. The CheckButton is often used to identify on/off states such as preference settings.

===========
Constructor
===========
The constructor for the CheckButton widget without a label is::

  GtkWidget *checkbutton = gtk_check_button_new();

A label can be attached to the CheckButton at construction time using::

  GtkWidget *checkbutton = gtk_check_button_new_with_label(label);

An accelerator can also be defined at construction using the call::

  GtkWidget *checkbutton = gtk_check_button_new_with_mnemonic(label);

=======
Methods
=======
The state can be set programatically via::

  gtk_button_set_active(GTK_TOGGLE_BUTTON(checkbutton), state);

The *state* argument accepts ``TRUE`` to tick the CheckButton, or ``FALSE`` for the unticked state.

Retrieving the state of the CheckButton is done via the method::

  gtk_button_get_active(GTK_TOGGLE_BUTTON(checkbutton));

In some cases, it may be useful to display an inconsistent state. This is typically used in conjunction with other CheckButton widgets, where varying states on the others will activate the inconsistent state. This is set with::

  gtk_button_set_inconsistent(GTK_TOGGLE_BUTTON(checkbutton), inconsistent);

To retrieve the inconsistent state call::

  gtk_button_get_inconsistent(GTK_TOGGLE_BUTTON(checkbutton));

The label on the CheckButton is customisable post-construction with::

  gtk_button_set_label(GTK_BUTTON(checkbutton), text);

=======
Signals
=======
The commonly used signals of a CheckButton are::

  "toggled" (checkbutton)

A ``"toggled"`` signal emits from the CheckButton when the mode is changed to active or inactive.

=======
Example
=======
Below is an example of a CheckButton:

.. literalinclude:: _examples/checkbutton.c

Download: :download:`CheckButton <_examples/checkbutton.c>`
