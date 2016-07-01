LinkButton
==========
A LinkButton has the appearance of a standard :doc:`button` widget, but is typically used for linking to websites from within the application. The LinkButton provides a text identifier which is underlined and highlighted in blue to signify a link.

===========
Constructor
===========
The LinkButton is constructed using::

  GtkWidget *linkbutton = gtk_link_button_new(uri);

The *uri* parameter should be set to the website which the LinkButton links to. Alternatively, a label can also be defined at construction with::

  GtkWidget *linkbutton = gtk_link_button_new_with_label(uri, label);

.. note::

  If no label is specified, the LinkButton will simply use the specified uri as the label.

=======
Methods
=======
The textual label displayed to the user with::

  gtk_link_button_set_label(GTK_BUTTON(linkbutton), label);

The link which the LinkButton links to can be set via::

  gtk_link_button_set_uri(GTK_LINK_BUTTON(linkbutton), uri);

Checking whether the LinkButton address has been visited is retrievable using::

  gtk_link_button_get_visited(GTK_LINK_BUTTON(linkbutton));

=======
Signals
=======
The commonly used signals of an LinkButton are::

  "activate-link" (linkbutton)

An ``"activate-link"`` signal is emitted when the user clicks on the LinkButton. By default, clicking on the LinkButton opens a web browser but the signal can be used to cause another function with custom behaviour to be run.

=======
Example
=======
Below is an example of a LinkButton:

.. literalinclude:: _examples/linkbutton.c

Download: :download:`LinkButton <_examples/linkbutton.c>`
