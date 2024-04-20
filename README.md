# Txt File View
<!--Version 1 Build Image: ![image](https://github.com/JusDooEt/txt-File-View/assets/152052216/2fb2df57-a2d7-4630-9335-1b3b7ba67657)-->
![image](https://github.com/JusDooEt/txt-File-View/assets/152052216/2f9a8ea0-ae21-4fbe-a47a-58b88ff301df)

## Newest Additions
- The files are now sorted by the date they were last modified. The order will be from newest to oldest files.
- The date the file was last modified is now displayed under the file's name in the UI.
- A constant member variable called MAX_FILES has been added to allow the developer to control how many files to display in the UI.
## About
this program is meant to be used as a template for other projects that require a Qt widget class that can display multiple .txt files in a chosen directory and their contents. This class can easily be converted to look for csv file etc as long as the contents of the files is text. To use this program, create a directory (folder) named "txtFiles" in the build folder of your Qt project. Then, add all the files you want the program to read and display into the newly created "txtFiles" folder. You can also set the program to create new .txt files within this folder that can also be read by this class.

## Class Design
![image](https://github.com/JusDooEt/txt-File-View/assets/152052216/df0c95bb-c1e4-49ca-88bd-9f8849882043)

## Constructors
- explicit FileView(QWidget *parent = nullptr)
  - This constructor will initialize the ui class member and create the UI.
  - It will also initialize the path member to the current application working directory.
  - The constructor will also set the widget geometry to match the parent widget.
  - Next, the functions createList() and initializeFileListWidget() are called to initialize the fileNames member and the list widget component in the UI.
  - Finally, signals and slots used in the class are connected.

- FileView(QWidget *parent, QDir path)
  - This constructor is similar to the constructor above, but the parent does not have a default value and the path member will be initialized to the path passed through the constructor's arguments.
  - All other initializations are the same as the previous constructor.

## Methods
### Public Slots
- void createList()
  - This method is meant to initialize the "fileNames" QFileInfoList member with file information of files within the "txtFiles" directory. If the directory is not found then the method will output an error message to the console and exit the method before searching for any files.
  - The QFileInfoList will be sorted based on file date values. Newest files will be at the front of the list.
- void initializeFileListWidget‎()
  - This method uses the "fileNames" member to add interactable items representing individual files to the list widget component in the UI with the text matching the file's name. 
- void onDisplayContents(QString fileName)
  - This method reads all of the text of the file matching the file name passed through "fileName". The text is then displayed to the text edit component in the UI.
### Private Slots
- void on_fileList_clicked(const QModelIndex &index)
  - This method is executed when one of the items contained in the list widget component is clicked.
  - The method emits a signal that executes onDisplayContents(QString fileName).
  - The correct fileName is sent depending on the index of the item that was clicked. 

