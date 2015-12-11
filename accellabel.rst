AccelLabel
==========
The AccelLabel is similar to a standard :doc:`label`, but also displays an accelerator on the right of the text.

===========
Constructor
===========
The AccelLabel is constructed with the call::

  GtkWidget *accellabel = gtk_accel_label_new();

=======
Methods
=======
The text label can be set on the AccelLabel using the same method as a standard Label::

  gtk_accel_label_set_label(GTK_ACCEL_LABEL(accellabel), text);

The widget to be monitored by the AccelLabel for its accelerator is set using::

  gtk_accel_label_set_accel_widget(GTK_ACCEL_LABEL(accellabel), widget);

Retrieval of the monitored widget is also possible using::

  gtk_accel_label_get_accel_widget(GTK_ACCEL_LABEL(accellabel));

An accelerator can also be set manually on the AccelLabel via::

  gtk_accel_label_set_accel(GTK_ACCEL_LABEL(accellabel), key, modifier);

The *key* defines the key value such as the letter or number to be used as the accelerator. The *modifier* defines the activating key such as :kbd:`Control` or :kbd:`Shift`.

=======
Example
=======
Below is an example of a AccelLabel:

.. literalinclude:: _examples/accellabel.c

Download: :download:`AccelLabel <_examples/accellabel.c>`
