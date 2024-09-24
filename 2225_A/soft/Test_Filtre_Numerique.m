close all;
clear all;
clc;
pkg load signal;

l = 1000; % Longueur du signal

% Signal forme d'une addition de plusieurs sinus de frequences differentes
signal = sinetone(25,l,1,1)+sinetone(50,l,1,2)+sinetone(100,l,1,3)+ ...
          sinetone(24,l,1,5)+sinetone(49,l,1,2)+sinetone(103,l,1,1)+ ...
          sinetone(32,l,1,4)+sinetone(53,l,1,1)+sinetone(97,l,1,2);

% Affichage du signal
plot(signal);

% Transormee de Fourier sur ce signal et affichage
signal_fft = fft(signal)(1:l/2+1);
figure;
plot(abs(signal_fft));

% Affichage dans la console des frequences trouvee par la fft
for i = 1:length(signal_fft)
  if(abs(signal_fft(i)) > 1)
    printf(" %d ", (i - 1));
  endif
endfor
