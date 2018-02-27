# gettimestamp
Returns the current UTC date and time as a single string suitable for use in a filename

Example

```dosbatch
FOR /F "tokens=*" %%I IN ('gettimestamp') DO @SET TIMESTAMP=%%I

7za.exe a -r -tzip "%TIMESTAMP% Documents.zip" "%USERPROFILE%\Documents\*"
```

produces a file called

`2017-02-26T17-01-27Z Documents.zip`
