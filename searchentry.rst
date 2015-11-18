SearchEntry
===========
The SearchEntry is a subclass of the :doc:`entry` widget, which is tailored for used to search for data within the application.

.. note::

  The SearchEntry widget derives most of its methods from the Entry. See the page covering the Entry widget for the methods to use.

===========
Constructor
===========
The constructor for the SearchEntry is::

  GtkWidget *searchentry = gtk_search_entry_new();

=======
Signals
=======
Although the ``"changed"`` signal can be used, it may be preferable to use the ``"search-changed"`` signal as this has a 150 millisecond delay after each text change.

A ``"previous-match"`` and ``"next-match"`` signal are provided to allow moving between previous and next matches in the search results. Each signal is also provided with an accelerator (:kbd:`CONTROL+SHIFT+G` and :kbd:`CONTROL+G` respectively).

Use of the ``"stop-search"`` signal also allows searches to be ended. The signal is also provided with the keybinding allowing :kbd:`Escape` on the keyboard to be used.

=======
Example
=======
Below is an example of a SearchEntry:

.. literalinclude:: _examples/searchentry.c

Download: :download:`SearchEntry <_examples/searchentry.c>`
