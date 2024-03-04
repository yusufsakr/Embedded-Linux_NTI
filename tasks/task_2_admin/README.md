# Embedded Linux NTI - Task 2
NTI Embedded Linux Diploma Task 2 -> Implement Binary Search Algorithm usin VIM.

## Overview
The main Scope of this Task is unsing VIM Editor.

## Vim Commands
### Navigation Mode
It is the Initial Default Mode when opening the editor.

1) Navigate Using Arrows.
2) Navigate using Vi keys :
   * h -> Left
   * j -> Down
   * k -> Up
   * l -> Right
3) yy        -> Copy Whole Line.
4) x         -> Cut Character
5) p         -> Paste.
6) / + " "   -> Search for text.
7) n         -> Next Search Pattern.
8) N         -> Previous Search Pattern.
9) u         -> Undo.
10) ctrl + r -> Redo.
11) dd       -> Delete Line.
12) dw       -> Delete Word.
13) ds       -> Delete from the Cursor to the end of the Line.
14) b        -> Backward, Move the cursor to the begining of the Word.
15) 0        -> Cursor Jumps to the begining of the Line.
16) $        -> Cursor Jumps to the End of the Line.
17) gg       -> Cursor Jumps to the Beginning of the File.

### Editing Mode
Press "i" to switch to insert mode, where you can write in the file.
```
>> i
```
To exit the Editing Mode Just Press ESC btn.

### Command Mode
Press "Shift + ;" to enter the Command Mode.
```
>> :
```
1) :w             -> save
2) :w <file_name> -> save as new file
3) :q             -> quite
4) :q!            -> force quite, without saving
5) :wq            -> save + exit
6) :set hlsearch  -> Enable Highlite Search
7) :set numbers   -> display line numbers
8) :set nonumbers -> Disable line numbers
9) :set spell     -> Enable Spelling Check
10) :set nospell  -> Disable Spelling Check
11) :syntax on    -> Enable syntax highlight
13) :syntax off   -> Disable syntax Highlight
14) :e <file_name> -> Enable Python Syntax Formatter 


Best Wishes :)
