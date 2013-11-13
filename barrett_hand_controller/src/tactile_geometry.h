#ifndef _TACTILE_GEOMETRY_H_
#define _TACTILE_GEOMETRY_H_
/*
const double Hand::palm_sensor_center_[24][3] = {	// in mm
	{ 22, 15.9, 77.5 },
	{ 11, 15.9, 77.5 },
	{ 0, 15.9, 77.5 },
	{ -11, 15.9, 77.5 },
	{ -22, 15.9, 77.5 },
	{ 33, 5.3, 77.5 },
	{ 22, 5.3, 77.5 },
	{ 11, 5.3, 77.5 },
	{ 0, 5.3, 77.5 },
	{ -11, 5.3, 77.5 },
	{ -22, 5.3, 77.5 },
	{ -33, 5.3, 77.5 },
	{ 33, -5.3, 77.5 },
	{ 22, -5.3, 77.5 },
	{ 11, -5.3, 77.5 },
	{ 0, -5.3, 77.5 },
	{ -11, -5.3, 77.5 },
	{ -22, -5.3, 77.5 },
	{ -33, -5.3, 77.5 },
	{ 22, -15.9, 77.5 },
	{ 11, -15.9, 77.5 },
	{ 0, -15.9, 77.5 },
	{ -11, -15.9, 77.5 },
	{ -22, -15.9, 77.5 }
};

const double Hand::palm_sensor_halfside1_[24][3] = {	// in mm
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 }
};

const double Hand::palm_sensor_halfside2_[24][3] = {	// in mm
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 }
};

const double Hand::finger_sensor_center_[24][3] = {	// in mm
	{ 22.25, -9.5, 5.2 },
	{ 22.25, -9.5, 0 },
	{ 22.25, -9.5, -5.2 },
	{ 28.25, -9.5, 5.2 },
	{ 28.25, -9.5, 0 },
	{ 28.25, -9.5, -5.2 },
	{ 34.2484, -9.41371, 5.2 },
	{ 34.2484, -9.41371, 0 },
	{ 34.2484, -9.41371, -5.2 },
	{ 40.2349, -9.05695, 5.2 },
	{ 40.2349, -9.05695, 0 },
	{ 40.2349, -9.05695, -5.2 },
	{ 46.1912, -8.35887, 5.2 },
	{ 46.1912, -8.35887, 0 },
	{ 46.1912, -8.35887, -5.2 },
	{ 51.0813, -7.1884, 5.2 },
	{ 51.0813, -7.1884, 0 },
	{ 51.0813, -7.1884, -5.2 },
	{ 53.8108, -5.14222, 5.2 },
	{ 53.8108, -5.14222, 0 },
	{ 53.8108, -5.14222, -5.2 },
	{ 55.4163, -2.13234, 5.2 },
	{ 55.4163, -2.13234, 0 },
	{ 55.4163, -2.13234, -5.2 }
};

const double Hand::finger_sensor_halfside1_[24][3] = {	// in mm
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.74837, 0.085096, 0 },
	{ 2.74837, 0.085096, 0 },
	{ 2.74837, 0.085096, 0 },
	{ 2.73902, 0.241919, 0 },
	{ 2.73902, 0.241919, 0 },
	{ 2.73902, 0.241919, 0 },
	{ 2.72073, 0.397956, 0 },
	{ 2.72073, 0.397956, 0 },
	{ 2.72073, 0.397956, 0 },
	{ 1.35885, 0.614231, 0 },
	{ 1.35885, 0.614231, 0 },
	{ 1.35885, 0.614231, 0 },
	{ 0.970635, 1.13209, 0 },
	{ 0.970635, 1.13209, 0 },
	{ 0.970635, 1.13209, 0 },
	{ 0.399575, 1.4367, 0 },
	{ 0.399575, 1.4367, 0 },
	{ 0.399575, 1.4367, 0 }
};

const double Hand::finger_sensor_halfside2_[24][3] = {	// in mm
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 }
};
*/

