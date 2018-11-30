#include <cstdlib>
#include <ctime> 
#include <cstring>
#include <iostream>

class Palabra{
    protected:
        const char * palabra;
        const char * genero;
        const char * cantidad;

    public:
        Palabra(const char * p):palabra(p), genero("n"), cantidad("n"){}
        Palabra(const char * p, const char * g, const char  * c):palabra(p), genero(g), cantidad(c){}
        const char * getPalabra(){
            return palabra;
        }
};

class Sustantivo:public Palabra{
    const char * getPalabra(){
            if( cantidad == "p"){
                char plural[std::strlen(palabra)+1]={"\0"};
                std::strcat(plural,palabra);
                std::strcat(plural,"s");
            }
            return palabra;
    }
};

int main()
{
    std::srand(std::time(0));
    Palabra articulos[8] =   {Palabra("el", "m", "s"), Palabra("la", "f", "s"), Palabra("los", "m", "p"), Palabra("las", "f", "p"), Palabra("un", "m", "s"), Palabra("una", "f", "s"), Palabra("unos", "m", "p"), Palabra("unas", "f", "p")};
    Palabra verbos[100] =  {Palabra("abrir"), Palabra("aceptar"), Palabra("apagar"), Palabra("aprender"), Palabra("bailar"), Palabra("beber"), Palabra("buscar"), Palabra("caber"), Palabra("caerse"), Palabra("cambiar"), Palabra("caminar"), Palabra("cancelar"), Palabra("cantar"), Palabra("casarse"), Palabra("cerrar"), Palabra("comenzar"), Palabra("comer"), Palabra("comprar"), Palabra("conducir"), Palabra("conocer"), Palabra("contar"), Palabra("contestar"), Palabra("correr"), Palabra("cortar"), Palabra("creer"), Palabra("dañar"), Palabra("dar"), Palabra("decir"), Palabra("correr"), Palabra("deletrear"), Palabra("despertarse"), Palabra("dibujar"), Palabra("dormir"), Palabra("encender"), Palabra("encontrar"), Palabra("enseñar"), Palabra("entender"), Palabra("enviar"), Palabra("escribir"), Palabra("escuchar"), Palabra("esperar"), Palabra("estar"), Palabra("estudiar"), Palabra("explicar"), Palabra("firmar"), Palabra("fumar"), Palabra("gastar"), Palabra("hablar"), Palabra("hacer"), Palabra("gustar"), Palabra("herir"), Palabra("intentar"), Palabra("ir"), Palabra("jugar"), Palabra("leer"), Palabra("limpiar"), Palabra("llenar"), Palabra("llover"), Palabra("mirar"), Palabra("nadar"), Palabra("necesitar"), Palabra("oir"), Palabra("olvidar"), Palabra("organizar"), Palabra("pagar"), Palabra("parar"), Palabra("pedir"), Palabra("peinar"), Palabra("pensar"), Palabra("perder"), Palabra("poder"), Palabra("poner"), Palabra("ponerse de pie"), Palabra("preguntar"), Palabra("preocuparse"), Palabra("prestar"), Palabra("quejarse"), Palabra("querer"), Palabra("reparar"), Palabra("responder"), Palabra("romper"), Palabra("saber"), Palabra("salir"), Palabra("sentarse"), Palabra("sentir"), Palabra("ser"), Palabra("tener"), Palabra("terminar"), Palabra("tomar"), Palabra("tocar"), Palabra("toser"), Palabra("trabajar"), Palabra("traducir"), Palabra("traer"), Palabra("usar"), Palabra("vender"), Palabra("ver"), Palabra("viajar"), Palabra("vivir"), Palabra("volar")};
    Palabra sustantivos[10] = {Palabra("crema", "f", "s"), Palabra("café", "m", "s"), Palabra("estrella", "f", "s"), Palabra("explosión", "f", "s"), Palabra("guitarra", "f", "s"), Palabra("plástico", "m", "s"), Palabra("navaja", "f", "s"), Palabra("martillo", "m", "s"), Palabra("libro", "m", "s"), Palabra("lápiz", "m", "s")}; 
    //Palabra sustantivos[169] = {Palabra("crema"), Palabra("café"), Palabra("estrella"), Palabra("explosión"), Palabra("guitarra"), Palabra("plástico"), Palabra("navaja"), Palabra("martillo"), Palabra("libro"), Palabra("lápiz"), Palabra("lapicera"), Palabra("aluminio"), Palabra("embarcación"), Palabra("letra"), Palabra("agujeta"), Palabra("ventana"), Palabra("librería"), Palabra("sonido"), Palabra("universidad"), Palabra("rueda"), Palabra("perro"), Palabra("llave"), Palabra("camisa"), Palabra("pelo"), Palabra("papá"), Palabra("sillón"), Palabra("felicidad"), Palabra("catre"), Palabra("teclado"), Palabra("servilleta"), Palabra("escuela"), Palabra("pantalla"), Palabra("sol"), Palabra("codo"), Palabra("tenedor"), Palabra("estadística"), Palabra("mapa"), Palabra("agua"), Palabra("mensaje"), Palabra("lima"), Palabra("cohete"), Palabra("rey"), Palabra("edificio"), Palabra("césped"), Palabra("presidencia"), Palabra("hoja"), Palabra("parlante"), Palabra("colegio"), Palabra("granizo"), Palabra("pestaña"), Palabra("lámpara"), Palabra("mano"), Palabra("monitor"), Palabra("flor"), Palabra("música"), Palabra("hombre"), Palabra("tornillo"), Palabra("habitación"), Palabra("velero"), Palabra("abuela"), Palabra("abuelo"), Palabra("palo"), Palabra("satélite"), Palabra("templo"), Palabra("lente"), Palabra("bolígrafo"), Palabra("plato"), Palabra("nube"), Palabra("gobierno"), Palabra("botella"), Palabra("castillo"), Palabra("enano"), Palabra("casa"), Palabra("libro"), Palabra("persona"), Palabra("planeta"), Palabra("televisor"), Palabra("guante"), Palabra("metal"), Palabra("teléfono"), Palabra("proyector"), Palabra("mono"), Palabra("remera"), Palabra("muela"), Palabra("petróleo"), Palabra("percha"), Palabra("remate"), Palabra("debate"), Palabra("anillo"), Palabra("cuaderno"), Palabra("ruido"), Palabra("pared"), Palabra("taladro"), Palabra("herramienta"), Palabra("carta"), Palabra("chocolate"), Palabra("anteojos"), Palabra("impresora"), Palabra("caramelo"), Palabra("luz"), Palabra("angustia"), Palabra("zapato"), Palabra("bomba"), Palabra("lluvia"), Palabra("ojo"), Palabra("corbata"), Palabra("periódico"), Palabra("diente"), Palabra("planta"), Palabra("chupetín"), Palabra("buzo"), Palabra("oficina"), Palabra("persiana"), Palabra("puerta"), Palabra("tío"), Palabra("silla"), Palabra("ensalada"), Palabra("pradera"), Palabra("zoológico"), Palabra("candidato"), Palabra("deporte"), Palabra("recipiente"), Palabra("diario"), Palabra("fotografía"), Palabra("ave"), Palabra("hierro"), Palabra("refugio"), Palabra("pantalón"), Palabra("barco"), Palabra("carne"), Palabra("nieve"), Palabra("tecla"), Palabra("humedad"), Palabra("pistola"), Palabra("departamento"), Palabra("celular"), Palabra("tristeza"), Palabra("hipopótamo"), Palabra("sofá"), Palabra("cama"), Palabra("árbol"), Palabra("mesada"), Palabra("campera"), Palabra("discurso"), Palabra("auto"), Palabra("cinturón"), Palabra("rúcula"), Palabra("famoso"), Palabra("madera"), Palabra("lenteja"), Palabra("piso"), Palabra("maletín"), Palabra("reloj"), Palabra("diputado"), Palabra("cuchillo"), Palabra("desodorante"), Palabra("candado"), Palabra("montaña"), Palabra("computadora"), Palabra("radio"), Palabra("moño"), Palabra("cuadro"), Palabra("calor"), Palabra("partido"), Palabra("teatro"), Palabra("bife"), Palabra("fiesta"), Palabra("bala"), Palabra("auricular")};
    Palabra preposiciones[23] = {Palabra("a"), Palabra("ante"), Palabra("bajo"), Palabra("cabe"), Palabra("con"), Palabra("contra"), Palabra("de"), Palabra("desde"), Palabra("en"), Palabra("entre"), Palabra("hacia"), Palabra("hasta"), Palabra("para"), Palabra("por"), Palabra("según"), Palabra("sin"), Palabra("so"), Palabra("sobre"), Palabra("tras"), Palabra("durante"), Palabra("mediante"), Palabra("versus"), Palabra("vía")}; 

    char oracion[200] = {"\0"};
    Palabra * ora[6];
    int r = 0;
    
    for(int i = 0; i<20; i++){
        //articulo
        r =  std::rand()%7;
        ora[0] = &(articulos[r]);
        //sustantivo
        r = std::rand()%9;
        ora[1] = &(sustantivos[r]);
        //verbo
        r= std::rand()%99;
        ora[2] = &(verbos[r]);
        //preposicion
        r = std::rand()%22;
        ora[3] = &(preposiciones[r]);
        //articulo
        r = std::rand()%7;
        ora[4] = &(articulos[r]);
        //sustantivo
        r = std::rand()%9;
        ora[5] = &(sustantivos[r]);



       /* 
        oracion[0] = (int)oracion[0]-32;
        std::cout<<oracion<<std::endl;
        oracion[0] = '\0';
        */
    }
    return 0;
}