// Type: Map.MapLight
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapLight.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapLight.cs  [CHANGED since prior version]
// --------------------------------

// Map.MapLight$$.ctor
// il2cpp: void Map_MapLight___ctor (Map_MapLight_o* __this, UnityEngine_Light_o* light, bool isDaylight, const MethodInfo* method);
// 0x3d9f4c0

void Map_MapLight___ctor(Map_MapLight_o *__this,UnityEngine_Light_o *light,bool_conflict isDaylight,
                        MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  float fVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Light = light;
  il2cpp_runtime_glue(&__this->fields);
  if (light != (UnityEngine_Light_o *)0x0) {
    fVar2 = UnityEngine_Light__get_intensity(light,(MethodInfo *)0x0);
    (__this->fields).MaxIntensity = fVar2;
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)light,(MethodInfo *)0x0);
    (__this->fields)._transform = pUVar1;
    il2cpp_runtime_glue(&(__this->fields)._transform,pUVar1);
    *(char *)&(__this->fields)._isDaylight = (char)isDaylight;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLight$$UpdateCull
// il2cpp: void Map_MapLight__UpdateCull (Map_MapLight_o* __this, UnityEngine_Transform_o* cameraPosition, const MethodInfo* method);
// 0x3d9f520

void Map_MapLight__UpdateCull
               (Map_MapLight_o *__this,UnityEngine_Transform_o *cameraPosition,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Light_o *pUVar3;
  long lVar4;
  bool_conflict bVar5;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  float local_58;
  float fStack_54;
  
  if (DAT_05702761 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05702761 = '\x01';
  }
  pUVar2 = (__this->fields)._transform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar3 = (__this->fields).Light;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar5 == '\0') && ((char)(__this->fields)._isDaylight == '\0')) {
      if (cameraPosition != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__get_position(cameraPosition,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._transform;
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          UVar9 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
          if (DAT_056fdea6 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fdea6 = '\x01';
          }
          local_58 = UVar8.fields.x;
          fStack_54 = UVar8.fields.y;
          local_58 = local_58 - UVar9.fields.x;
          fStack_54 = fStack_54 - UVar9.fields.y;
          fVar6 = UVar8.fields.z - UVar9.fields.z;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_init_class();
          }
          fVar6 = fVar6 * fVar6 + fStack_54 * fStack_54 + local_58 * local_58;
          if (fVar6 < 0.0) {
            fVar6 = sqrtf(fVar6);
          }
          else {
            fVar6 = SQRT(fVar6);
          }
          lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
          if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x80), lVar4 != 0)) {
            iVar1 = *(int *)(lVar4 + 0x14);
            if ((0 < iVar1) && (fVar7 = (float)iVar1, fVar6 < fVar7)) {
              fVar7 = 2.0 - (fVar6 + fVar6) / fVar7;
              fVar6 = 1.0;
              if (fVar7 <= 1.0) {
                fVar6 = fVar7;
              }
              Map_MapLight__UpdateIntensity
                        (__this,(float)(-(uint)(0.0 <= fVar7) & (uint)fVar6) *
                                (__this->fields).MaxIntensity,method_00);
              return;
            }
            pUVar3 = (__this->fields).Light;
            if (pUVar3 != (UnityEngine_Light_o *)0x0) {
              bVar5 = UnityEngine_Behaviour__get_enabled
                                ((UnityEngine_Behaviour_o *)pUVar3,(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                return;
              }
              pUVar3 = (__this->fields).Light;
              if (pUVar3 != (UnityEngine_Light_o *)0x0) {
                UnityEngine_Behaviour__set_enabled
                          ((UnityEngine_Behaviour_o *)pUVar3,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Map.MapLight$$MinimapDisableLight
// il2cpp: bool Map_MapLight__MinimapDisableLight (Map_MapLight_o* __this, const MethodInfo* method);
// 0x3d9f830

bool_conflict Map_MapLight__MinimapDisableLight(Map_MapLight_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  UnityEngine_Light_o *pUVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05702762 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702762 = '\x01';
  }
  x = (__this->fields)._transform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = 0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar1 = (__this->fields).Light;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = 0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pUVar1 = (__this->fields).Light;
      if (pUVar1 == (UnityEngine_Light_o *)0x0) {
LAB_03d9f8eb:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar3 = 0;
      bVar2 = UnityEngine_Behaviour__get_enabled
                        ((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pUVar1 = (__this->fields).Light;
        if (pUVar1 == (UnityEngine_Light_o *)0x0) goto LAB_03d9f8eb;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,0,(MethodInfo *)0x0);
        bVar3 = 1;
      }
    }
  }
  return bVar3;
}


// Map.MapLight$$MinimapEnableLight
// il2cpp: void Map_MapLight__MinimapEnableLight (Map_MapLight_o* __this, const MethodInfo* method);
// 0x3d9f8f0

void Map_MapLight__MinimapEnableLight(Map_MapLight_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  UnityEngine_Light_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05702763 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702763 = '\x01';
  }
  x = (__this->fields)._transform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar1 = (__this->fields).Light;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pUVar1 = (__this->fields).Light;
      if (pUVar1 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,1,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Map.MapLight$$UpdateIntensity
// il2cpp: void Map_MapLight__UpdateIntensity (Map_MapLight_o* __this, float intensity, const MethodInfo* method);
// 0x3d9f780

void Map_MapLight__UpdateIntensity(Map_MapLight_o *__this,float intensity,MethodInfo *method)

{
  UnityEngine_Light_o *pUVar1;
  bool_conflict bVar2;
  float fVar3;
  
  pUVar1 = (__this->fields).Light;
  if (pUVar1 != (UnityEngine_Light_o *)0x0) {
    bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
    if ((intensity != 0.0) || (NAN(intensity))) {
      if ((char)bVar2 == '\0') {
        pUVar1 = (__this->fields).Light;
        if (pUVar1 == (UnityEngine_Light_o *)0x0) goto LAB_03d9f821;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,1,(MethodInfo *)0x0);
      }
      pUVar1 = (__this->fields).Light;
      if (pUVar1 != (UnityEngine_Light_o *)0x0) {
        fVar3 = UnityEngine_Light__get_intensity(pUVar1,(MethodInfo *)0x0);
        if ((fVar3 == intensity) && (!NAN(fVar3) && !NAN(intensity))) {
          return;
        }
        pUVar1 = (__this->fields).Light;
        if (pUVar1 != (UnityEngine_Light_o *)0x0) {
          UnityEngine_Light__set_intensity(pUVar1,intensity,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar1 = (__this->fields).Light;
      if (pUVar1 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03d9f821:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


