#ifndef AED2_SIMULACION_H
#define AED2_SIMULACION_H

#include "Tipos.h"
#include "aed2_mapa.h"
#include "Simulacion.h"


class aed2_Simulacion {
public:

    /**
     * Pre:
     *  > inicio está en contenido en mapa
     *  > las coordenadas en objetos estan en mapa y no se repiten
     *  > las coordenadas en objetos no se solapan con la posición del agente
     */
    aed2_Simulacion(const aed2_Mapa& mapa, const map<Color, Coordenada>& objetos, Coordenada inicio);
    ~aed2_Simulacion();
    void mover(Direccion d);

    void agregarObjetivo(Objetivo o);

    const aed2_Mapa mapa() const;

    const map<Color, Coordenada> &posObjetos() const;

    Coordenada posAgente() const;

    const list<Objetivo> &objetivosDisponibles() const;

    Nat movimientos() const;
    
    Nat objetivosResueltos() const;


private:
    Simulacion _sim;
    map<Color,Coordenada> _objetos;
};

#endif // AED2_SIMULACION_H
