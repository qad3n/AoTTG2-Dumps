// Type: Weather.FlashlightWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/FlashlightWeatherEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/FlashlightWeatherEffect.cs  [CHANGED since prior version]
// --------------------------------

// Weather.FlashlightWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_FlashlightWeatherEffect__get__positionOffset (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d74ba0

UnityEngine_Vector3_o
Weather_FlashlightWeatherEffect__get__positionOffset
          (Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  UVar2.fields.x = (float)uVar1 * 0.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 0.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Weather.FlashlightWeatherEffect$$Randomize
// il2cpp: void Weather_FlashlightWeatherEffect__Randomize (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d74bf0

void Weather_FlashlightWeatherEffect__Randomize
               (Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.FlashlightWeatherEffect$$Setup
// il2cpp: void Weather_FlashlightWeatherEffect__Setup (Weather_FlashlightWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x3d74c00

void Weather_FlashlightWeatherEffect__Setup
               (Weather_FlashlightWeatherEffect_o *__this,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  UnityEngine_Light_o **ppUVar1;
  UnityEngine_Light_o *pUVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05702632 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Light_GetComponentInChildren_Light);
    DAT_05702632 = '\x01';
    method = extraout_RDX;
  }
  Weather_BaseWeatherEffect__Setup((Weather_ThunderWeatherEffect_o *)__this,parent,method);
  pUVar2 = (UnityEngine_Light_o *)
           UnityEngine_Component__GetComponentInChildren<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Light_GetComponentInChildren_Light);
  ppUVar1 = &(__this->fields)._light;
  (__this->fields)._light = pUVar2;
  il2cpp_runtime_glue(ppUVar1);
  pUVar2 = (__this->fields)._light;
  if (pUVar2 != (UnityEngine_Light_o *)0x0) {
    UnityEngine_Light__set_range(pUVar2,120.0,(MethodInfo *)0x0);
    if (*ppUVar1 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_intensity(*ppUVar1,1.0,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Light__set_spotAngle(*ppUVar1,60.0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._22_SetColor.methodPtr)
                  (0,0,__this,(__this->klass->vtable)._22_SetColor.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.FlashlightWeatherEffect$$SetColor
// il2cpp: void Weather_FlashlightWeatherEffect__SetColor (Weather_FlashlightWeatherEffect_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3d74cd0

void Weather_FlashlightWeatherEffect__SetColor
               (Weather_FlashlightWeatherEffect_o *__this,UnityEngine_Color_o color,
               MethodInfo *method)

{
  UnityEngine_Light_o *__this_00;
  
  __this_00 = (__this->fields)._light;
  if (__this_00 != (UnityEngine_Light_o *)0x0) {
    UnityEngine_Light__set_color(__this_00,color,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.FlashlightWeatherEffect$$LateUpdate
// il2cpp: void Weather_FlashlightWeatherEffect__LateUpdate (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d74cf0

void Weather_FlashlightWeatherEffect__LateUpdate
               (Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Light_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  float local_28;
  float fStack_24;
  
  if (DAT_05702633 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702633 = '\x01';
  }
  pUVar1 = (__this->fields)._parent;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._light;
  if (pUVar2 != (UnityEngine_Light_o *)0x0) {
    pUVar6 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if ((char)bVar5 == '\0') {
          return;
        }
        pUVar2 = (__this->fields)._light;
        if (pUVar2 != (UnityEngine_Light_o *)0x0) {
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        if ((char)bVar5 == '\0') {
          pUVar2 = (__this->fields)._light;
          if (pUVar2 == (UnityEngine_Light_o *)0x0) goto LAB_03d74e76;
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_03d74e76;
          UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
        }
        pUVar1 = (__this->fields)._parent;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = (__this->fields)._transform;
          value_00 = UnityEngine_Transform__get_rotation(pUVar1,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(pUVar3,value_00,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._parent;
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pUVar3 = (__this->fields)._transform;
              UVar7 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._parent;
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                UVar8 = UnityEngine_Transform__get_forward(pUVar1,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  local_28 = UVar7.fields.x;
                  fStack_24 = UVar7.fields.y;
                  value.fields.y = fStack_24 + UVar8.fields.y * -0.1;
                  value.fields.x = local_28 + UVar8.fields.x * -0.1;
                  value.fields.z = UVar7.fields.z + UVar8.fields.z * -0.1;
                  UnityEngine_Transform__set_position(pUVar3,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03d74e76:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.FlashlightWeatherEffect$$.ctor
// il2cpp: void Weather_FlashlightWeatherEffect___ctor (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d74e80

void Weather_FlashlightWeatherEffect___ctor(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor(__this,method);
  return;
}


