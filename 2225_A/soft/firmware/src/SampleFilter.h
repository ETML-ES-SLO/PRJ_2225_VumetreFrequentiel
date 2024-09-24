#ifndef SAMPLEFILTER_H_
#define SAMPLEFILTER_H_

/*

FIR filter designed with
 http://t-filter.appspot.com

sampling frequency: 40000 Hz

fixed point precision: 16 bits

* 0 Hz - 150 Hz
  gain = 0
  desired attenuation = -40 dB
  actual attenuation = n/a

* 250 Hz - 450 Hz
  gain = 1
  desired ripple = 5 dB
  actual ripple = n/a

* 550 Hz - 20000 Hz
  gain = 0
  desired attenuation = -40 dB
  actual attenuation = n/a

*/

#include <stdint.h>

#define SAMPLEFILTER_TAP_NUM 535

typedef struct {
  int16_t history[SAMPLEFILTER_TAP_NUM];  // SAMPLEFILTER_TAP_NUM
  unsigned int last_index;
} SampleFilter;

void SampleFilter_init(SampleFilter* f);
void SampleFilter_put(SampleFilter* f, int16_t input);
int16_t SampleFilter_get(SampleFilter* f);

#endif