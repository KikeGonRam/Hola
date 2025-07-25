const tsFrames = ["|", "/", "-", "\\"];
for (let i = 0; i < 20; i++) {
    process.stdout.write(`\r${tsFrames[i % tsFrames.length]} ¡Hola, TypeScript!`);
    Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 0, 100);
}
console.log("\n¡Animación en TypeScript!");
