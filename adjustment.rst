Adjustment
==========
The invisible Adjustment object provides a store for values used with widgets such as the :doc:`spinbutton`, :doc:`scale`, :doc:`scalebutton` or :doc:`scrollbar`. It provides options to configure the minimum and maximum allowable values and increments.

===========
Constructor
===========
The construction method for the Adjustment is::

  GtkWidget *adjustment = gtk_adjustment_new(value, lower, upper, step_increment, page_increment, page_size);

The *value* is the initial number which the Adjustment starts with. The *lower* and *upper* values are the limits which the Adjustment allows. A *step_increment* is the standard number which the value is adjusted by whereas the *page_increment* value is the major number to adjust by. The *page_size* is only used by some widgets and determines the viewable area. In most cases, this will be set to ``0`` as it is not required.

=======
Methods
=======
The value held by the Adjustment can be set using the method::

  gtk_adjustment_set_value(GTK_ADJUSTMENT(adjustment), value);

Retrieval of the value from the Adjustment is made using::

  gtk_adjustment_get_value(GTK_ADJUSTMENT(adjustment));

The value defined at construction can also be set or changed while running with the methods::

  gtk_adjustment_set_lower(GTK_ADJUSTMENT(adjustment), lower);
  gtk_adjustment_set_upper(GTK_ADJUSTMENT(adjustment), upper);
  gtk_adjustment_set_step_increment(GTK_ADJUSTMENT(adjustment), step_increment);
  gtk_adjustment_set_page_increment(GTK_ADJUSTMENT(adjustment), page_increment);
  gtk_adjustment_set_page_size(GTK_ADJUSTMENT(adjustment), page_size);

If required, the Adjustment settings can also be fetched individually with::

  gtk_adjustment_get_lower(GTK_ADJUSTMENT(adjustment));
  gtk_adjustment_get_upper(GTK_ADJUSTMENT(adjustment));
  gtk_adjustment_get_step_increment(GTK_ADJUSTMENT(adjustment));
  gtk_adjustment_get_page_increment(GTK_ADJUSTMENT(adjustment));
  gtk_adjustment_get_page_size(GTK_ADJUSTMENT(adjustment));

Values on the Adjustment can also be changed using a single method. This prevents multiple calls of the ``"changed"`` signal. The values are set using::

  gtk_adjustment_configure(GTK_ADJUSTMENT(adjustment), value, lower, upper, step_increment, page_increment, page_size);

=======
Signals
=======
Commonly used signals of the Adjustment object are::

  "changed" (adjustment)
  "value-changed" (adjustment)

The ``"changed"`` signal is emitted from the Adjustment whenever a value other the set value is changed. Alternatively, the ``"value-changed"`` signal only emits when the set value is changed.

=======
Example
=======
An example of an Adjustment in use can be seen with other widgets such as SpinButton, Scale, ScaleButton, or Scrollbar.
