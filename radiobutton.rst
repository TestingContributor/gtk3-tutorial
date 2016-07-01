RadioButton
===========
The RadioButton provides the ability to group multiple RadioButton widgets, with only one able to be selected at any one time.

===========
Constructor
===========
The constructor call for the RadioButton without a label string is::

  GtkWidget *radiobutton = gtk_radio_button_new();

A string can be added at construction using::

  GtkWidget *radiobutton = gtk_radio_button_new_with_label(label);

An accelerator can also be declared at construction with::

  GtkWidget *radiobutton = gtk_radio_button_new_with_mnemonic(label);

=======
Methods
=======
The first RadioButton in a group is often used as the lead, with all other RadioButton widgets referencing the lead to join them to the group. This is done via::

  gtk_radio_button_join_group(radiobutton, source);

The *source* parameter should reference the variable holding the first RadioButton. If ``NULL`` is declared, the RadioButton will not be added to a group, or will be removed from any defined group.

The RadioButton assigned to a group can be retrieved with::

  gtk_radio_button_get_group(GTK_RADIO_BUTTON(radiobutton));

A RadioButton can be made active using::

  gtk_radio_button_set_active(GTK_RADIO_BUTTON(radiobutton), active);

When *active* is set to ``TRUE``, the defined RadioButton will be selected.

The active RadioButton is also retrievable by::

  gtk_radio_button_get_active(GTK_RADIO_BUTTON(radiobutton));

Assigning a label to the widget post-construction can be done by calling::

  gtk_radio_button_set_label(GTK_RADIO_BUTTON(radiobutton), label);

=======
Signals
=======
The commonly used signals of a RadioButton are::

  "toggled" (radiobutton)
  "group-changed" (radiobutton)

A ``"toggled"`` signal emits from the RadioButton when the mode is changed to active or inactive. When using this signal, you will need to check which RadioButton is receiving the active or inactive state. This is down to the ``"toggled"`` signal being emitted twice; once for the RadioButton becoming active and again for the RadioButton becoming inactive. The ``"group-changed"`` signal emits whenever a RadioButton changes which group it belongs to.

=======
Example
=======
Below is an example of a RadioButton:

.. literalinclude:: _examples/radiobutton.c

Download: :download:`RadioButton <_examples/radiobutton.c>`
