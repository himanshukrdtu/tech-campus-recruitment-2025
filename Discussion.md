# Discussion: Log Extraction Utility

## Overview
This project is a C++ utility designed to extract logs from a log file based on a user-specified date. The extracted logs are saved to a separate output file. The program is particularly useful for analyzing logs of specific dates from large log files.

## Features
- Reads logs from a specified file.
- Extracts log entries that match the provided date.
- Saves the extracted logs into a separate file.
- Provides error handling for missing files and incorrect usage.
- Displays messages indicating whether logs were found for the given date.

## Implementation Details
### Input
- The program takes a single command-line argument, which represents the date (YYYY-MM-DD) for which logs need to be extracted.
- The log file is hardcoded as `logs_2024.log` in the given directory.
- The output file is stored in the `output` folder with the filename as `YYYY-MM-DD.txt`.

### Process
1. Opens the log file for reading.
2. Opens the output file for writing.
3. Reads the log file line by line and checks if a line starts with the given date.
4. If a match is found, the line is written to the output file.
5. Closes both input and output files.
6. Displays a message indicating whether logs were found and saved.

### Output
- If logs are found for the given date, they are saved in `output/YYYY-MM-DD.txt`.
- If no logs are found, the user is informed via the console.

## Error Handling
- If the log file does not exist, an error message is displayed.
- If the output file cannot be created, an error message is shown.
- If an incorrect number of arguments is provided, a usage message is displayed.


