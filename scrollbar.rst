Scrollbar
=========
A Scrollbar is commonly provided to allow movement around a widget which is smaller than the window which contains it. Typically, a :doc:`scrolledwindow` is used instead to provide the scrolling automatically, however a Scrollbar can be used for further control.

===========
Constructor
===========
The constructor for the Scrollbar is::

  GtkWidget *scrollbar = gtk_scrollbar_new(orientation, adjustment);

The *orientation* value specifies the way in which the Scrollbar will be placed and should be set to either:

* ``GTK_ORIENTATION_HORIZONTAL``
* ``GTK_ORIENTATION_VERTICAL``

An :doc:`adjustment` should be specified for the *adjustment*, which is used to contain the values relating to the current scroll position.
