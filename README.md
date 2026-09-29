# Arduino-Based LED Blinking System

## 1. Project Overview

This project demonstrates a basic embedded system using Arduino Uno to control an LED through digital output operations.

The project is developed as part of the Project Management course activity titled "GitHub-Based QA Documentation and Problem Solving based on Electronics/Cross Domain Projects".

The project also demonstrates the use of GitHub for source code management, quality assurance documentation, issue tracking, and problem resolution.

## 2. Project Objectives

- To understand basic embedded system programming.
- To control an LED using an Arduino digital output pin.
- To create and manage a GitHub repository.
- To document software defects and QA issues.
- To perform root cause analysis and implement corrective actions.
- To understand project tracking using GitHub.

## 3. Hardware and Software Requirements

### Hardware
- Arduino Uno
- USB cable
- Built-in LED on Arduino Uno

### Software and Tools
- Arduino IDE
- Embedded C/C++
- GitHub
- GitHub Issues

## 4. Components Used

| Component | Description |
|---|---|
| Arduino Uno | Microcontroller development board |
| Built-in LED | LED connected to digital pin 13 |
| USB Cable | Used for programming and power supply |

## 5. Working Principle

The Arduino configures digital pin 13 as an output pin. The program turns the LED ON for 1000 milliseconds and then turns it OFF for another 1000 milliseconds.

This operation is repeated continuously using the loop() function.

### Expected Output
- LED remains ON for 1 second.
- LED remains OFF for 1 second.
- The sequence repeats continuously.

## 6. Source Code Description

The program uses the following Arduino functions:

| Function | Purpose |
|---|---|
| pinMode() | Configures the LED pin as output |
| digitalWrite() | Controls the LED ON/OFF state |
| delay() | Provides a time delay in milliseconds |
| setup() | Initializes the output pin |
| loop() | Repeats the LED blinking operation |

The complete source code is available in Arduino-LED-Blinking-QA.ino.

## 7. Quality Assurance and Testing

Quality assurance is an important part of embedded system development.

The project uses GitHub Issues to document identified problems, investigate their root causes, record corrective actions, and track verification.

The following areas are considered for testing:

- LED pin configuration
- LED blinking interval
- LED ON/OFF operation
- Source code documentation

Testing results and issue resolution details will be documented as the QA activity progresses.

## 8. GitHub Repository Structure

Arduino-LED-Blinking-QA/
|
|-- Arduino-LED-Blinking-QA.ino
|
|-- README.md

## 9. GitHub Features Used

- Repository: To maintain the project files.
- README: To document the project.
- Issues: To report and track QA problems.
- Commits: To maintain a history of modifications.
- Labels: To categorize issues.
- Project Board: To organize and track project tasks.

## 10. Course Information

| Particular | Details |
|---|---|
| Course | Project Management |
| Course Code | 230746T |
| Activity | GitHub-Based QA Documentation and Problem Solving |
| Department | E&TC Engineering |
| Academic Year | 2026-2027 |
| Course Outcome | CO2 |

## 11. Conclusion

This project provides practical experience in embedded system programming and GitHub-based project management.

It demonstrates how collaborative development tools can be used to maintain source code, document quality assurance issues, perform root cause analysis, and track corrective actions.

The activity highlights the importance of systematic documentation, issue tracking, and version control in electronics and cross-domain engineering projects.
