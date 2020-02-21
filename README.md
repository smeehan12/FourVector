# Four Vector

## Descriptions

This is a class that defines and allows you to use a four vector structure.

## Author : Samuel Meehan [<samuel.meehan@cern.ch>](mailto:samuel.meehan@cern.ch)

# Members
- **e**  : Energy
- **px** : Momentum in the x-direction
- **px** : Momentum in the y-direction
- **px** : Momentum in the z-direction

# Methods

- **FourVector(float px, float py, float pz, float e)** : Constructor
- **void SetFourVector(float px, float py, float pz, float e)** : Resets the contents of the four vector
- **float GetE()** : Obtain the energy of the four vector
- **float GetPx()** : Obtain the momentum of the four vector in the x-directions
- **float GetPy()** : Obtain the momentum of the four vector in the y-directions
- **float GetPz()** : Obtain the momentum of the four vector in the z-directions
- **void Print()** : Print a descriptor of the four vector
- **void Add(FourVector fv2)** : Adds the four vector __fv2__ to the current four vector and replace its contents
- **void Scale(float scale_factor)** : Scales all elements of the four vector by __scale_factor__
- **float InnerProduct(FourVector fv2)** : Compute the [inner product](https://uspas.fnal.gov/materials/12MSU/Conrad_4vector.pdf) of the current four vector and __fv2__
- **float GetMass()** : Compute the invariant mass of the four vector
- **float GetPt()** : Compute the transverse momentum 
- **float GetTheta()** : Compute the polar angle of the four vector
- **float GetPhi()** : Compute the azimuthal angle direction of the four vector
- **float GetEta()** : Compute the [pseudorapidity](https://en.wikipedia.org/wiki/Pseudorapidity) of the four vector
- **float DeltaPhi(FourVector fv2)** : Compute the azimuthal angular separation between the current four vector and __fv2__
- **float DeltaEta(FourVector fv2)** : Compute the separation in pseudorapidity between the current four vector and __fv2__