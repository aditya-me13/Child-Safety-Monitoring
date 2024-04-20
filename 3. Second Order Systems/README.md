# MATLAB Transfer Function Analysis App

## Key Features

1. **Real-Time Plotting:**
   - Displays the following plots in real-time within a single window:
     - Unit step response
     - Pole-zero diagram
     - Bode plot
   - Plots are dynamically updated as the slider values for damping ratio, natural frequency, and gain are adjusted.

2. **Slider Controls:**
   - Provides sliders to vary the parameters of the standard second-order transfer function:
     - Damping ratio (\(\delta\)): Controls the damping of the system.
     - Natural frequency of oscillation (\(\omega_n\)): Determines the frequency of oscillation.
     - Gain (\(K\)): Adjusts the overall gain of the system.

3. **Transfer Function Calculation:**
   - Utilizes MATLAB's built-in functions to calculate the transfer function based on the slider values.
   - The transfer function is of the form: \(G(s) = \frac{K \cdot \omega_n^2}{s^2 + 2 \cdot \delta \cdot \omega_n \cdot s + \omega_n^2}\).

4. **Unit Step Response Plot:**
   - Displays the response of the system to a unit step input.
   - Allows users to observe the system's behavior in response to a sudden change.

5. **Pole-Zero Diagram:**
   - Illustrates the locations of poles and zeros of the transfer function in the complex plane.
   - Provides insights into stability and frequency response characteristics.

6. **Bode Plot:**
   - Shows the frequency response of the system.
   - Provides information about magnitude and phase response across different frequencies.

7. **Interactive Interface:**
   - Users can interactively adjust the slider values to observe the effects on the system's response.
   - Enables intuitive exploration and understanding of transfer function dynamics.

## Usage
- Launch the MATLAB Transfer Function Analysis App.
- Adjust the sliders for damping ratio, natural frequency, and gain to modify the transfer function parameters.
- Observe the real-time updates in the unit step response, pole-zero diagram, and Bode plot.
- Analyze the system's behavior and response characteristics based on the plotted data.

## Demonstration:

Check out the [demonstration video on YouTube](https://youtu.be/fA2nxhroGQ0) to see the app in action.

## Collaborators:

1. Abhinav Goud: [Github]()
2. Akshat Barnwal: [Github]()
