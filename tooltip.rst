Tooltip
=======
Tooltip widgets are used to primarily display text (but facilitate other content if required) when the user hovers over an interface element. They are used to describe the function of a widget.

=====
Basic
=====
Basic tooltips displaying a string of text are available for most widgets with the method::

  widget.set_tooltip_text(text)

===========
Constructor
===========
A Tooltip object can also be created which is able to see other widgets added::

  GtkWidget *tooltip = gtk_tooltip_new();

=======
Methods
=======
Tooltip text can also be set for displaying a string with::

  gtk_tooltip_set_text(GTK_TOOLTIP(tooltip), text);

Markup can also be added allowing for bold, italic and underlined text via::

  gtk_tooltip_set_markup(GTK_TOOLTIP(tooltip), markup);

Icons can be added to the Tooltip via two methods::

  gtk_tooltip_set_icon(GTK_TOOLTIP(tooltip), pixbuf);
  gtk_tooltip_set_icon_from_icon_name(GTK_TOOLTIP(tooltip), name);

The *pixbuf* object takes a GdkPixbuf for display. It can also be set to ``NULL`` if the icon is to be hidden. An icon can also be added via the *name* to load from the theme set.

A custom widget such as :doc:`grid` or :doc:`box` can also be added to facilitate the addition of more than one widget with::

  gtk_tooltip_set_custom(GTK_TOOLTIP(tooltip), custom);

========
Examples
========
Below is an example of a basic Tooltip:

.. literalinclude:: _examples/tooltipbasic.c

Download: :download:`Tooltip Basic <_examples/tooltipbasic.c>`

Alternatively, the advanced Tooltip is displayed below:

.. literalinclude:: _examples/tooltipadvanced.c

Download: :download:`Tooltip Advanced <_examples/tooltipadvanced.c>`
