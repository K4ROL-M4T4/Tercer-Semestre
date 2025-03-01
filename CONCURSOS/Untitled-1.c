void elimina_final(TNodo **cab){
    if(*cab==NULL){ //LISTA VACIA
        printf("La lista esta vacia");
        return;
    }
    TNodo *actual=*cab, +prev=NULL;
    while(actual->sig!=NULL){
        prev=actual;
        actual=actual->sig;
    }
    if(prev=NULL){
        *cab=NULL;
    }else{
        prev->sig=NULL;
    }
    free(actual);
}

/*para recursivo se debe actualizar referenciay no es necesario actual y previo
if else if else if
cab->sig==NULL{free(cab)  cab=NULL return, cab==NULL return}
void elim(cab)
if(cab->sig-<sig==NULL){
x=cab->sig
free(x)
cab->sig=NULL
elim(cab->sig)}
*/