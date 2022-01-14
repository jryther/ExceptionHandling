# ExceptionHandling

**Overview**

You are a senior software developer on a team of software developers who are responsible for a large banking web application. Your manager has learned that there is some code that seems to terminate abruptly, crashing to the desktop without any warnings or information displayed to the user. The other developers spent a lot of time tracing down the issue, and they narrowed it down to some suspect code. However, the decision was made not to change the suspect code, and instead to capture the errors in the code and display appropriate errors to the user instead of just crashing to the desktop. The other developers know this would require using exceptions, but they are not sure what to do. They have asked you to help.

**Prompt**

You will learn to do the following:

Create an exception try-block, which will wrap code that can potentially throw exceptional errors
Catch an exception derived from std::exception
Catch all unhandled exceptions
Throw a standard C++ exception
Create, throw, and catch a custom exception
The following are a few key notes:

The source code has been commented using TODO to explain the detailed rules you must follow.
While it is possible to throw exceptions not derived from std::exception, do not do this. It is an anti-pattern and a bad practice.
Do not forget that you can leverage capabilities provided by the standard C++ library to help you achieve success.
Please comment on any changes you make in the code to explain your intent. You will also create a brief written summary on whether the C++ exception catch-all handler is a good or bad idea and why, any issues you encountered, and how you resolved those issues.

Specifically, prepare the following in a static testing summary:

Exceptions Coding: Complete the coding activity by successfully implementing a custom exception class; throwing custom and standard exceptions; implementing standard, custom, and catch-all catch handlers; and displaying a message to the user including the exception message text (what() method) whenever an exception is caught.
C/C++ Program Functionality and Best Practices: Demonstrate industry standard best practices, including in-line comments and appropriate naming conventions to enhance readability of code, and develop functional C/C++ code that illustrates software design pattern approach.
Summary of Process: Provide a summary of the debugging that is thorough and systematic, including specific types of bugs, and that accurately describes the corrections.
