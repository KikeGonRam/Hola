const colors = ['\x1b[31m', '\x1b[32m', '\x1b[33m', '\x1b[34m', '\x1b[35m'];
for (let i = 0; i < 10; i++) {
    console.clear();
    console.log(colors[i % colors.length] + '¡Hola, Mundo con colores!');
}
console.log('\x1b[0m');
