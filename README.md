# Opti-Sentinel
Opti Sentinel: Your robotic partner in the field

![Image](https://hackster.imgix.net/uploads/attachments/1624937/_npNxPEia7V.blob?auto=compress%2Cformat&w=900&h=675&fit=min)

## INTRODUCTION

This innovative project involves the seamless integration of a robotic arm onto a versatile rover platform, presenting a sophisticated solution for object manipulation and precise positioning. Complementing this setup is the integration of the OAK-D camera, a cutting-edge component designed to elevate safety measures across diverse environments, with a particular focus on construction sites and tower stations.

The OAK-D camera, strategically mounted on the rover, boasts advanced features that transcend conventional safety protocols. Its capabilities extend to critical event detection, including fall detection, fire detection, and the identification of obstacles such as cones. These functionalities play a pivotal role in ensuring safety in environments where human presence may pose risks.

### 1.1. Overview

In essence, this pioneering combination of robotic capabilities and advanced camera technology transcends traditional safety measures, providing a cost-effective alternative to human presence in hazardous areas. The project not only revolutionizes safety protocols but also sets the stage for enhanced efficiency and responsiveness in dynamic and challenging environments.

The Intelligent Robotic Rover, incorporating the cutting-edge OAK-D Camera, stands as a pioneering initiative poised to redefine safety standards and operational efficiency in construction sites and tower stations. By seamlessly integrating advanced robotics, computer vision, and artificial intelligence technologies, this project emerges as a transformative solution to address a spectrum of safety and detection challenges, providing a holistic approach to site management.

**Robotic Arm:** At the core of this innovation is a versatile robotic arm, intelligently mounted on a mobile rover. This robotic arm exhibits capabilities for precise pick-and-place operations, adept object manipulation, and efficient handling tasks, contributing significantly to the project's multifaceted functionality.

**OAK-D Camera:** The OAK-D Camera, distinguished by its depth-sensing capabilities, takes center stage in facilitating safety-related functions within the project. This OpenCV AI Kit contributes to critical aspects such as fall detection, fire detection, and object recognition, leveraging its advanced features to enhance overall safety measures in dynamic environments.

This collaborative fusion of intelligent robotics and state-of-the-art camera technology not only redefines safety paradigms but also charts a course toward unparalleled operational efficiency in the realms of construction and tower station management.

### 1.2. Background

Ensuring strict adherence to safety regulations, such as the mandatory use of safety helmets and vests, is paramount at construction sites in Pakistan. To enforce these safety protocols consistently, periodic site inspections are conducted at various intervals. Trained personnel are assigned the responsibility of observing and confirming whether workers are complying with these safety measures. This proactive practice is implemented to not only verify individual worker compliance but also to guarantee the consistent application of safety measures across the entire construction site. By deploying personnel at different times, construction companies aim to create a robust system that upholds and reinforces a culture of safety among all workers, fostering a secure working environment.

### 1.3. Objectives

The primary objective of this groundbreaking project is to enhance safety measures in diverse environments, particularly focusing on construction sites and tower stations. By seamlessly integrating a robotic arm onto a versatile rover platform and incorporating the advanced OAK-D camera, the project aims to achieve precise object manipulation and positioning. The strategic placement of the OAK-D camera on the rover allows it to transcend conventional safety protocols, excelling in critical event detection such as fall detection, fire detection, and obstacle identification, including cones. The overarching goal is to reduce the reliance on human presence in environments where risks are inherent, thereby mitigating potential hazards and revolutionizing safety protocols for increased efficiency and responsiveness.

### 1.4. Problem

Construction firms in Pakistan grapple with a significant safety challenge, primarily associated with inspection procedures. The prevalent practice of deploying personnel to construction sites for inspections not only results in substantial expenses but also gives rise to safety apprehensions. Compounding the issue is the inadequate occupational safety and health legislation and infrastructure in Pakistan, further exacerbating the safety concerns. This dearth of proper safety measures contributes to a heightened prevalence of diseases and accidents in the workplace, presenting a distressing scenario for the workforce. A multitude of workers regularly confront unsafe conditions, significantly elevating the risk of infectious diseases and injuries within the construction industry of Pakistan. Consequently, addressing safety issues is not merely a cost-effective necessity but a crucial imperative for safeguarding the well-being of the country's workers.

### 1.5. Solution

Implementing state-of-the-art safety measures, such as deploying robotic systems equipped with advanced cameras can revolutionize the inspection process. Introducing Opti Sentinel, a cutting-edge robotic solution designed to revolutionize safety monitoring in construction sites. With its advanced capabilities, Opti Sentinel can efficiently monitor workers, distinguishing between those adhering to safety protocols and those who are not. What's more, the robot possesses the capability to fall detection—alerting the company immediately in case of an accident. Through its constant surveillance, Opti Sentinel offers construction companies an effective and consistent means of ensuring worker safety while mitigating costs associated with human inspections.

### 1.6. Applications

The Robotic Arm-Equipped Rover with OAK D Camera has a wide range of real-life applications across various industries. Here are some examples:

- Construction Industry
- Safety Monitoring
- Telecommunications and Tower Maintenance
- Tower Inspection
- Fire Detection and Monitoring
- Search and Rescue
- Agriculture and Remote Inspection
- Warehouse Automation
- Security and Surveillance

The versatility of the roborover is showcased through these applications, illustrating its capability to automate tasks across diverse industries. This, in turn, leads to heightened efficiency, decreased labor expenses, and enhanced safety across various environments.


## DESIGN AND IMPLEMENTATION

### 2.1. Designing

#### 2.1.1. Arduino Roborover

Creating an Arduino-based robot arm with Mecanum wheels for automatic operation, along with an OAK-D (OpenCV AI Kit with Depth) camera mounted on the rover, is a challenging but exciting project. This combination allows for advanced capabilities like computer vision and precise control. Here's a general outline:

1. **Hardware Setup:**
   - Assemble the Mecanum wheel platform with motors, wheels, and an Arduino-compatible microcontroller (such as an Arduino UNO).
   - Attach the robot arm to the platform.
   - Mount the OAK-D camera in a suitable location for the robot for a good field of view.

2. **Motor Control:**
   - By writing code, Mecanum wheels can be controlled. It’ll need to control the speed and direction of each wheel independently to achieve omnidirectional movement.
   - Implement motor control libraries or write own PWM control code for precise wheel movement.

3. **Robot Arm Control:**
   - Develop code to control the robot arm. Depending on the arm's design, It may need to control multiple servos or motors to achieve various arm movements (e.g., picking up objects, moving them, etc.).

#### 2.1.2. Implementation Procedure of OAK-D

##### 2.2.1. Arduino

The Arduino Uno is one of the most popular and widely used microcontroller boards in the Arduino family. It's a versatile and beginner-friendly platform that's ideal for a wide range of electronic projects. Here are the key specifications and features of the Arduino Uno:

1. **Microcontroller:**
   - The Arduino Uno is powered by the ATmega328P microcontroller, which is a part of the AVR family of microcontrollers.
   - Clock Speed: The ATmega328P operates at 16 MHz, providing relatively fast processing for various tasks.

2. **Memory:**
   - Flash Memory: The ATmega328P has 32 KB of flash memory for storing Arduino sketches (programs).
   - SRAM: It has 2 KB of SRAM (Static Random Access Memory) for storing variables and runtime data.
   - EEPROM: There's also 1 KB of EEPROM (Electrically Erasable Programmable Read-Only Memory) for non-volatile data storage.

3. **Operating Voltage:**
   - The Arduino Uno operates at 5 volts (V).

4. **USB Interface:**
   - The Uno can be connected to a computer or other devices via a built-in USB interface. This allows uploading sketches and communication with the board.

5. **Size and Form Factor:**
   - The Arduino Uno has a compact form factor, measuring approximately 68.6mm x 53.4mm, making it easy to fit into small projects and enclosures.

6. **Compatibility:**
   - The Uno is compatible with a wide range of sensors, actuators, shields, and other accessories designed for the Arduino platform.

7. **Programming:**
   - Arduino can be programmed using the Arduino IDE (Integrated Development Environment), which supports a simplified version of C/C++.

8. **Open Source:**
   - The Arduino platform is open-source, which means its hardware and software designs are freely available for modification and redistribution.

![Image](https://hackster.imgix.net/uploads/attachments/1655154/pic2_9V423mjNY4.png?auto=compress%2Cformat&w=740&h=555&fit=max)
##### 2.2.2. Raspberry Pi

The Raspberry Pi 4 is a popular single-board computer (SBC) developed by the Raspberry Pi Foundation. It was released in June 2019 and represents a significant improvement over its predecessors in terms of processing power, connectivity options, and overall capabilities. Here are the key details about the Raspberry Pi 4:

1. **Processor:**
   - The Raspberry Pi 4 is powered by a quad-core Broadcom BCM2711 processor based on the ARM Cortex-A72 architecture.
   - It is available in three different models with varying amounts of RAM: 2GB, 4GB, and 8GB LPDDR4-3200 SDRAM.

2. **Graphics:**
   - The Raspberry Pi 4 features a VideoCore VI graphics processor, which supports OpenGL ES 3.0 and H.265 (4Kp60 decode), H.264 (1080p60 decode, 1080p30 encode).
   - It supports dual-display output via HDMI 2.0 ports, with resolutions up to 4K.

3. **Connectivity:**
   - It includes two USB 3.0 ports and two USB 2.0 ports for connecting peripherals like keyboards, mice, and external storage devices.
   - Gigabit Ethernet (RJ-45) for wired network connectivity.
   - Dual-band 802.11ac wireless networking (Wi-Fi 5) and Bluetooth 5.0 for wireless connectivity.
   - GPIO (General-Purpose Input/Output) pins for hardware interfacing and expansion.

4. **Storage:**
   - The Raspberry Pi 4 supports microSD card storage for the operating system and data storage.
   - It also has two USB 3.0 ports for faster external storage options.

5. **Operating Systems:**
   - Raspberry Pi OS (formerly known as Raspbian) is the recommended operating system for the Raspberry Pi 4.
   - It can also run various other Linux distributions and even Windows 10 IoT Core.

6. **Power Supply:**
   - It requires a 5V micro USB-C power supply, typically rated at 3A for stable operation.

7. **Cooling:**
   - Due to increased performance, the Raspberry Pi 4 may generate more heat than previous models. Passive or active cooling solutions are often recommended for extended use.

8. **Audio:**
   - The Raspberry Pi 4 includes a 3.5mm audio jack for audio output and a two-pin header for connecting external speakers or amplifiers.

9. **GPIO Pins:**
   - It has a 40-pin GPIO header for interfacing with various sensors, actuators, and expansion boards.

10. **Accessories:**
    - There are numerous accessories available for the Raspberry Pi, including cases, power supplies, display screens, and camera modules.

11. **Software and Community:**
    - The Raspberry Pi has a vibrant and active community of developers and enthusiasts who create a wide range of software and projects.
    - It's a versatile platform for learning about programming, electronics, and DIY projects.
    
![Image](https://hackster.imgix.net/uploads/attachments/1655159/pic3_UISAVQLTA5.jpg?auto=compress%2Cformat&w=740&h=555&fit=max)
##### 2.2.3. OpenCV AI kit with Depth (OAK – D)

The OpenCV AI Kit with Depth, often abbreviated as OAK-D, is a powerful vision and depth-sensing device designed for computer vision and depth perception tasks. It is developed by Luxonis and builds upon the Myriad X VPU (Vision Processing Unit) from Intel. Here are some key features and details about the OAK-D:

1. **Depth Sensing:**
   - OAK-D is equipped with a stereo pair of global shutter cameras, which allows it to capture 3D depth information. It can perceive objects and their distances in the environment.

2. **Intel Myriad X VPU:**
   - The Intel Myriad X VPU is a dedicated neural network accelerator that enables fast and efficient deep learning inference. It can run deep learning models with low power consumption.

3. **RGB Cameras:**
   - In addition to depth sensing, OAK-D includes two high-resolution RGB cameras, which can capture color images and videos.

4. **Depth Accuracy:**
   - OAK-D provides depth data with sub-centimeter accuracy, making it suitable for a wide range of applications, including robotics, 3D mapping, and object detection.

5. **OpenCV Compatibility:**
   - OAK-D is designed to work seamlessly with OpenCV, a popular open-source computer vision library. This makes it easy for developers to integrate it into their projects and utilize OpenCV's extensive set of tools and algorithms.

6. **Connectivity:**
   - OAK-D can be connected to a host computer or embedded platform (e.g., Raspberry Pi, NVIDIA Jetson) via USB 3.0.

7. **Software Support:**
   - Luxonis provides software tools and libraries to work with OAK-D, including depth perception, object tracking, and depth mapping.
   - The Myriad X VPU supports popular deep learning frameworks like TensorFlow and Caffe.

8. **Applications:**
   - OAK-D is suitable for a wide range of applications, including:
     - Robotics and autonomous navigation.
     - Object detection and tracking.
     - Depth mapping and 3D reconstruction.
     - Gesture recognition.
     - Augmented reality (AR) and virtual reality (VR).
     - Spatial mapping and scene understanding.

9. **Customization:**
   - Developers can create custom computer vision applications by leveraging the depth and RGB data provided by OAK-D.

10. **Community and Documentation:**
    - Luxonis maintains a community and provides documentation, tutorials, and example projects to help developers get started with OAK-D.
    
![Image](https://hackster.imgix.net/uploads/attachments/1655170/pic4_SgPlrWzkPU.png?auto=compress%2Cformat&w=740&h=555&fit=max)


# 2.2.4. OAK-D Camera Integration

## 2.2.4.1. Advanced Vision Technology

The OAK-D camera, with its stereo depth perception and high-resolution imaging, provides the project with a comprehensive and accurate understanding of its surroundings. This is crucial for tasks requiring precise positioning and navigating complex environments.

## 2.2.4.2. Obstacle Identification

By combining OpenCV and the OAK-D camera, the system excels in identifying obstacles, including cones. This feature is vital for ensuring the safety of the robotic arm and rover as they navigate through challenging terrains or construction sites.

## 2.2.4.3. Real-time Data for Safety Measures

The OAK-D camera continuously captures high-quality images and depth information, allowing the system to react in real-time to safety-critical events. This instantaneous data flow is instrumental in executing rapid responses, especially in emergency situations.

# 2.3. Software

## 2.3.1. Open VINO

OpenVINO, or Open Visual Inference and Neural Network Optimization, is an open-source toolkit developed by Intel. It is designed to accelerate the development of computer vision and deep learning applications by optimizing them for Intel hardware, including CPUs, GPUs, VPUs (Vision Processing Units), and FPGAs (Field-Programmable Gate Arrays). OpenVINO provides a set of tools and libraries that allow developers to deploy deep learning models efficiently on Intel hardware platforms.

## 2.3.2. Depth AI

Depth AI is a term that refers to the field of artificial intelligence and computer vision, specifically focused on depth perception and 3D sensing. It involves the use of depth information to understand the 3D structure of a scene or objects within it. Depth AI technology typically combines various sensors and algorithms to achieve accurate depth perception, and it finds applications in a wide range of fields, including robotics, augmented reality, virtual reality, autonomous vehicles, and more.

## 2.3.3. Open CV

OpenCV, short for Open Source Computer Vision Library, is an open-source computer vision and machine learning software library. It provides a wide range of tools and algorithms for various computer vision tasks, making it a valuable resource for researchers, developers, and engineers working in fields such as robotics, image and video analysis, augmented reality, and more.

## 2.3.4. YOLO

YOLO (You Only Look Once) is a family of real-time object detection models that have gained significant popularity in the computer vision community due to their speed and accuracy.

### 2.3.4.1. YOLO V5

YOLOv5 is an open-source real-time object detection system. It is a significant update to the YOLO series and was released by Ultralytics in mid-2020. Some key features of YOLOv5 include:

- Improved speed and accuracy compared to previous versions.
- Simplicity and ease of use, making it accessible for a wide range of users.
- Support for various object detection tasks, including custom object detection.
- Designed with PyTorch, a popular deep learning framework, making it flexible and adaptable.

### 2.3.4.2. YOLO V8

- YOLOv8 is an advancement or refinement of the YOLO algorithm. It represents the eighth version of the YOLO model.
- It includes improvements, optimizations, and new features over previous versions, enhancing accuracy and speed.
- YOLOv8 is designed to be highly efficient and well-suited for real-time object detection tasks, making it suitable for a wide range of applications.

## 2.3.5. Arduino IDE

The Arduino IDE (Integrated Development Environment) is a software application used for writing, compiling, and uploading code to Arduino microcontroller-based development boards. It provides a user-friendly interface and a set of tools that simplify the process of programming and working with Arduino hardware.

## 2.3.6. App Development

![Image](https://hackster.imgix.net/uploads/attachments/1655204/pic8_A8UrFSplL7.png?auto=compress%2Cformat&w=740&h=555&fit=max)

Users can precisely control each servo or axis of the robot arm through application sliders. The "Save" button documents positions or steps, enabling automatic replication. It also serves to pause autonomous operations and offers the option to reset or erase saved steps for creating new sequences.

## RESULTS AND ANALYSIS

Opti Sentinel utilizes advanced vision technology to distinguish between workers adhering to safety protocols and those not in compliance. This continuous monitoring guarantees consistent safety practices among all workers. OpenCV facilitates advanced image processing and computer vision techniques, enabling the robotic arm to accurately manipulate and interact with objects. This capability enhances the project's overall functionality in tasks requiring precise object handling.

## 3.1. Fall Detection

OpenCV, when combined with the OAK-D camera, contributes to robust fall detection capabilities. Through image analysis, the system can swiftly identify anomalies, such as a person falling from height, triggering prompt responses and mitigating potential accidents.

![Image](https://hackster.imgix.net/uploads/attachments/1655173/pic5_XS86dMqTVe.jpg?auto=compress%2Cformat&w=740&h=555&fit=max)
## 3.2. Fire Detection

Leveraging OpenCV's image processing algorithms enhances the OAK-D camera's ability to detect flames in real-time. This not only ensures swift identification of fire outbreaks but also enables the system to take immediate preventive measures, bolstering safety protocols.

![Image](https://hackster.imgix.net/uploads/attachments/1655175/pic6_Is9Z2h5qCf.jpg?auto=compress%2Cformat&w=740&h=555&fit=max)
## 3.3. Cone Detection

With its advanced vision technology, Opti Sentinel can identify and signal the presence of obstacles like cones. This feature contributes to overall site safety by preventing potential tripping hazards and enhancing hazard awareness.

![Image](https://hackster.imgix.net/uploads/attachments/1655176/pic7_y63aq0VKzX.jpg?auto=compress%2Cformat&w=740&h=555&fit=max)

## DISCUSSION AND CONCLUSION

In the previous chapters, we presented the results of our research and conducted a thorough critical analysis of our work. In this section, we will highlight key findings and comparisons with established standards and other authoritative research.

## Speed

Both YOLOv8 and YOLOv5 are fast object detection models, capable of processing images in real-time. However, YOLOv8 is faster than YOLOv5, making it a better choice for applications that require real-time object detection.

## Accuracy

Accuracy is a critical factor to consider when choosing an object detection model. In this regard, YOLOv8 is more accurate than YOLOv5.

## Ease of use

Both YOLOv8 and YOLOv5 are easy to use, with YOLOv5 being the easiest to use of the two. YOLOv5 is built on the PyTorch framework, making it easy for developers to use and deploy.

When it comes to object detection, there are many models available. However, YOLOv8 and YOLOv5 are two of the most popular and state-of-the-art models created by Ultralytics.

Hence, we use YOLOv5 for fire detection, and YOLOv8 for fall detection and cone detection.

![Image](https://hackster.imgix.net/uploads/attachments/1655153/pic1_JTIMhUilQu.jpg?auto=compress%2Cformat&w=740&h=555&fit=max)



