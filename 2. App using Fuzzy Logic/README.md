# Fall Detection & Alert Application using Fuzzy Logic

This repository contains the source code for a Fall Detection and Alert System designed using **Fuzzy logic** to enhance child safety during cycling. The app leverages embedded hardware sensors on an Android/iOS phone, acting as a smart IoT device, to monitor various parameters and provide real-time alerts to parents' devices.

## Features:

1. **Accelerometer Monitoring:**
   - Constantly monitors accelerometer data of the phone when the application is active to detect falls.

2. **Microphone Activation:**
   - Upon detecting a fall, activates the phone's microphone to measure the sound level in the vicinity.

3. **Danger Level Estimation:**
   - Utilizes fuzzy logic to assess the danger level based on both accelerometer readings and sound levels:
     - **Accelerometer Levels:**
       - Low: Minimal movement detected.
       - Medium: Moderate movement indicating a potential fall.
       - High: Significant movement indicative of a severe fall.
     - **Sound Levels:**
       - Low: Ambient noise level.
       - Medium: Elevated sound level.
       - High: Loud or distressing noises.

4. **Alert Transmission:**
   - If the danger level is assessed as High:
     - Sends an alert to another designated phone via TCP/IP or UDP network.
     - The alert includes:
       - Recorded sound from the microphone at the time of fall.
       - GPS location of the phone at the time of fall.

5. **Buzzer Alert:**
   - Plays a buzzer alarm on the first phone if the danger level is Medium or High.
     - The intensity of the buzzer sound corresponds to the assessed danger level:
       - Medium: Moderate intensity.
       - High: High intensity, indicating a more severe situation.


## Demonstration:

Check out the [demonstration video on YouTube](https://www.youtube.com/watch?v=qEZNYEAVPpE) to see the app in action.

## Collaborators:

1. Abhinav Goud: [Github]()
2. Akshat Barnval: [Github]()
