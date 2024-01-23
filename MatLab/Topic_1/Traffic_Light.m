
r = 1.5;
a = 0: 0.1 : 2*pi;

  hold on; 
  axis([0 20 0 20]);
  title('Traffic Light');
   
  %draw a rectangle with Curvature for rounded corners
  rectangle('Position', [8, 6, 4, 12],'FaceColor' , [0 0 0], 'Curvature', [0.1, 0.1]);
  rectangle('Position', [9.5, 0, 1, 6],'FaceColor' , [0.5 0.5 0.5]);
  
  %fill the circles with off state color
  fill(10+r*cos(a),16+r*sin(a),[0.3, 0.05, 0.05]);
  fill(10+r*cos(a),12+r*sin(a),[0.5, 0.5, 0.1]);
  fill(10+r*cos(a),8+r*sin(a),[0.05, 0.3, 0.05]);
   
 while 1
   %blinking the red light 
   fill(10+r*cos(a),16+r*sin(a),'r');
   pause(1); 
   fill(10+r*cos(a),16+r*sin(a),[0.3, 0.05, 0.05]);
   
   %blinking the yellow
   fill(10+r*cos(a),12+r*sin(a),'y');
   pause(1);
   fill(10+r*cos(a),12+r*sin(a),[0.5, 0.5, 0.1]);
   
   %blinking the green
   fill(10+r*cos(a),8+r*sin(a),'g');
   pause(1); 
   fill(10+r*cos(a),8+r*sin(a),[0.05, 0.3, 0.05]);
end
   
 