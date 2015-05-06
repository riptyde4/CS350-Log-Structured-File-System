#include "LFS.h"

int main(int argc, char * argv[]){

	int numFiles = 3;
	int numSegs = 10;
	int blocksPerSeg = 3;
	LFS sim(numFiles, numSegs, blocksPerSeg, POLICY_THREADING);

	// Test adding files
	sim.addFile(0, 6);
	sim.addFile(1, 10);
	sim.addFile(2, 5);

	// Display disk contents
	sim.displayDiskContents();

	return 0;
}