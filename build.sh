# Build Image
docker build --rm -f nix-build.dockerfile -t bg-memory:latest .

# Run Compilation Script
docker run -v ${PWD}:/usr/proj bg-memory sh ./scripts/nix-build.sh