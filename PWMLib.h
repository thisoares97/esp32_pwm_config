/*
 * This function receive the ADC value (e.g. from a sensor) and turns into a value that can be writen to a PWM output.
 * The ADC value shall be 12 bits.
 */

unsigned int pwm_output(unsigned int pot_value)
{
  
  unsigned int pwm_value = 0;
  
  pwm_value = (int) (pot_value / 16.0);
  
  return pwm_value;

}
