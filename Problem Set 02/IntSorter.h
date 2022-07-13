#pragma once

class IntVector; // forward declaration for container
class IntSorter

{
public:
	virtual ~IntSorter() {}
	virtual void operator()(IntVector& aContainer) 
		const {}
};