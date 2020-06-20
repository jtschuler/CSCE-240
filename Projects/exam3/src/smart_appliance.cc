// Copyright 2020 Jadon T Schuler


#include <inc/smart_appliance.h>


namespace exam3 {


SmartAppliance::~SmartAppliance() { /* empty */ }


SmartLight::SmartLight() : activated_(false), on_(false) { /* empty */ }

const std::string SmartLight::Activate() {
  if (activated_) {
    return "Light active";
  } else {
    activated_ = true;
    return "Light activated";
  }
}

const std::string SmartLight::Deactivate() {
  if (activated_) {
    activated_ = false;
    return "Light deactivated";
  } else {
    return "";
  }
}

const std::string SmartLight::Set(unsigned int setting) {
  if (!activated_) {
    return "";
  } else if (setting > 0 && !on_) {
    on_ = true;
    return "Light set from off to on";
  } else if (setting > 0 && on_) {
    return "Light set on";
  } else if (setting == 0 && !on_) {
    return "Light set off";
  } else if (setting == 0 && on_) {
    on_ = false;
    return "Light set from on to off";
  } else {
    return "";
  }
}


SmartThermostat::SmartThermostat() : activated_(0), setting_(0) { /* empty */ }

const std::string SmartThermostat::Activate() {
  if (activated_) {
    return "Thermostat active";
  } else {
    activated_ = true;
    return "Thermostat activated";
  }
}

const std::string SmartThermostat::Deactivate() {
  if (activated_) {
    activated_ = false;
    return "Thermostat deactivated";
  } else {
    return "";
  }
}

const std::string SmartThermostat::Set(unsigned int setting) {
  int old_temperature = (setting_ * 0.01 * 60 + 40.5);
  int new_temperature = (setting * 0.01 * 60 + 40.5);

  if (!activated_) {
    return "";
  } else if (setting != setting_) {
    std::string s = "Thermostat set from " + std::to_string(old_temperature) +
                    " to " + std::to_string(new_temperature);
    setting_ = setting;
    return s;
  } else {
    return "Thermostat set to " + std::to_string(old_temperature);
  }
}


}  // namespace exam3
