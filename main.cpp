#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

int
main ()
{
  // variable declarations
  float sphereRadii = 0.0;
  float radiusHandle = 0.0;
  float lengthHandle = 0.0;
  float volumeSphere = 0.0;
  float volumeCylinder = 0.0;
  float totalVolume = 0.0;
  float densityAluminum = 2.7;
  float densityIron = 7.9;
  float densityLead = 11.4;
  float densityPlatinum = 21.5;
  double massAluminum;
  double massIron;
  double massLead;
  double massPlatinum;

  // read input
  cout << "Enter radius of the spheres: ";
  cin >> sphereRadii;
  cout << "Enter the radius of the handle: ";
  cin >> radiusHandle;
  cout << "Enter the length of the handle: ";
  cin >> lengthHandle;

  // calculate the volume of the spheres
  volumeSphere = (4.0 / 3.0) * M_PI * sphereRadii * sphereRadii * sphereRadii;

  // print the spheres volume
  cout << "The volume of one sphere = " << volumeSphere << " cm^3" << endl;

  // calculate the volume of the volumeCylinder
  volumeCylinder = M_PI * lengthHandle * radiusHandle * radiusHandle;

  // print the cylinders volume
  cout << "The cylinders volume = " << volumeCylinder << " cm^3" << endl;

  // calculate total volume
  totalVolume = volumeSphere * 2 + volumeCylinder;

  // print the total volume of the dumbell
  cout << "The total volume of the dumbell = " << totalVolume << " cm^3" <<
    endl;

  //calculate volume of dumbell in different metals
  massAluminum = densityAluminum * totalVolume;
  cout << "The volume of a dumbell made of Aluminum = " << massAluminum <<
    " grams" << endl;
  massIron = densityIron * totalVolume;
  cout << "The volume of a dumbell made of Iron = " << massIron << " grams"
    << endl;
  massLead = densityLead * totalVolume;
  cout << "The volume of a dumbell made of Lead = " << massLead << " grams"
    << endl;
  massPlatinum = densityPlatinum * totalVolume;
  cout << "The volume of a dumbell made of Platinum = " << massPlatinum <<
    " grams" << endl;




  return 0;
}

