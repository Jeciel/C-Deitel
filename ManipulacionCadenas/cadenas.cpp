#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ctime>


int main()
{
    std::srand(std::time(0));
    const char *articulos[8] = {"el","la","los","las","un","una","unos","unas"};
    const char *verbos[100] =  {"abrir", "aceptar", "apagar", "aprender", "bailar", "beber", "buscar", "caber", "caerse", "cambiar", "caminar", "cancelar", "cantar", "casarse", "cerrar", "comenzar", "comer", "comprar", "conducir", "conocer", "contar", "contestar", "correr", "cortar", "creer", "dañar", "dar", "decir", "correr", "deletrear", "despertarse", "dibujar", "dormir", "encender", "encontrar", "enseñar", "entender", "enviar", "escribir", "escuchar", "esperar", "estar", "estudiar", "explicar", "firmar", "fumar", "gastar", "hablar", "hacer", "gustar", "herir", "intentar", "ir", "jugar", "leer", "limpiar", "llenar", "llover", "mirar", "nadar", "necesitar", "oir", "olvidar", "organizar", "pagar", "parar", "pedir", "peinar", "pensar", "perder", "poder", "poner", "ponerse de pie", "preguntar", "preocuparse", "prestar", "quejarse", "querer", "reparar", "responder", "romper", "saber", "salir", "sentarse", "sentir", "ser", "tener", "terminar", "tomar", "tocar", "toser", "trabajar", "traducir", "traer", "usar", "vender", "ver", "viajar", "vivir", "volar"};
    const char *sustantivos[171] = {"crema", "café", "estrella", "explosión", "guitarra", "plástico", "navaja", "martillo", "libros", "lápiz", "lapicera", "aluminio", "embarcación", "letra", "agujeta", "ventana", "librería", "sonido", "universidad", "rueda", "perro", "llaves", "camisa", "pelo", "papá", "sillón", "felicidad", "catre", "teclado", "servilleta", "escuela", "pantalla", "sol", "codo", "tenedor", "estadística", "mapa", "agua", "mensaje", "lima", "cohete", "rey", "edificio", "césped", "presidencia", "hojas", "parlante", "colegio", "granizo", "pestaña", "lámpara", "mano", "monitor", "flor", "música", "hombre", "tornillo", "habitación", "velero", "abuela", "abuelo", "palo", "satélite", "templo", "lentes", "bolígrafo", "plato", "nube", "gobierno", "botella", "castillo", "enano", "casa", "libro", "persona", "planeta", "televisor", "guantes", "metal", "teléfono", "proyector", "mono", "remera", "muela", "petróleo", "percha", "remate", "debate", "anillo", "cuaderno", "ruido", "pared", "taladro", "herramienta", "cartas", "chocolate", "anteojos", "impresora", "caramelos", "living", "luces", "angustia", "zapato", "bomba", "lluvia", "ojo", "corbata", "periódico", "diente", "planta", "chupetín", "buzo", "oficina", "persiana", "puerta", "tío", "silla", "ensalada", "pradera", "zoológico", "candidato", "deporte", "recipiente", "diarios", "fotografía", "ave", "hierro", "refugio", "pantalón", "barco", "carne", "nieve", "tecla", "humedad", "pistola", "departamento", "celular", "tristeza", "hipopótamo", "sofá", "cama", "árbol", "mesada", "campera", "discurso", "auto", "cinturón", "rúcula", "famoso", "madera", "lentejas", "piso", "maletín", "reloj", "diputado", "cuchillo", "desodorante", "candado", "luz", "montañas", "computadora", "radio", "moño", "cuadro", "calor", "partido", "teatro", "bife", "fiesta", "bala", "auriculares" };
    const char *preposiciones[23] = {"a","ante","bajo","cabe","con","contra","de","desde","en","entre","hacia","hasta","para","por","según","sin","so","sobre","tras","durante","mediante","versus y","vía"};

    char oracion[200] = {"\0"};

    int r = 0;
    for(int i = 0; i<20; i++){
        //articulo
        r =  std::rand()%7;
        std::strcat(oracion, articulos[r]);
        std::strcat(oracion, " ");
        //sustantivo
        r = std::rand()%170;
        std::strcat(oracion, sustantivos[r]);
        std::strcat(oracion, " ");
        //verbo
        r= std::rand()%99;
        std::strcat(oracion, verbos[r]);
        std::strcat(oracion, " ");
        //preposicion
        r = std::rand()%22;
        std::strcat(oracion, preposiciones[r]);
        std::strcat(oracion, " ");
        //articulo
        r = std::rand()%7;
        std::strcat(oracion, articulos[r]);
        std::strcat(oracion, " ");
        //sustantivo
        r = std::rand()%170;
        std::strcat(oracion, sustantivos[r]);
        std::strcat(oracion, ".");

        oracion[0] = (int)oracion[0]-32;
        std::cout<<oracion<<std::endl;
        oracion[0] = '\0';
    }
    return 0;
}