const double palm_sensor_center[24][3] = {	// in mm
	{ 22, 15.9, 77.5 },
	{ 11, 15.9, 77.5 },
	{ 0, 15.9, 77.5 },
	{ -11, 15.9, 77.5 },
	{ -22, 15.9, 77.5 },
	{ 33, 5.3, 77.5 },
	{ 22, 5.3, 77.5 },
	{ 11, 5.3, 77.5 },
	{ 0, 5.3, 77.5 },
	{ -11, 5.3, 77.5 },
	{ -22, 5.3, 77.5 },
	{ -33, 5.3, 77.5 },
	{ 33, -5.3, 77.5 },
	{ 22, -5.3, 77.5 },
	{ 11, -5.3, 77.5 },
	{ 0, -5.3, 77.5 },
	{ -11, -5.3, 77.5 },
	{ -22, -5.3, 77.5 },
	{ -33, -5.3, 77.5 },
	{ 22, -15.9, 77.5 },
	{ 11, -15.9, 77.5 },
	{ 0, -15.9, 77.5 },
	{ -11, -15.9, 77.5 },
	{ -22, -15.9, 77.5 }
};

const double palm_sensor_halfside1[24][3] = {	// in mm
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 },
	{ 5, 0, 0 }
};

const double palm_sensor_halfside2[24][3] = {	// in mm
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 },
	{ 0, 4.85, 0 }
};

const double finger_sensor_center[24][3] = {	// in mm
	{ 22.25, -9.5, 5.2 },
	{ 22.25, -9.5, 0 },
	{ 22.25, -9.5, -5.2 },
	{ 28.25, -9.5, 5.2 },
	{ 28.25, -9.5, 0 },
	{ 28.25, -9.5, -5.2 },
	{ 34.2484, -9.41371, 5.2 },
	{ 34.2484, -9.41371, 0 },
	{ 34.2484, -9.41371, -5.2 },
	{ 40.2349, -9.05695, 5.2 },
	{ 40.2349, -9.05695, 0 },
	{ 40.2349, -9.05695, -5.2 },
	{ 46.1912, -8.35887, 5.2 },
	{ 46.1912, -8.35887, 0 },
	{ 46.1912, -8.35887, -5.2 },
	{ 51.0813, -7.1884, 5.2 },
	{ 51.0813, -7.1884, 0 },
	{ 51.0813, -7.1884, -5.2 },
	{ 53.8108, -5.14222, 5.2 },
	{ 53.8108, -5.14222, 0 },
	{ 53.8108, -5.14222, -5.2 },
	{ 55.4163, -2.13234, 5.2 },
	{ 55.4163, -2.13234, 0 },
	{ 55.4163, -2.13234, -5.2 }
};

const double finger_sensor_halfside1[24][3] = {	// in mm
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.75, 0, 0 },
	{ 2.74837, 0.085096, 0 },
	{ 2.74837, 0.085096, 0 },
	{ 2.74837, 0.085096, 0 },
	{ 2.73902, 0.241919, 0 },
	{ 2.73902, 0.241919, 0 },
	{ 2.73902, 0.241919, 0 },
	{ 2.72073, 0.397956, 0 },
	{ 2.72073, 0.397956, 0 },
	{ 2.72073, 0.397956, 0 },
	{ 1.35885, 0.614231, 0 },
	{ 1.35885, 0.614231, 0 },
	{ 1.35885, 0.614231, 0 },
	{ 0.970635, 1.13209, 0 },
	{ 0.970635, 1.13209, 0 },
	{ 0.970635, 1.13209, 0 },
	{ 0.399575, 1.4367, 0 },
	{ 0.399575, 1.4367, 0 },
	{ 0.399575, 1.4367, 0 }
};

const double finger_sensor_halfside2[24][3] = {	// in mm
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 },
	{ 0, 0, 2.35 }
};

#endif

