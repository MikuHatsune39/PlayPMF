# PlayPMF
Simple program that calls different versions of ffplay based on the pmf file.

<b> Install </b>
<br>
To install run PlayPMF_Install.exe and select the location without spaces in its name to extract to.
Once the files have been extracted, go to that location and in an admin command prompt run:
assoc .pmf=PSPVideo
and then
ftype PSPVideo=%CD%\PlayPMF.exe "%1"
these will set PlayPMF as the default program for .pmf files.
