This project leverages the ESP8266 microcontroller to create an IoT-based network health monitoring device. The ESP8266 continuously pings key devices or servers on the network to measure latency and packet loss, providing real-time diagnostics. The results are visualized using an OLED display or RGB LED indicators, offering insights into network stability and performance. This project demonstrates expertise in networking concepts, IoT development, and real-time data processing.

How It Works:

The ESP8266 connects to a predefined Wi-Fi network.
It sends ICMP Echo (ping) requests to a target host (e.g., a server, gateway, or DNS).
The responses are analyzed to determine latency (round-trip time) and packet loss percentage.
Results are displayed on an OLED screen or RGB LEDs for quick assessment.

Key Features:

Network Diagnostics: Measures latency and detects connectivity issues.
Real-Time Monitoring: Updates every few seconds for continuous feedback.
IoT Integration: Portable and easy to deploy across multiple networks.
Extensibility: Can be enhanced to include multiple test hosts or additional parameters like jitter.

Applications:

Monitoring home or office network performance.
Troubleshooting IoT device connectivity issues.
Educational tool for understanding ICMP and network latency.
