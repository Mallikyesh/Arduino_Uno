# Arduino_Uno

Projects with Arduino, Breadboard, Sensors

1. Sequential LED control
   Devices used: 3 resistors (330 ohms each) , 3 LED's of different colors, Male to male jumper wires, Arduino, 9v power adapter

   The ground of arduino is connected to the negative branch of breadboard
   One branch of Resistors are connected parallel (along) negative branch

   LED -> positive and negative , negative is connected to the resistor
   Write the code and upload it to arduino, disconnect the C cable and use the power adapter to see the working of the program.



2. Parking sensor


Components needed:
Breadboard
Arduino Uno
Jumper wires (Male to Male and Female to Male)
3xLED
3x 220 ohm resistor (Use resistor color code to find the resistor)
Ultrasonic sensor HC-SR04



Connections
[Uploading Incredible Sango-Vihelmo.b<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="9.7.0">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="50" unitdist="mil" unit="mil" style="lines" multiple="1" display="no" altdistance="5" altunitdist="mil" altunit="mil"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="yes" active="yes"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="yes" active="yes"/>
<layer number="17" name="Pads" color="2" fill="1" visible="yes" active="yes"/>
<layer number="18" name="Vias" color="2" fill="1" visible="yes" active="yes"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="yes" active="yes"/>
<layer number="20" name="Dimension" color="24" fill="1" visible="yes" active="yes"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="yes" active="yes"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="yes" active="yes"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="yes" active="yes"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="yes" active="yes"/>
<layer number="25" name="tNames" color="7" fill="1" visible="yes" active="yes"/>
<layer number="26" name="bNames" color="7" fill="1" visible="yes" active="yes"/>
<layer number="27" name="tValues" color="7" fill="1" visible="yes" active="yes"/>
<layer number="28" name="bValues" color="7" fill="1" visible="yes" active="yes"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="yes"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="yes"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="yes"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="yes"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="yes"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="yes"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="yes"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="yes"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="yes"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="yes"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="yes" active="yes"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="yes" active="yes"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="yes" active="yes"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="yes" active="yes"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="yes" active="yes"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="yes"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="yes"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="yes"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="yes"/>
<layer number="48" name="Document" color="7" fill="1" visible="yes" active="yes"/>
<layer number="49" name="Reference" color="7" fill="1" visible="yes" active="yes"/>
<layer number="50" name="dxf" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="7" fill="1" visible="yes" active="yes"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="yes" active="yes"/>
<layer number="53" name="tGND_GNDA" color="7" fill="1" visible="no" active="no"/>
<layer number="54" name="bGND_GNDA" color="7" fill="1" visible="no" active="no"/>
<layer number="56" name="wert" color="7" fill="1" visible="no" active="no"/>
<layer number="57" name="tCAD" color="7" fill="1" visible="no" active="no"/>
<layer number="59" name="tCarbon" color="7" fill="1" visible="no" active="no"/>
<layer number="60" name="bCarbon" color="7" fill="1" visible="no" active="no"/>
<layer number="88" name="SimResults" color="9" fill="1" visible="no" active="no"/>
<layer number="89" name="SimProbes" color="9" fill="1" visible="no" active="no"/>
<layer number="90" name="Modules" color="5" fill="1" visible="no" active="no"/>
<layer number="91" name="Nets" color="2" fill="1" visible="no" active="no"/>
<layer number="92" name="Busses" color="1" fill="1" visible="no" active="no"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="no"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="no" active="no"/>
<layer number="95" name="Names" color="7" fill="1" visible="no" active="no"/>
<layer number="96" name="Values" color="7" fill="1" visible="no" active="no"/>
<layer number="97" name="Info" color="7" fill="1" visible="no" active="no"/>
<layer number="98" name="Guide" color="6" fill="1" visible="no" active="no"/>
<layer number="99" name="SpiceOrder" color="7" fill="1" visible="no" active="no"/>
</layers>
<board>
<plain>
<wire x1="0" y1="0" x2="95.48300693491842" y2="0" width="0" layer="20"/>
<wire x1="95.48300693491842" y1="0" x2="95.48300693491842" y2="174.0701371742112" width="0" layer="20"/>
<wire x1="95.48300693491842" y1="174.0701371742112" x2="0" y2="174.0701371742112" width="0" layer="20"/>
<wire x1="0" y1="174.0701371742112" x2="0" y2="0" width="0" layer="20"/>
</plain>
<libraries>
<library name="Tinkercad">
<packages>
<package name="28015" urn="urn:adsk.eagle:footprint:32384639/2"><description>&lt;b&gt;PIN HEADER&lt;/b&gt;</description><wire x1="-3.175" y1="1.27" x2="-1.905" y2="1.27" width="0.1524" layer="21"/><wire x1="-1.905" y1="1.27" x2="-1.27" y2="0.635" width="0.1524" layer="21"/><wire x1="-1.27" y1="0.635" x2="-1.27" y2="-0.635" width="0.1524" layer="21"/><wire x1="-1.27" y1="-0.635" x2="-1.905" y2="-1.27" width="0.1524" layer="21"/><wire x1="-1.27" y1="0.635" x2="-0.635" y2="1.27" width="0.1524" layer="21"/><wire x1="-0.635" y1="1.27" x2="0.635" y2="1.27" width="0.1524" layer="21"/><wire x1="0.635" y1="1.27" x2="1.27" y2="0.635" width="0.1524" layer="21"/><wire x1="1.27" y1="0.635" x2="1.27" y2="-0.635" width="0.1524" layer="21"/><wire x1="1.27" y1="-0.635" x2="0.635" y2="-1.27" width="0.1524" layer="21"/><wire x1="0.635" y1="-1.27" x2="-0.635" y2="-1.27" width="0.1524" layer="21"/><wire x1="-0.635" y1="-1.27" x2="-1.27" y2="-0.635" width="0.1524" layer="21"/><wire x1="-3.81" y1="0.635" x2="-3.81" y2="-0.635" width="0.1524" layer="21"/><wire x1="-3.175" y1="1.27" x2="-3.81" y2="0.635" width="0.1524" layer="21"/><wire x1="-3.81" y1="-0.635" x2="-3.175" y2="-1.27" width="0.1524" layer="21"/><wire x1="-1.905" y1="-1.27" x2="-3.175" y2="-1.27" width="0.1524" layer="21"/><wire x1="1.27" y1="0.635" x2="1.905" y2="1.27" width="0.1524" layer="21"/><wire x1="1.905" y1="1.27" x2="3.175" y2="1.27" width="0.1524" layer="21"/><wire x1="3.175" y1="1.27" x2="3.81" y2="0.635" width="0.1524" layer="21"/><wire x1="3.81" y1="0.635" x2="3.81" y2="-0.635" width="0.1524" layer="21"/><wire x1="3.81" y1="-0.635" x2="3.175" y2="-1.27" width="0.1524" layer="21"/><wire x1="3.175" y1="-1.27" x2="1.905" y2="-1.27" width="0.1524" layer="21"/><wire x1="1.905" y1="-1.27" x2="1.27" y2="-0.635" width="0.1524" layer="21"/><wire x1="-22.86" y1="1.27" x2="-22.86" y2="5.08" width="0.127" layer="21"/><wire x1="-22.86" y1="5.08" x2="22.86" y2="5.08" width="0.127" layer="21"/><wire x1="22.86" y1="5.08" x2="22.86" y2="1.27" width="0.127" layer="21"/><wire x1="22.86" y1="1.27" x2="20.32" y2="1.27" width="0.127" layer="21"/><wire x1="20.32" y1="1.27" x2="3.81" y2="1.27" width="0.127" layer="21"/><wire x1="3.81" y1="1.27" x2="-3.81" y2="1.27" width="0.127" layer="21"/><wire x1="-3.81" y1="1.27" x2="-20.32" y2="1.27" width="0.127" layer="21"/><wire x1="-20.32" y1="1.27" x2="-22.86" y2="1.27" width="0.127" layer="21"/><wire x1="-20.32" y1="1.27" x2="-20.32" y2="-11.43" width="0.127" layer="21"/><wire x1="-20.32" y1="-11.43" x2="-3.81" y2="-11.43" width="0.127" layer="21"/><wire x1="-3.81" y1="-11.43" x2="-3.81" y2="1.27" width="0.127" layer="21"/><wire x1="3.81" y1="1.27" x2="3.81" y2="-11.43" width="0.127" layer="21"/><wire x1="3.81" y1="-11.43" x2="20.32" y2="-11.43" width="0.127" layer="21"/><wire x1="20.32" y1="-11.43" x2="20.32" y2="1.27" width="0.127" layer="21"/><pad name="1" x="-2.54" y="0" drill="1.016" shape="long" rot="R90"/><pad name="2" x="0" y="0" drill="1.016" shape="long" rot="R90"/><pad name="3" x="2.54" y="0" drill="1.016" shape="long" rot="R90"/><text x="0" y="5.715" size="1.27" layer="25" ratio="10" align="bottom-center">&gt;NAME</text><text x="0" y="-3.175" size="1.27" layer="27" align="top-center">&gt;VALUE</text><text x="-2.54" y="-1.651" size="0.6096" layer="21" align="top-center">GND</text><text x="0" y="-1.651" size="0.6096" layer="21" align="top-center">5V</text><text x="2.54" y="-1.651" size="0.6096" layer="21" align="top-center">SIG</text><text x="0" y="3.175" size="1.778" layer="21" align="center">ULTRASONIC DISTANCE SENSOR</text><rectangle x1="-0.254" y1="-0.254" x2="0.254" y2="0.254" layer="51"/><rectangle x1="-2.794" y1="-0.254" x2="-2.286" y2="0.254" layer="51"/><rectangle x1="2.286" y1="-0.254" x2="2.794" y2="0.254" layer="51"/></package>
<package name="ARDUINO-UNO-R3-SHIELD" urn="urn:adsk.eagle:footprint:32092365/2"><description>&lt;h3&gt;Arduino Uno-Compatible Footprint&lt;/h3&gt;
No holes, no ICSP connections.
&lt;p&gt;Specifications:
&lt;ul&gt;&lt;li&gt;Pin count: 32&lt;/li&gt;
&lt;li&gt;Pin pitch: 0.1"&lt;/li&gt;
&lt;li&gt;Area:2.1x2.35"&lt;/li&gt;
&lt;/ul&gt;&lt;/p&gt;
&lt;p&gt;Example device(s):
&lt;ul&gt;&lt;li&gt;Arduino Uno R3 Shield&lt;/li&gt;
&lt;/ul&gt;&lt;/p&gt;</description><wire x1="-24.13" y1="-29.21" x2="-17.17" y2="-29.21" width="0.254" layer="51"/><wire x1="-17.17" y1="-29.21" x2="-4.97" y2="-29.21" width="0.254" layer="51"/><wire x1="-4.97" y1="-29.21" x2="24.13" y2="-29.21" width="0.254" layer="51"/><wire x1="24.13" y1="-29.21" x2="26.67" y2="-26.67" width="0.254" layer="51"/><wire x1="26.67" y1="27.94" x2="24.13" y2="27.94" width="0.254" layer="51"/><wire x1="24.13" y1="27.94" x2="21.59" y2="30.48" width="0.254" layer="51"/><wire x1="-26.67" y1="26.67" x2="-26.67" y2="-26.67" width="0.254" layer="51"/><wire x1="-26.67" y1="-26.67" x2="-24.13" y2="-29.21" width="0.254" layer="51"/><wire x1="21.59" y1="30.48" x2="-11.43" y2="30.48" width="0.254" layer="51"/><wire x1="-11.43" y1="30.48" x2="-13.97" y2="27.94" width="0.254" layer="51"/><wire x1="-13.97" y1="27.94" x2="-25.4" y2="27.94" width="0.254" layer="51"/><wire x1="-25.4" y1="27.94" x2="-26.67" y2="26.67" width="0.254" layer="51"/><wire x1="26.67" y1="-26.67" x2="26.67" y2="27.94" width="0.254" layer="51"/><wire x1="-17.17" y1="-44.71" x2="-4.97" y2="-44.71" width="0.254" layer="51"/><wire x1="13.53" y1="-39.51" x2="22.53" y2="-39.51" width="0.254" layer="51"/><wire x1="-17.17" y1="-44.71" x2="-17.17" y2="-29.21" width="0.254" layer="51"/><wire x1="-4.97" y1="-44.71" x2="-4.97" y2="-29.21" width="0.254" layer="51"/><wire x1="13.53" y1="-39.51" x2="13.53" y2="-29.31" width="0.254" layer="51"/><wire x1="22.53" y1="-39.51" x2="22.53" y2="-29.31" width="0.254" layer="51"/><wire x1="-25.4" y1="26.67" x2="-22.86" y2="26.67" width="0.127" layer="51"/><wire x1="-22.86" y1="26.67" x2="-22.86" y2="6.35" width="0.127" layer="51"/><wire x1="-22.86" y1="6.35" x2="-25.4" y2="6.35" width="0.127" layer="51"/><wire x1="-25.4" y1="6.35" x2="-25.4" y2="26.67" width="0.127" layer="51"/><wire x1="-25.4" y1="5.08" x2="-22.86" y2="5.08" width="0.127" layer="51"/><wire x1="-22.86" y1="5.08" x2="-22.86" y2="-20.32" width="0.127" layer="51"/><wire x1="-22.86" y1="-20.32" x2="-25.4" y2="-20.32" width="0.127" layer="51"/><wire x1="-25.4" y1="-20.32" x2="-25.4" y2="5.08" width="0.127" layer="51"/><wire x1="22.86" y1="-11.43" x2="25.4" y2="-11.43" width="0.127" layer="51"/><wire x1="25.4" y1="-11.43" x2="25.4" y2="8.89" width="0.127" layer="51"/><wire x1="25.4" y1="8.89" x2="22.86" y2="8.89" width="0.127" layer="51"/><wire x1="22.86" y1="8.89" x2="22.86" y2="-11.43" width="0.127" layer="51"/><wire x1="25.4" y1="11.43" x2="22.86" y2="11.43" width="0.127" layer="51"/><wire x1="22.86" y1="11.43" x2="22.86" y2="26.67" width="0.127" layer="51"/><wire x1="22.86" y1="26.67" x2="25.4" y2="26.67" width="0.127" layer="51"/><wire x1="25.4" y1="26.67" x2="25.4" y2="11.43" width="0.127" layer="51"/><wire x1="-4.445" y1="24.13" x2="-5.08" y2="24.765" width="0.254" layer="51"/><wire x1="-5.08" y1="24.765" x2="-5.08" y2="28.575" width="0.254" layer="51"/><wire x1="-5.08" y1="28.575" x2="-4.445" y2="29.21" width="0.254" layer="51"/><wire x1="-4.445" y1="29.21" x2="1.905" y2="29.21" width="0.254" layer="51"/><wire x1="1.905" y1="29.21" x2="2.54" y2="28.575" width="0.254" layer="51"/><wire x1="2.54" y1="28.575" x2="2.54" y2="24.765" width="0.254" layer="51"/><wire x1="2.54" y1="24.765" x2="1.905" y2="24.13" width="0.254" layer="51"/><wire x1="1.905" y1="24.13" x2="-4.445" y2="24.13" width="0.254" layer="51"/><wire x1="-3.175" y1="23.622" x2="-4.445" y2="23.622" width="0.2032" layer="51"/><pad name="RES" x="24.13" y="-5.08" drill="1.016" diameter="1.8796" rot="R90"/><pad name="3.3V" x="24.13" y="-2.54" drill="1.016" diameter="1.8796" rot="R90"/><pad name="5V" x="24.13" y="0" drill="1.016" diameter="1.8796" rot="R90"/><pad name="GND@0" x="24.13" y="2.54" drill="1.016" diameter="1.8796" rot="R90"/><pad name="GND@1" x="24.13" y="5.08" drill="1.016" diameter="1.8796" rot="R90"/><pad name="VIN" x="24.13" y="7.62" drill="1.016" diameter="1.8796" rot="R90"/><pad name="A0" x="24.13" y="12.7" drill="1.016" diameter="1.8796" rot="R90"/><pad name="A1" x="24.13" y="15.24" drill="1.016" diameter="1.8796" rot="R90"/><pad name="A2" x="24.13" y="17.78" drill="1.016" diameter="1.8796" rot="R90"/><pad name="A3" x="24.13" y="20.32" drill="1.016" diameter="1.8796" rot="R90"/><pad name="A4" x="24.13" y="22.86" drill="1.016" diameter="1.8796" rot="R90"/><pad name="A5" x="24.13" y="25.4" drill="1.016" diameter="1.8796" rot="R90"/><pad name="RX" x="-24.13" y="25.4" drill="1.016" diameter="1.8796" rot="R90"/><pad name="TX" x="-24.13" y="22.86" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D2" x="-24.13" y="20.32" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D3" x="-24.13" y="17.78" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D4" x="-24.13" y="15.24" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D5" x="-24.13" y="12.7" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D6" x="-24.13" y="10.16" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D7" x="-24.13" y="7.62" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D8" x="-24.13" y="3.81" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D9" x="-24.13" y="1.27" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D10" x="-24.13" y="-1.27" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D11" x="-24.13" y="-3.81" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D12" x="-24.13" y="-6.35" drill="1.016" diameter="1.8796" rot="R90"/><pad name="D13" x="-24.13" y="-8.89" drill="1.016" diameter="1.8796" rot="R90"/><pad name="GND@2" x="-24.13" y="-11.43" drill="1.016" diameter="1.8796" rot="R90"/><pad name="AREF" x="-24.13" y="-13.97" drill="1.016" diameter="1.8796" rot="R90"/><pad name="SDA" x="-24.13" y="-16.51" drill="1.016" diameter="1.8796" rot="R90"/><pad name="SCL" x="-24.13" y="-19.05" drill="1.016" diameter="1.8796" rot="R90"/><pad name="IOREF" x="24.13" y="-7.62" drill="1.016" diameter="1.8796" rot="R90"/><pad name="NC" x="24.13" y="-10.16" drill="1.016" diameter="1.8796" rot="R90"/><text x="22.7457" y="3.048" size="1.016" layer="21" font="vector" ratio="15" rot="R180">GND</text><text x="22.7457" y="5.588" size="1.016" layer="21" font="vector" ratio="15" rot="R180">GND</text><text x="22.7457" y="0.508" size="1.016" layer="21" font="vector" ratio="15" rot="R180">+5V</text><text x="22.7457" y="-4.572" size="1.016" layer="21" font="vector" ratio="15" rot="R180">RST</text><text x="22.7457" y="8.128" size="1.016" layer="21" font="vector" ratio="15" rot="R180">VIN</text><text x="22.7457" y="-2.032" size="1.016" layer="21" font="vector" ratio="15" rot="R180">+3.3V</text><text x="22.7457" y="13.208" size="1.016" layer="21" font="vector" ratio="15" rot="R180">0</text><text x="22.7457" y="15.748" size="1.016" layer="21" font="vector" ratio="15" rot="R180">1</text><text x="22.7457" y="18.288" size="1.016" layer="21" font="vector" ratio="15" rot="R180">2</text><text x="22.7457" y="20.828" size="1.016" layer="21" font="vector" ratio="15" rot="R180">3</text><text x="22.7457" y="23.368" size="1.016" layer="21" font="vector" ratio="15" rot="R180">4</text><text x="22.7457" y="25.908" size="1.016" layer="21" font="vector" ratio="15" rot="R180">5</text><text x="-22.86" y="-11.938" size="1.016" layer="21" font="vector" ratio="15">GND</text><text x="-22.86" y="-9.398" size="1.016" layer="21" font="vector" ratio="15">13</text><text x="-22.86" y="-6.858" size="1.016" layer="21" font="vector" ratio="15">12</text><text x="-22.86" y="-4.318" size="1.016" layer="21" font="vector" ratio="15">11</text><text x="-22.86" y="-14.478" size="1.016" layer="21" font="vector" ratio="15">AREF</text><text x="-22.86" y="-1.778" size="1.016" layer="21" font="vector" ratio="15">10</text><text x="-22.86" y="0.762" size="1.016" layer="21" font="vector" ratio="15">9</text><text x="-22.86" y="3.302" size="1.016" layer="21" font="vector" ratio="15">8</text><text x="-22.86" y="7.112" size="1.016" layer="21" font="vector" ratio="15">7</text><text x="-22.86" y="9.652" size="1.016" layer="21" font="vector" ratio="15">6</text><text x="-22.86" y="12.192" size="1.016" layer="21" font="vector" ratio="15">5</text><text x="-22.86" y="14.732" size="1.016" layer="21" font="vector" ratio="15">4</text><text x="-22.86" y="17.272" size="1.016" layer="21" font="vector" ratio="15">3</text><text x="-22.86" y="19.812" size="1.016" layer="21" font="vector" ratio="15">2</text><text x="-22.86" y="22.352" size="1.016" layer="21" font="vector" ratio="15">TX</text><text x="-22.86" y="24.892" size="1.016" layer="21" font="vector" ratio="15">RX</text><text x="-22.86" y="-17.018" size="1.016" layer="21" font="vector" ratio="15">SDA</text><text x="-22.86" y="-19.558" size="1.016" layer="21" font="vector" ratio="15">SCL</text><text x="22.7457" y="-7.112" size="1.016" layer="21" font="vector" ratio="15" rot="R180">IOREF</text><text x="0.635" y="23.241" size="0.508" layer="51" font="vector" ratio="15">RST</text><text x="-1.778" y="26.416" size="0.508" layer="51" font="vector" ratio="15">ISP</text><text x="-12.065" y="-44.069" size="0.508" layer="51" font="vector" ratio="15">USB</text><text x="15.875" y="-38.989" size="0.508" layer="51" font="vector" ratio="15">POWER JACK</text><text x="0" y="30.734" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text><text x="0" y="-29.718" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text></package>
<package name="LEDRD254W60D565H860B" urn="urn:adsk.eagle:footprint:16378492/2"><description>Radial LED (Round), 2.54 mm pitch, 5.65 mm body diameter, 8.60 mm body height
&lt;p&gt;Radial LED (Round) package with 2.54 mm pitch (lead spacing), 0.60 mm lead width, 0.50 mm lead thickness, 5.65 mm body diameter and 8.60 mm body height&lt;/p&gt;</description><wire x1="2.5425" y1="1.2314" x2="-2.825" y2="0" width="0.12" layer="21" curve="154.1581"/><wire x1="2.5425" y1="-1.2314" x2="-2.825" y2="0" width="0.12" layer="21" curve="-154.1581"/><wire x1="2.5425" y1="1.2314" x2="2.5425" y2="-1.2314" width="0.12" layer="21"/><wire x1="-2.5946" y1="2.5946" x2="-1.8446" y2="2.5946" width="0.12" layer="21"/><wire x1="-2.2196" y1="2.9696" x2="-2.2196" y2="2.2196" width="0.12" layer="21"/><pad name="1" x="-1.27" y="0" drill="0.981" diameter="1.581"/><pad name="2" x="1.27" y="0" drill="0.981" diameter="1.581"/><circle x="0" y="0" radius="2.825" width="0.12" layer="51"/><text x="0" y="3.6046" size="1.27" layer="25" align="bottom-center">&gt;NAME</text><text x="0" y="-3.4642" size="1.27" layer="27" align="top-center">&gt;VALUE</text></package>
<package name="LEDRD254W60D565H860B_Y" urn="urn:adsk.eagle:footprint:16378494/2"><description>Radial LED (Round), 2.54 mm pitch, 5.65 mm body diameter, 8.60 mm body height
&lt;p&gt;Radial LED (Round) package with 2.54 mm pitch (lead spacing), 0.60 mm lead width, 0.50 mm lead thickness, 5.65 mm body diameter and 8.60 mm body height&lt;/p&gt;</description><wire x1="2.5425" y1="1.2314" x2="-2.825" y2="0" width="0.12" layer="21" curve="154.1581"/><wire x1="2.5425" y1="-1.2314" x2="-2.825" y2="0" width="0.12" layer="21" curve="-154.1581"/><wire x1="2.5425" y1="1.2314" x2="2.5425" y2="-1.2314" width="0.12" layer="21"/><wire x1="-2.5946" y1="2.5946" x2="-1.8446" y2="2.5946" width="0.12" layer="21"/><wire x1="-2.2196" y1="2.9696" x2="-2.2196" y2="2.2196" width="0.12" layer="21"/><pad name="1" x="-1.27" y="0" drill="0.981" diameter="1.581"/><pad name="2" x="1.27" y="0" drill="0.981" diameter="1.581"/><circle x="0" y="0" radius="2.825" width="0.12" layer="51"/><text x="0" y="3.6046" size="1.27" layer="25" align="bottom-center">&gt;NAME</text><text x="0" y="-3.4642" size="1.27" layer="27" align="top-center">&gt;VALUE</text></package>
<package name="LEDRD254W60D565H860B_G" urn="urn:adsk.eagle:footprint:31997106/2"><description>Radial LED (Round), 2.54 mm pitch, 5.65 mm body diameter, 8.60 mm body height
&lt;p&gt;Radial LED (Round) package with 2.54 mm pitch (lead spacing), 0.60 mm lead width, 0.50 mm lead thickness, 5.65 mm body diameter and 8.60 mm body height&lt;/p&gt;</description><wire x1="2.5425" y1="1.2314" x2="-2.825" y2="0" width="0.12" layer="21" curve="154.1581"/><wire x1="2.5425" y1="-1.2314" x2="-2.825" y2="0" width="0.12" layer="21" curve="-154.1581"/><wire x1="2.5425" y1="1.2314" x2="2.5425" y2="-1.2314" width="0.12" layer="21"/><wire x1="-2.5946" y1="2.5946" x2="-1.8446" y2="2.5946" width="0.12" layer="21"/><wire x1="-2.2196" y1="2.9696" x2="-2.2196" y2="2.2196" width="0.12" layer="21"/><pad name="1" x="-1.27" y="0" drill="0.981" diameter="1.581"/><pad name="2" x="1.27" y="0" drill="0.981" diameter="1.581"/><circle x="0" y="0" radius="2.825" width="0.12" layer="51"/><text x="0" y="3.6046" size="1.27" layer="25" align="bottom-center">&gt;NAME</text><text x="0" y="-3.4642" size="1.27" layer="27" align="top-center">&gt;VALUE</text></package>
<package name="RESAD1016W63L850D250B" urn="urn:adsk.eagle:footprint:31513019/2"><description>Axial Resistor, 10.16 mm pitch, 8.50 mm body length, 2.50 mm body diameter
 &lt;p&gt;Axial Resistor package with 10.16 mm pitch (lead spacing), 0.63 mm lead diameter, 8.50 mm body length and 2.50 mm body diameter&lt;/p&gt;</description><pad name="1" x="-5.08" y="0" drill="0.83" diameter="1.43"/><pad name="2" x="5.08" y="0" drill="0.83" diameter="1.43"/><wire x1="-4.25" y1="-1.25" x2="-4.25" y2="1.25" width="0.12" layer="21"/><wire x1="-4.25" y1="1.25" x2="4.25" y2="1.25" width="0.12" layer="21"/><wire x1="4.25" y1="1.25" x2="4.25" y2="-1.25" width="0.12" layer="21"/><wire x1="4.25" y1="-1.25" x2="-4.25" y2="-1.25" width="0.12" layer="21"/><wire x1="-4.25" y1="0" x2="-4.111" y2="0" width="0.12" layer="21"/><wire x1="4.25" y1="0" x2="4.111" y2="0" width="0.12" layer="21"/><wire x1="-4.25" y1="-1.25" x2="-4.25" y2="1.25" width="0.12" layer="51"/><wire x1="-4.25" y1="1.25" x2="4.25" y2="1.25" width="0.12" layer="51"/><wire x1="4.25" y1="1.25" x2="4.25" y2="-1.25" width="0.12" layer="51"/><wire x1="4.25" y1="-1.25" x2="-4.25" y2="-1.25" width="0.12" layer="51"/><text x="0" y="1.885" size="1.27" layer="25" align="bottom-center">&gt;NAME</text><text x="0" y="-1.885" size="1.27" layer="27" align="top-center">&gt;VALUE</text></package>
</packages>
<packages3d>
<package3d name="ARDUINO-UNO-R3-SHIELD" urn="urn:adsk.eagle:package:32092383/4" type="model"><description>&lt;h3&gt;Arduino Uno-Compatible Footprint&lt;/h3&gt;
No holes, no ICSP connections.
&lt;p&gt;Specifications:
&lt;ul&gt;&lt;li&gt;Pin count: 32&lt;/li&gt;
&lt;li&gt;Pin pitch: 0.1"&lt;/li&gt;
&lt;li&gt;Area:2.1x2.35"&lt;/li&gt;
&lt;/ul&gt;&lt;/p&gt;
&lt;p&gt;Example device(s):
&lt;ul&gt;&lt;li&gt;Arduino Uno R3 Shield&lt;/li&gt;
&lt;/ul&gt;&lt;/p&gt;</description><packageinstances><packageinstance name="ARDUINO-UNO-R3-SHIELD"/></packageinstances></package3d>
<package3d name="LEDRD254W60D565H860B" urn="urn:adsk.eagle:package:16378508/2" type="model"><description>Radial LED (Round), 2.54 mm pitch, 5.65 mm body diameter, 8.60 mm body height
&lt;p&gt;Radial LED (Round) package with 2.54 mm pitch (lead spacing), 0.60 mm lead width, 0.50 mm lead thickness, 5.65 mm body diameter and 8.60 mm body height&lt;/p&gt;</description><packageinstances><packageinstance name="LEDRD254W60D565H860B"/></packageinstances></package3d>
<package3d name="LEDRD254W60D565H860B" urn="urn:adsk.eagle:package:16378506/2" type="model"><description>Radial LED (Round), 2.54 mm pitch, 5.65 mm body diameter, 8.60 mm body height
&lt;p&gt;Radial LED (Round) package with 2.54 mm pitch (lead spacing), 0.60 mm lead width, 0.50 mm lead thickness, 5.65 mm body diameter and 8.60 mm body height&lt;/p&gt;</description><packageinstances><packageinstance name="LEDRD254W60D565H860B_Y"/></packageinstances></package3d>
<package3d name="LEDRD254W60D565H860B_G" urn="urn:adsk.eagle:package:31997108/3" type="model"><description>Radial LED (Round), 2.54 mm pitch, 5.65 mm body diameter, 8.60 mm body height
&lt;p&gt;Radial LED (Round) package with 2.54 mm pitch (lead spacing), 0.60 mm lead width, 0.50 mm lead thickness, 5.65 mm body diameter and 8.60 mm body height&lt;/p&gt;</description><packageinstances><packageinstance name="LEDRD254W60D565H860B_G"/></packageinstances></package3d>
<package3d name="RESAD1016W63L850D250B" urn="urn:adsk.eagle:package:31513020/2" type="model"><description>Axial Resistor, 10.16 mm pitch, 8.50 mm body length, 2.50 mm body diameter
 &lt;p&gt;Axial Resistor package with 10.16 mm pitch (lead spacing), 0.63 mm lead diameter, 8.50 mm body length and 2.50 mm body diameter&lt;/p&gt;</description><packageinstances><packageinstance name="RESAD1016W63L850D250B"/></packageinstances></package3d>
<package3d name="28015" urn="urn:adsk.eagle:package:32384644/2" type="model"><description>&lt;b&gt;PIN HEADER&lt;/b&gt;</description><packageinstances><packageinstance name="28015"/></packageinstances></package3d>
</packages3d>
</library></libraries>
<attributes/>
<variantdefs/>
<classes>
<class number="0" name="default" width="0" drill="0"/>
</classes>
<designrules name="default">
<description language="de">&lt;b&gt;EAGLE Design Rules&lt;/b&gt;
&lt;p&gt;
Die Standard-Design-Rules sind so gewählt, dass sie für 
die meisten Anwendungen passen. Sollte ihre Platine 
besondere Anforderungen haben, treffen Sie die erforderlichen
Einstellungen hier und speichern die Design Rules unter 
einem neuen Namen ab.
</description>
<description language="en">&lt;b&gt;EAGLE Design Rules&lt;/b&gt;
&lt;p&gt;
The default Design Rules have been set to cover
a wide range of applications. Your particular design
may have different requirements, so please make the
necessary adjustments and save your customized
design rules under a new name.
</description>
<param name="layerSetup" value="(1*16)"/>
<param name="mtCopper" value="0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm 0.035mm"/>
<param name="mtIsolate" value="1.5mm 0.15mm 0.2mm 0.15mm 0.2mm 0.15mm 0.2mm 0.15mm 0.2mm 0.15mm 0.2mm 0.15mm 0.2mm 0.15mm 0.2mm"/>
<param name="mdWireWire" value="6mil"/>
<param name="mdWirePad" value="6mil"/>
<param name="mdWireVia" value="6mil"/>
<param name="mdPadPad" value="6mil"/>
<param name="mdPadVia" value="6mil"/>
<param name="mdViaVia" value="6mil"/>
<param name="mdSmdPad" value="6mil"/>
<param name="mdSmdVia" value="6mil"/>
<param name="mdSmdSmd" value="6mil"/>
<param name="mdViaViaSameLayer" value="6mil"/>
<param name="mnLayersViaInSmd" value="2"/>
<param name="mdCopperDimension" value="40mil"/>
<param name="mdDrill" value="6mil"/>
<param name="mdSmdStop" value="0mil"/>
<param name="msWidth" value="6mil"/>
<param name="msDrill" value="0.35mm"/>
<param name="msMicroVia" value="9.99mm"/>
<param name="msBlindViaRatio" value="0.5"/>
<param name="rvPadTop" value="0.25"/>
<param name="rvPadInner" value="0.25"/>
<param name="rvPadBottom" value="0.25"/>
<param name="rvViaOuter" value="0.25"/>
<param name="rvViaInner" value="0.25"/>
<param name="rvMicroViaOuter" value="0.25"/>
<param name="rvMicroViaInner" value="0.25"/>
<param name="rlMinPadTop" value="10mil"/>
<param name="rlMaxPadTop" value="20mil"/>
<param name="rlMinPadInner" value="10mil"/>
<param name="rlMaxPadInner" value="20mil"/>
<param name="rlMinPadBottom" value="10mil"/>
<param name="rlMaxPadBottom" value="20mil"/>
<param name="rlMinViaOuter" value="8mil"/>
<param name="rlMaxViaOuter" value="20mil"/>
<param name="rlMinViaInner" value="8mil"/>
<param name="rlMaxViaInner" value="20mil"/>
<param name="rlMinMicroViaOuter" value="4mil"/>
<param name="rlMaxMicroViaOuter" value="20mil"/>
<param name="rlMinMicroViaInner" value="4mil"/>
<param name="rlMaxMicroViaInner" value="20mil"/>
<param name="psTop" value="-1"/>
<param name="psBottom" value="-1"/>
<param name="psFirst" value="-1"/>
<param name="psElongationLong" value="100"/>
<param name="psElongationOffset" value="100"/>
<param name="mvStopFrame" value="1"/>
<param name="mvCreamFrame" value="0"/>
<param name="mlMinStopFrame" value="4mil"/>
<param name="mlMaxStopFrame" value="4mil"/>
<param name="mlMinCreamFrame" value="0mil"/>
<param name="mlMaxCreamFrame" value="0mil"/>
<param name="mlViaStopLimit" value="0mil"/>
<param name="srRoundness" value="0"/>
<param name="srMinRoundness" value="0mil"/>
<param name="srMaxRoundness" value="0mil"/>
<param name="slThermalIsolate" value="10mil"/>
<param name="slThermalsForVias" value="0"/>
<param name="dpMaxLengthDifference" value="10mm"/>
<param name="dpGapFactor" value="2.5"/>
<param name="checkAngle" value="0"/>
<param name="checkFont" value="1"/>
<param name="checkRestrict" value="1"/>
<param name="checkStop" value="0"/>
<param name="checkValues" value="0"/>
<param name="checkNames" value="1"/>
<param name="checkWireStubs" value="1"/>
<param name="checkPolygonWidth" value="0"/>
<param name="useDiameter" value="13"/>
<param name="maxErrors" value="50"/>
</designrules>
<autorouter>
<pass name="Default">
<param name="RoutingGrid" value="50mil"/>
<param name="AutoGrid" value="1"/>
<param name="Efforts" value="0"/>
<param name="TopRouterVariant" value="1"/>
<param name="tpViaShape" value="round"/>
<param name="PrefDir.1" value="a"/>
<param name="PrefDir.2" value="0"/>
<param name="PrefDir.3" value="0"/>
<param name="PrefDir.4" value="0"/>
<param name="PrefDir.5" value="0"/>
<param name="PrefDir.6" value="0"/>
<param name="PrefDir.7" value="0"/>
<param name="PrefDir.8" value="0"/>
<param name="PrefDir.9" value="0"/>
<param name="PrefDir.10" value="0"/>
<param name="PrefDir.11" value="0"/>
<param name="PrefDir.12" value="0"/>
<param name="PrefDir.13" value="0"/>
<param name="PrefDir.14" value="0"/>
<param name="PrefDir.15" value="0"/>
<param name="PrefDir.16" value="a"/>
<param name="cfVia" value="8"/>
<param name="cfNonPref" value="5"/>
<param name="cfChangeDir" value="2"/>
<param name="cfOrthStep" value="2"/>
<param name="cfDiagStep" value="3"/>
<param name="cfExtdStep" value="0"/>
<param name="cfBonusStep" value="1"/>
<param name="cfMalusStep" value="1"/>
<param name="cfPadImpact" value="4"/>
<param name="cfSmdImpact" value="4"/>
<param name="cfBusImpact" value="0"/>
<param name="cfHugging" value="3"/>
<param name="cfAvoid" value="4"/>
<param name="cfPolygon" value="10"/>
<param name="cfBase.1" value="0"/>
<param name="cfBase.2" value="1"/>
<param name="cfBase.3" value="1"/>
<param name="cfBase.4" value="1"/>
<param name="cfBase.5" value="1"/>
<param name="cfBase.6" value="1"/>
<param name="cfBase.7" value="1"/>
<param name="cfBase.8" value="1"/>
<param name="cfBase.9" value="1"/>
<param name="cfBase.10" value="1"/>
<param name="cfBase.11" value="1"/>
<param name="cfBase.12" value="1"/>
<param name="cfBase.13" value="1"/>
<param name="cfBase.14" value="1"/>
<param name="cfBase.15" value="1"/>
<param name="cfBase.16" value="0"/>
<param name="mnVias" value="20"/>
<param name="mnSegments" value="9999"/>
<param name="mnExtdSteps" value="9999"/>
<param name="mnRipupLevel" value="10"/>
<param name="mnRipupSteps" value="100"/>
<param name="mnRipupTotal" value="100"/>
</pass>
<pass name="Follow-me" refer="Default" active="yes"/>
<pass name="Busses" refer="Default" active="yes">
<param name="cfNonPref" value="4"/>
<param name="cfBusImpact" value="4"/>
<param name="cfHugging" value="0"/>
<param name="mnVias" value="0"/>
</pass>
<pass name="Route" refer="Default" active="yes"/>
<pass name="Optimize1" refer="Default" active="yes">
<param name="cfVia" value="99"/>
<param name="cfExtdStep" value="10"/>
<param name="cfHugging" value="1"/>
<param name="mnExtdSteps" value="1"/>
<param name="mnRipupLevel" value="0"/>
</pass>
<pass name="Optimize2" refer="Optimize1" active="yes">
<param name="cfNonPref" value="0"/>
<param name="cfChangeDir" value="6"/>
<param name="cfExtdStep" value="0"/>
<param name="cfBonusStep" value="2"/>
<param name="cfMalusStep" value="2"/>
<param name="cfPadImpact" value="2"/>
<param name="cfSmdImpact" value="2"/>
<param name="cfHugging" value="0"/>
</pass>
<pass name="Optimize3" refer="Optimize2" active="yes">
<param name="cfChangeDir" value="8"/>
<param name="cfPadImpact" value="0"/>
<param name="cfSmdImpact" value="0"/>
</pass>
<pass name="Optimize4" refer="Optimize3" active="yes">
<param name="cfChangeDir" value="25"/>
</pass>
</autorouter>
<elements>
<element name="R1" library="Tinkercad" package="RESAD1016W63L850D250B" package3d_urn="urn:adsk.eagle:package:31513020/2" value="220" x="18.648" y="29.845" rot="R90" smashed="yes"/>
<element name="D1" library="Tinkercad" package="LEDRD254W60D565H860B" package3d_urn="urn:adsk.eagle:package:16378508/2" value="RED" x="17.378" y="14.605" rot="R180" smashed="yes">
<attribute name="CATEGORY" value="Opto-Electronic" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="COLOR" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="DESCRIPTION" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="MANUFACTURER" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="MPN" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="OPERATING_TEMP" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="PART_STATUS" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="ROHS_COMPLIANT" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="SERIES" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="SUB-CATEGORY" value="LED" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="THERMALLOSS" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="TYPE" value="" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="VALUE" value="LED_RED" x="17.378" y="14.605" size="1.778" layer="27" display="off"/>
</element>
<element name="D2" library="Tinkercad" package="LEDRD254W60D565H860B_Y" package3d_urn="urn:adsk.eagle:package:16378506/2" value="YELLOW" x="24.998" y="14.605" rot="R180" smashed="yes">
<attribute name="CATEGORY" value="Opto-Electronic" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="COLOR" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="DESCRIPTION" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="MANUFACTURER" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="MPN" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="OPERATING_TEMP" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="PART_STATUS" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="ROHS_COMPLIANT" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="SERIES" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="SUB-CATEGORY" value="LED" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="THERMALLOSS" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="TYPE" value="" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="VALUE" value="LED_YELLOW" x="24.998" y="14.605" size="1.778" layer="27" display="off"/>
</element>
<element name="R2" library="Tinkercad" package="RESAD1016W63L850D250B" package3d_urn="urn:adsk.eagle:package:31513020/2" value="220" x="26.268" y="29.845" rot="R90" smashed="yes"/>
<element name="D3" library="Tinkercad" package="LEDRD254W60D565H860B_G" package3d_urn="urn:adsk.eagle:package:31997108/3" value="GREEN" x="32.618" y="14.605" rot="R180" smashed="yes">
<attribute name="CATEGORY" value="Opto-Electronic" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="COLOR" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="DESCRIPTION" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="MANUFACTURER" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="MPN" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="OPERATING_TEMP" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="PART_STATUS" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="ROHS_COMPLIANT" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="SERIES" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="SUB-CATEGORY" value="LED" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="THERMALLOSS" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="TYPE" value="" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
<attribute name="VALUE" value="LED_GREEN" x="32.618" y="14.605" size="1.778" layer="27" display="off"/>
</element>
<element name="R3" library="Tinkercad" package="RESAD1016W63L850D250B" package3d_urn="urn:adsk.eagle:package:31513020/2" value="220" x="33.888" y="29.845" rot="R90" smashed="yes"/>
<element name="U1" library="Tinkercad" package="ARDUINO-UNO-R3-SHIELD" package3d_urn="urn:adsk.eagle:package:32092383/4" value="ARDUINO-UNO-R3-SHIELD" x="47.885" y="144.2251" rot="R270" smashed="yes"/>
<element name="PING2" library="Tinkercad" package="28015" package3d_urn="urn:adsk.eagle:package:32384644/2" value="DISTANCE-SENSOR-3PIN" x="69.448" y="14.605" smashed="yes"/>
</elements>
<signals>
<signal name="D1_A">
<contactref element="D1" pad="1"/>
<contactref element="R1" pad="1"/>
<wire x1="18.648" y1="14.605" x2="18.648" y2="24.765" width="0" layer="19" extent="1-1"/>
</signal>
<signal name="U1_D13">
<contactref element="R1" pad="2"/>
<contactref element="U1" pad="D13"/>
<wire x1="18.648" y1="34.925" x2="38.995" y2="168.3551" width="0" layer="19" extent="1-1"/>
</signal>
<signal name="PING2_GND">
<contactref element="PING2" pad="1"/>
<contactref element="D3" pad="2"/>
<contactref element="D2" pad="2"/>
<contactref element="D1" pad="2"/>
<wire x1="31.348" y1="14.605" x2="23.728" y2="14.605" width="0" layer="19" extent="1-1"/>
<wire x1="23.728" y1="14.605" x2="16.108" y2="14.605" width="0" layer="19" extent="1-1"/>
<wire x1="66.908" y1="14.605" x2="31.348" y2="14.605" width="0" layer="19" extent="1-1"/>
</signal>
<signal name="D2_A">
<contactref element="D2" pad="1"/>
<contactref element="R2" pad="1"/>
<wire x1="26.268" y1="14.605" x2="26.268" y2="24.765" width="0" layer="19" extent="1-1"/>
</signal>
<signal name="U1_D12">
<contactref element="R2" pad="2"/>
<contactref element="U1" pad="D12"/>
<wire x1="26.268" y1="34.925" x2="41.535" y2="168.3551" width="0" layer="19" extent="1-1"/>
</signal>
<signal name="D3_A">
<contactref element="D3" pad="1"/>
<contactref element="R3" pad="1"/>
<wire x1="33.888" y1="14.605" x2="33.888" y2="24.765" width="0" layer="19" extent="1-1"/>
</signal>
<signal name="U1_D11">
<contactref element="R3" pad="2"/>
<contactref element="U1" pad="D11"/>
<wire x1="33.888" y1="34.925" x2="44.075" y2="168.3551" width="0" layer="19" extent="1-1"/>
</signal>
<signal name="U1_D10">
<contactref element="PING2" pad="3"/>
<contactref element="U1" pad="D10"/>
<wire x1="71.988" y1="14.605" x2="46.615" y2="168.3551" width="0" layer="19" extent="1-1"/>
</signal>
<signal name="U1_5V">
<contactref element="PING2" pad="2"/>
<contactref element="U1" pad="5V"/>
<wire x1="69.448" y1="14.605" x2="47.885" y2="120.0951" width="0" layer="19" extent="1-1"/>
</signal>
</signals>
</board>
</drawing>
<compatibility>
<note version="8.3" severity="warning">Since Version 8.3, EAGLE supports URNs for individual library assets (packages, symbols, and devices). The URNs of those assets will not be understood (or retained) with this version.
</note>
<note version="8.3" severity="warning">Since Version 8.3, EAGLE supports the association of 3D packages with devices in libraries, schematics, and board files. Those 3D packages will not be understood (or retained) with this version.
</note>
<note version="8.4" severity="warning">Since Version 8.4, EAGLE supports properties for SPICE simulation. Probes in schematics and SPICE mapping objects found in parts and library devices will not be understood with this version. Update EAGLE to the latest version for full support of SPICE simulation.
</note>
</compatibility>
</eagle>rd…]()




On Ultrasonic sensor, look at the pins ,
 GND is connected to the blue line on top of breadboard.. 
Echo should be connected to pin 9 on arduino
TRIG should be connected to pin 10 on arduino
VCC to 5v of arduino


   
