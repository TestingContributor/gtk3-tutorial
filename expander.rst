Expander
========
The Expander widget provides a container with a title and associated area for child widgets to be added. The child area can be expanded or collapsed as required. It is common for the Expander to be used when in most cases the child contents will not be used.

A :doc:`revealer` widget also provides similar functionality.

===========
Constructor
===========
The constructor for the Expander is::

  GtkWidget *expander = gtk_expander_new(label);

Setting the *label* value sets the string to be displayed identifying the purpose of the Expander container.

If a mnemonic accelertor is to be used within the Expander label, use::

  GtkWidget *expander = gtk_expander_new_with_mnemonic(label);

=======
Methods
=======
The label displayed on the Expander is set with::

  gtk_expander_set_label(GTK_EXPANDER(expander), text);

A mnemonic should also be set on the label to aid accessibility. To enforce the use, set::

  gtk_extpander_set_use_underline(GTK_EXPANDER(expander), underline);

When *underline* is set to ``TRUE``, the character proceeding the underscore in the label will be used as the mnemonic.

Markup can also be applied to the label text and enabled by setting ``TRUE`` on::

  gtk_expander_set_use_markup(GTK_EXPANDER(expander), markup);

Rather than specifying a string, a :doc:`label` widget can be used instead::

  gtk_expander_set_label_widget(GTK_EXPANDER(expander), label);

The Expander can be programmatically opened or closed with::

  gtk_expander_set_expanded(GTK_EXPANDER(expander), expanded);

When *expanded* is set to ``TRUE``, the expander will be expanded and the child widget revealed.

The amount of space in pixels between the Expander label and the child can be set via::

  gtk_expander_set_spacing(GTK_EXPANDER(expander), spacing);

=======
Example
=======
Below is an example of an Expander:

.. literalinclude:: _examples/expander.c

Download: :download:`Expander <_examples/expander.c>`
