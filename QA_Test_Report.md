# QA Test Report — Arduino LED Blinking System

## 1. Project Details
- **Project:** Arduino LED Blinking System
- **Course:** Project Management
- **Course Code:** 230746T
- **Board:** Arduino Uno
- **Testing Environment:** Wokwi Simulator
- **Repository:** Arduino-LED-Blinking-QA

## 2. Testing Objective
To verify that the Arduino Uno built-in LED blinks correctly, check its approximate ON/OFF timing, identify a deliberately introduced defect, and verify the correction.

## 3. Test Results

| Test ID | Test Description | Expected Result | Actual Result | Status |
|---|---|---|---|---|
| TC01 | Run original LED blinking code | Built-in L LED blinks repeatedly | L LED blinked repeatedly in Wokwi | Pass |
| TC02 | Check LED ON/OFF timing | Approximately 1 second ON and 1 second OFF | Timing appeared approximately 1 second ON and 1 second OFF | Pass |
| TC03 | Observe for visible simulation errors | LED continues blinking without a visible error | LED continued blinking; no error was visible on screen | Pass |
| TC04 | Test incorrect pin configuration (`LED_PIN 12`) | Built-in L LED should not blink | L LED did not blink | Defect reproduced |
| TC05 | Verify corrected pin (`LED_PIN 13`) | Built-in L LED should blink again | L LED started blinking again | Pass |

## 4. Defect Details
- **GitHub Issue:** #1
- **Title:** Bug: Built-in LED does not blink when LED_PIN is set to 12
- **Label:** bug
- **Root Cause:** The built-in L LED on the Arduino Uno is connected to digital pin 13, but the defective code used pin 12.
- **Correction:** Changed `LED_PIN` back to 13.
- **Verification:** The built-in L LED resumed blinking after the correction.
- **Issue Status:** Closed

## 5. Evidence
Screenshots were captured during the Wokwi simulation:
- `TC01_Baseline_LED_Blinking.png`
- `TC02_LED_Timing.png`
- `TC04_Defect_Wrong_Pin.png`
- `TC05_Fix_Verification.png`

The screenshots are uploaded to the repository's `evidence/` folder.

## 6. Testing Limitation
Testing was performed using the Wokwi simulator. The results demonstrate simulated behavior and do not represent testing on a physical Arduino Uno board. The timing check was a visual observation, not a precision measurement.

## 7. Conclusion
The original LED blinking program worked as expected in the Wokwi simulation. A wrong-pin defect was deliberately introduced, reproduced, documented in GitHub Issue #1, corrected, and verified. The test results demonstrate a basic quality assurance process involving testing, defect reporting, root-cause identification, correction, and retesting.
