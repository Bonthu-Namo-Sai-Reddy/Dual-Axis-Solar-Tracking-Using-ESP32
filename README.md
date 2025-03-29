# 🔆 Dual Axis Solar Tracking System Using ESP32  
🌞 An intelligent solar tracking system that dynamically adjusts solar panel orientation in two axes, maximizing solar energy absorption using ESP32.

🚀 Project Overview  
This **Dual Axis Solar Tracking System** optimizes solar panel positioning by continuously tracking the sun's movement throughout the day. The system employs **Light Dependent Resistors (LDRs)** to detect sunlight intensity and **servo motors** to adjust the panel in both horizontal and vertical directions, ensuring maximum energy capture.  

🖼️Circuit Diagram  
![image](https://github.com/user-attachments/assets/d6563cd7-cec4-460e-82f3-4232d1c83e11)

🛠️ Features  
✔️ **Dual-Axis Tracking** – Adjusts both azimuth (horizontal) and elevation (vertical) angles for optimal sunlight exposure.  
✔️ **Real-time Sunlight Detection** – Uses LDR sensors to track the sun’s position.  
✔️ **Automated Panel Movement** – Servo motors dynamically reposition the panel.  
✔️ **ESP32-Based Control** – Wireless connectivity for potential IoT integration.  
✔️ **Efficient Energy Utilization** – Maximizes solar power output throughout the day.  

🔧 Components Used  
🔹 **ESP32** – Main microcontroller for system control.  
🔹 **LDR Sensors** – Detects sunlight direction and intensity.  
🔹 **Servo Motors (SG90)** – Adjusts panel positioning dynamically.  
🔹 **Solar Panel** – Captures solar energy for power generation(instead we used cardboard).  

⚙️ Working Principle  
1️⃣ **Sunlight Detection:** LDR sensors measure light intensity in different directions.  
2️⃣ **Angle Adjustment:** ESP32 processes sensor data and moves servo motors accordingly.  
3️⃣ **Panel Positioning:** The system continuously updates panel orientation to maximize solar exposure.  
4️⃣ **Energy Harvesting:** Optimized positioning increases solar power output throughout the day.  

🛠️ Installation & Setup  
🔹 **Step 1:** Assemble the circuit with ESP32, LDRs, and servo motors.  
🔹 **Step 2:** Load the provided Arduino code onto the ESP32.  
🔹 **Step 3:** Power the system using a regulated power supply or battery.  
🔹 **Step 4:** Test the setup by exposing the LDRs to different light angles.  

🔮 Future Enhancements  
✨ **IoT Integration:** Remotely monitor and control tracking via cloud platforms.  
✨ **Solar Energy Storage:** Implement efficient battery management for extended usage.  
✨ **Adaptive Algorithms:** Improve tracking efficiency using AI-based predictive models.  

📜 License  
📌 This project is open-source under the GNU General Public License v3.0 License.  
