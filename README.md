# Smart Bicycle Monitoring App

This repository contains the source code for a Smart Bicycle Monitoring App designed to enhance child safety during cycling. The app leverages embedded hardware sensors on an Android/iOS phone, acting as a smart IoT device, to monitor various parameters and provide real-time alerts to parents' devices.

## Features:

1. **Real-time Monitoring:**
   - Continuously monitors GPS, accelerometer, and gyroscope data to detect over speed, fall, and boundary crossing events.

2. **Alerts and Notifications:**
   - Plays a beep alarm sound on the cyclist's device (Phone A) for over speed, boundary crossing, and fall detection.
   - Displays real-time location on the parents' device (Phone B) using Google Maps and plays a beep sound.

3. **Fall Detection:**
   - Implements advanced fall detection algorithms to distinguish actual falls from false detections like bumps or braking.

4. **Emergency Response:**
   - Initiates an alarm on the cyclist's device (Phone A) with an option to switch it off.
   - If the alarm is not switched off within 5 seconds, activates the microphone and camera, starts recording, and sends an SOS to the parents' device (Phone B) with recorded sound and images via the mobile internet network.

## Demonstration:

Check out the [demonstration video on YouTube](https://www.youtube.com/watch?v=wltbPszcKK8) to see the app in action.

## Collaborators:

1. Jiya Desai: [Github](https://github.com/Jiya-desai)
2. Nishi Shah: [Github](https://github.com/nishishah05)
