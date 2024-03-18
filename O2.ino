const int O2_PIN_ADC = A1;

void O2_setup() {

}

/**
 * @brief Fetch the O2 concentration in the air
 *
 * @return float O2 concentration between 0 and 1 in the air
 */
float O2_fetch() {
    // Vout samples are with reference to 3.3V
    float vout = O2_fetch_Vout();
    // Applying the conversion formula
    float concentration = vout * 0.21 / 2.0;
    return concentration * 100;
}

void O2_print() {
    Serial.print("O2: ");
    Serial.print(O2_fetch());
    Serial.println(" %");
}


float O2_fetch_Vout() {
    // Average on 32 samples -> Dividing by 32 = 2^5 (5 bit left shift)
    long sum = 0;
    for (int i = 0; i < 32; i++) {
        sum += analogRead(O2_PIN_ADC);
    }
    sum >>= 5;
    // The measured tension is brought back between 0 and 3.3V
    float MeasuredVout = sum * (3.3 / 1023.0);
    return MeasuredVout;
}