FileChooser
===========
The FileChooser is shared by the :doc:`filechooserdialog`, :doc:`filechooserbutton` and :doc:`filechooserwidget`. Each of the methods listed are available for the widgets.

=======
Methods
=======
The function of the FileChooser can be set with::

  gtk_file_chooser_set_action(GTK_FILE_CHOOSER(filechooser), action);

The *action* parameter should be set to one of tthe following:

* ``GTK_FILE_CHOOSER_ACTION_OPEN`` - set the FileChooser into open mode, allowing the user to pick a single existing file.
* ``GTK_FILE_CHOOSER_ACTION_SAVE`` - set the FileChooser into save mode, allowing the user to select an existing file to overwrite or enter a new filename.
* ``GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER`` - set the FileChooser into folder select mode, allowing the user to select an existing folder.
* ``GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER`` - set the FileChooser into folder create mode, allowing the user to create a new folder or overwrite an existing one.

By default, the FileChooser only permits a single file or folder to be selected. This can be changed using::

  gtk_file_chooser_set_select_multiple(GTK_FILE_CHOOSER(filechooser), multiple);

When *multiple* is set to ``TRUE``, the user is able to hold down :kbd:`Control` and select each file or folder to add them to the selection. The setting only applies however when the action mode is ``GTK_FILE_CHOOSER_ACTION_OPEN`` or ``GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER``.

A pre-entered name for the file such as "Untitled Document" can be entered programatically with::

  gtk_file_chooser_set_current_name(GTK_FILE_CHOOSER(filechooser), name);

The currently selected filename and URI can also be obtained with the methods::

  gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(filechooser));
  gtk_file_chooser_get_uri(GTK_FILE_CHOOSER(filechooser));

Alternatively, if the FileChooser is allowed to select multiple files, the methods below are required to obtained multiple items::

  gtk_file_chooser_get_filenames(GTK_FILE_CHOOSER(filechooser));
  gtk_file_chooser_get_uris(GTK_FILE_CHOOSER(filechooser));

Rather than simply returning a path, a GFile object representing the file can also be retrieved::

  gtk_file_chooser_get_file(GTK_FILE_CHOOSER(filechooser));
  gtk_file_chooser_get_files(GTK_FILE_CHOOSER(filechooser));

When opening the FileChooser, the initial starting folder can be specified by passing the filepath::

  gtk_file_chooser_set_current_folder(GTK_FILE_CHOOSER(filechooser), filepath);

A :doc:`filefilter` object can added or removed from the FileChooser with the methods::

  gtk_file_chooser_add_filter(GTK_FILE_CHOOSER(filechooser), filefilter);
  gtk_file_chooser_remove_filter(GTK_FILE_CHOOSER(filechooser), filefilter);

When the action mode is set to ``GTK_FILE_CHOOSER_ACTION_SAVE``, the user can be queried on whether they wish to overwrite an existing file or not via::

  gtk_file_chooser_set_do_overwrite_confirmation(GTK_FILE_CHOOSER(filechooser), confirm);

If *confirm* is set to ``FALSE``, the existing file will be overwritten without any confirmation from the user.

When using any other action mode than ``GTK_FILE_CHOOSER_ACTION_OPEN``, the FileChooser can be configured as to whether it will offer to create new folders. This is set with::

  gtk_file_chooser_set_create_folders(GTK_FILE_CHOOSER(filechooser), create);

=======
Example
=======
Please see the :doc:`filechooserbutton`, :doc:`filechooserdialog` and :doc:`filechooserwidget` for examples of ColorChooser usage.
