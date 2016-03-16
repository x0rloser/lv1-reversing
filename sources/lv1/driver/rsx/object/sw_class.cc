/**
 * (c) 2016 The LV1RE Project.
 * Released under MIT license. Read LICENSE for more details.
 */

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "inc/rsx_lv1.h"









/***********************************************************************
* 
***********************************************************************/
void rsx_object_sw_class_create_object(rsx_sw_class_obj_t* sw_obj, uS32 class, S64 *opd) {
    
    
    
    
    sw_obj->class = class;              // 0xCAFEBABE
    //sw_obj->opd = type;                 // OPD of rsx_object_sw_driver()
    
    // check OPD
    /*if (opd == NULL) {
    printf("rsx driver assert failed. [%s : %04d : %s()]\n", __FILE__, __LINE__, __func__);
    return 0;
  }*/
    
    // check class
    if (class == 0) {
    printf("rsx driver assert failed. [%s : %04d : %s()]\n", __FILE__, __LINE__, __func__);
    return;
  }
    
    sw_obj->id = -1; 
    
    
    // hier weiter....
    
    
    
    
    
    
    
    
    
    
    
    
    
    return;
}



